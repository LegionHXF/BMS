# BMS
基于STM32和TIBQ76920方案的BMS

**开发方式**：STM32 HAL库+STM32CubeMX+Keil MDK+RT-thread nano


项目基于 STM32 微控制器与 BQ92003PWR 电池管理芯片，实现了一套电池状态监控、充放电控制与异常保护机制系统。实现电池参数采集、充放电控制、安全保护及能源管理核心功能，支持UART串口命令行交互与状态监控。并具备被动均衡控制、SOC估算算法及多级保护机制，确保电池安全运行。并将该系统移植到Freertos和Rtthread。

**BMS结构图**

<img width="1118" height="470" alt="image" src="https://github.com/user-attachments/assets/fc20a2ea-ecc8-4706-9593-9a556c7300b9" />


**代码结构**

<img width="530" height="685" alt="image" src="https://github.com/user-attachments/assets/59ee6884-ca5c-41ac-9dd0-829e44d9e63f" />

