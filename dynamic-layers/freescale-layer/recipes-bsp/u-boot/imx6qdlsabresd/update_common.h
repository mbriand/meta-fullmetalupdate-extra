#ifndef U_BOOT_UPDATE_COMMON_H

#define CONFIG_ENV_OFFSET		(1 * 1024)
#define CONFIG_ENV_SIZE			(3 * 1024)
#define CONFIG_SYS_MMC_ENV_DEV		0

#define CONFIG_SYS_REDUNDAND_ENVIRONMENT
#define CONFIG_ENV_OFFSET_REDUND    (CONFIG_ENV_OFFSET + CONFIG_ENV_SIZE)

#endif
