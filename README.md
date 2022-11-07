# embedded-firmware 


## Required Hardware:
1. [Supersensor Board](https://github.com/ka-moamoa/protean-hardware)

2. ARM Cortex debugger like JLINK debugger (e.g. [J-Link EDU Mini](https://www.adafruit.com/product/3571?gclid=EAIaIQobChMIqeXO9fvS7QIVEI3ICh3I5g0TEAQYAiABEgJDwvD_BwE)) OR [MAX32625PICO](https://www.maximintegrated.com/en/products/microcontrollers/MAX32625PICO.html).

3. USB cables depending on the type of USB ports of your computer <br><br>


## Prerequisites:

1. Install Vistual Studio Code (I use it because it is very flexible, you may use Eclipse or your preferred IDE)

    [Visual Studio Code - Code Editing. Redefined](https://code.visualstudio.com/)

2. Intall GNU `make`. This step may vary depending on the operating sytem you are using. Following are some pointers

    [MAC](https://stackoverflow.com/questions/10265742/how-to-install-make-and-gcc-on-a-mac), [Windows](https://stackoverflow.com/questions/12881854/how-to-use-gnu-make-on-windows), [Ubuntu](https://stackoverflow.com/questions/11934997/how-to-install-make-in-ubuntu)
    

3. Install GNU Arm Embedded Toolchain

    [GNU Toolchain | GNU Arm Embedded Toolchain Downloads - Arm Developer](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)

4. Download MAX78000 SDK. The SDK is hosted on GitHub and is a submodule of the ai8x-sythesis repository. To get the SDK and all the additional supporting files, clone the [ai8x-sythesis](https://github.com/MaximIntegratedAI/ai8x-synthesis) repository including submodules and save it somewhere other than your project directory.

    ```bash
    git clone --recursive https://github.com/MaximIntegratedAI/ai8x-synthesis 
    ```

5. Download and install [OpenOCD](https://github.com/MaximIntegratedMicros/openocd). Installing OpenOCD directly from package managers like `brew` or `apt` may not work for MAX78000. You will need to clone it from GitHub and build it manually on your computer. First clone the repository
    ```bash
    git clone --recursive https://github.com/MaximIntegratedMicros/openocd
    ```

    Please refer to "OpenOCD Dependencies" in the repository to make sure you have everything ready. Basically, you need to have `make`, `libtool`, `pkg-config`, `autoconf`, `automake`, `texinfo`, `libusb`, and `hidapi` installed in order to build OpenOCD. Installing `hidapi` is tricky. First clone it from GitHub.

    ```bash
    git clone --recursive https://github.com/libusb/hidapi.git
    ```

    Go to `hidapi` directory from terminal and run

    ```bash
    ./bootstrap
    ./configure
    sudo make
    sudo make install
    ```

    Now, go to OpenOCD directory from terminal and follow below steps

    - You need to tell the build system where to look for `hidapi` and `libusb` packages. I was able to build on Ubuntu without this step, but needed this for Mac. Find where these packages are installed and change the paths in the command below.
            
        ```bash
        export PKG_CONFIG_PATH=/usr/local/Cellar/hidapi/0.10.1/lib/pkgconfig/:/usr/local/Cellar/libusb/1.0.24/lib/pkgconfig/
        ```
    -  Run
            
        ```bash
        ./bootstrap
        ./configure --enable-cmsis-dap --enable-jlink
        sudo make
        sudo make install
        ```

6. Install [PySerial](https://pypi.org/project/pyserial/). This is needed to see printf messages. 

7. Now, clone [embedded-firmware](https://gitlab.com/ka-moamoa/supersensor/software/runtime/embedded-firmware/) repo somewhere on your computer

    ```bash
    git clone https://gitlab.com/ka-moamoa/supersensor/software/runtime/embedded-firmware/
    ```
8. To fetch Ink-Kernel submodule, run the following command in terminal.
    ```bash
    git submodule update --init --remote
    ```
## Visual Studio Code Setup:

1. Setup 2 environmental variables that will be used to specify the Maxim path and ARM_GCC path(both should be the root folder). Run the commands below in a shell to set the environmental variables temporarily. To permanently set them, add these lines to the end of your `~/.profile` or `~/.bash_profile` or `~/.zprofile` depending on your shell setup.
    ```bash
    export MAXIM_PATH="path to your maxim sdk folder"
    export ARM_PATH="path to gcc-arm-none-eabi folder"
    ```

2. Now, you can build by either running `make release` in the terminal in VS code or using tasks that are defined in `tasks.json` in `.vscode` directory. To do this, press `F1` and write `Tasks: Run Build Task`, then click on `build-release`.

3. To upload the code, press `F1` then `Tasks: Run Build Task`, and click on `flash-jlink` or `flash-cmsis-dap` for MAX78000EVKIT depending on the debugger you are using, and click on `flash-cmsis-dap` for MAX78000FTHR.

4. To clean a previous build, press `F1` then `Tasks: Run Build Task`, and click on `clean`.

5. You may set up VS Code [keyboard shortcuts](https://code.visualstudio.com/docs/getstarted/keybindings) to make `clean`, `build` and `flash` process smoother and faster

6. Install [Cortex-Debug](https://marketplace.visualstudio.com/items?itemName=marus25.cortex-debug) extension in VS Code. Change `adapter driver` to `cmsis-dap` [here](https://gitlab.com/ka-moamoa/supersensor/software/runtime/embedded-firmware/-/blob/2-fram-driver/.vscode/launch.json#L16). A run symbol on left side bar in VS Code will appear. Click on it and then click green run button on top left. This will build the code and you will see the pointer on `main()`. Now you can put breakpoints and start debugging as you like. Happy debugging :)

7. Open terminal, change usb device path in the command below and run. Start executing instructions in debug mode to see all printf messages in the terminal. You may use any other serial tools for this.

    ```bash
    miniterm.py /dev/cu.usbserial-D30754YD 115200
    ```

## Building New Apps

Please refer to [MaximAI](https://github.com/MaximIntegratedAI/MaximAI_Documentation) repository to see how ML applications can be built
