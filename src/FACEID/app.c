extern void tier1_init();
extern void tier1_2_init();
extern void tier1_3_init();
extern void tier2_init();
extern void tier3_init();

// this function will be called only at first boot by the runtime
void __app_init(){
    tier1_init();
    // tier1_2_init();
    // tier1_3_init();
    // tier2_init();
    // tier3_init();
}

void __app_reboot()
{
  __asm volatile("nop");
}
