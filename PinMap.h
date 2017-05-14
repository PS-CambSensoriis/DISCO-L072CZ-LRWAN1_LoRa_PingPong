/*
 * Copyright (c) 2017 Helmut Tschemernjak
 * 30826 Garbsen (Hannover) Germany
 * Licensed under the Apache License, Version 2.0);
 */



#ifdef TARGET_NUCLEO_L476RG
 #define FEATURE_LORA   1
#elif TARGET_STM32L0
 #define FEATURE_LORA   1
 #define B_L072Z_LRWAN1_LORA    1 // the STM Lora Board
#endif



#if  defined(TARGET_STM32L0)

#ifdef B_L072Z_LRWAN1_LORA      // B-L072Z-LRWAN1 LoRa Board using the Murta SX1276
#define USER_BUTTON     PB_2    // Red not PC13 as used on the Nucleo
#define LED2            PA_5    // Green
#define LED3            PB_6    // Blue
#define LED4            PB_7    // Red

#define LORA_SPI_MOSI   PA_7
#define LORA_SPI_MISO   PA_6
#define LORA_SPI_SCLK   PB_3
#define LORA_CS         PA_15
#define LORA_RESET      PC_0
#define LORA_DIO0       PB_4
#define LORA_DIO1       PB_1
#define LORA_DIO2       PB_0
#define LORA_DIO3       PC_13
#define LORA_DIO4       PA_5
#define LORA_DIO5       PA_4
#define LORA_ANT_RX     PA_1
#define LORA_ANT_TX     PC_2
#define LORA_ANT_BOOST  PC_1
#define LORA_TCXO       PA_12   // 32 MHz
#endif // B_L072Z_LRWAN1_LORA



#elif defined(TARGET_NUCLEO_L476RG) // using the RFM95 board

#define LORA_SPI_MOSI   PC_12
#define LORA_SPI_MISO   PC_11
#define LORA_SPI_SCLK   PC_10
#define LORA_CS         PA_0
#define LORA_RESET      PA_1
#define LORA_DIO0       PD_2    // DIO0=TxDone/RXDone
#define LORA_DIO1       PB_7    //
#define LORA_DIO2       PC_14   // DIO2=FhssChangeChannel
#define LORA_DIO3       PC_15   // DIO3=CADDone
#define LORA_DIO4       PH_0    // ????
#define LORA_DIO5       NC      // unused?

#endif