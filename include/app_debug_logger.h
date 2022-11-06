#ifndef APP_DEBUG_LOGGER_H_
#define APP_DEBUG_LOGGER_H_

#if APP_DEBUG_PRINT
#define APP_LOG_DEBUG(...) \
{ \
    do { \
        printf("[APP_DEBUG] --> %s:%d\t| ", __FILE__, __LINE__); \
        printf(__VA_ARGS__); \
        printf("\n");} \
    while (0); \
}

#else
#define APP_LOG_DEBUG(...)
#endif

#if APP_INFO_PRINT
#define APP_LOG_INFO(...) \
{ \
    do { \
        printf("[APP_INFO] --> %s:%d\t| ", __FILE__, __LINE__); \
        printf(__VA_ARGS__); \
        printf("\n");} \
    while (0); \
}

#else
#define APP_LOG_INFO(...)
#endif

#if APP_WARN_PRINT
#define APP_LOG_WARNING(...) \
{ \
    do { \
        printf("[APP_WARNING] --> %s:%d\t| ", __FILE__, __LINE__); \
        printf(__VA_ARGS__); \
        printf("\n");} \
    while (0); \
}

#else
#define APP_LOG_WARNING(...)
#endif

#if APP_ERROR_PRINT
#define APP_LOG_ERROR(...) \
{ \
    do { \
        printf("[APP_ERROR] --> %s:%d\t| ", __FILE__, __LINE__); \
        printf(__VA_ARGS__); \
        printf("!!!\n");} \
    while (0); \
}

#else
#define APP_LOG_ERROR(...)
#endif

#endif // APP_DEBUG_LOGGER_H_