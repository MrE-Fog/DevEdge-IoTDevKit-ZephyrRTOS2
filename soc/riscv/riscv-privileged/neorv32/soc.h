/*
 * Copyright (c) 2021 Henrik Brix Andersen <henrik@brixandersen.dk>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef RISCV_NEORV32_SOC_H
#define RISCV_NEORV32_SOC_H

#include <soc_common.h>

/* System information (SYSINFO) register offsets */
#define NEORV32_SYSINFO_CLK         0x00U
#define NEORV32_SYSINFO_CPU         0x04U
#define NEORV32_SYSINFO_FEATURES    0x08U
#define NEORV32_SYSINFO_CACHE       0x0cU
#define NEORV32_SYSINFO_ISPACE_BASE 0xf0U
#define NEORV32_SYSINFO_IMEM_SIZE   0xf4U
#define NEORV32_SYSINFO_DSPACE_BASE 0xf8U
#define NEORV32_SYSINFO_DMEM_SIZE   0xfcU

/* System information (SYSINFO) CPU register bits */
#define NEORV32_SYSINFO_CPU_ZICSR     BIT(0)
#define NEORV32_SYSINFO_CPU_ZIFENCEI  BIT(1)
#define NEORV32_SYSINFO_CPU_ZMMUL     BIT(2)
#define NEORV32_SYSINFO_CPU_ZBB       BIT(3)
#define NEORV32_SYSINFO_CPU_ZFINX     BIT(5)
#define NEORV32_SYSINFO_CPU_ZXSCNT    BIT(6)
#define NEORV32_SYSINFO_CPU_ZXNOCNT   BIT(7)
#define NEORV32_SYSINFO_CPU_PMP       BIT(8)
#define NEORV32_SYSINFO_CPU_HPM       BIT(9)
#define NEORV32_SYSINFO_CPU_DEBUGMODE BIT(10)
#define NEORV32_SYSINFO_CPU_FASTMUL   BIT(30)
#define NEORV32_SYSINFO_CPU_FASTSHIFT BIT(31)

/* System information (SYSINFO) FEATURES register bits */
#define NEORV32_SYSINFO_FEATURES_BOOTLOADER     BIT(0)
#define NEORV32_SYSINFO_FEATURES_MEM_EXT        BIT(1)
#define NEORV32_SYSINFO_FEATURES_MEM_INT_IMEM   BIT(2)
#define NEORV32_SYSINFO_FEATURES_MEM_INT_DMEM   BIT(3)
#define NEORV32_SYSINFO_FEATURES_MEM_EXT_ENDIAN BIT(4)
#define NEORV32_SYSINFO_FEATURES_ICACHE         BIT(5)
#define NEORV32_SYSINFO_FEATURES_OCD            BIT(14)
#define NEORV32_SYSINFO_FEATURES_HW_RESET       BIT(15)
#define NEORV32_SYSINFO_FEATURES_IO_GPIO        BIT(16)
#define NEORV32_SYSINFO_FEATURES_IO_MTIME       BIT(17)
#define NEORV32_SYSINFO_FEATURES_IO_UART0       BIT(18)
#define NEORV32_SYSINFO_FEATURES_IO_SPI         BIT(19)
#define NEORV32_SYSINFO_FEATURES_IO_TWI         BIT(20)
#define NEORV32_SYSINFO_FEATURES_IO_PWM         BIT(21)
#define NEORV32_SYSINFO_FEATURES_IO_WDT         BIT(22)
#define NEORV32_SYSINFO_FEATURES_IO_CFS         BIT(23)
#define NEORV32_SYSINFO_FEATURES_IO_TRNG        BIT(24)
#define NEORV32_SYSINFO_FEATURES_IO_SLINK       BIT(25)
#define NEORV32_SYSINFO_FEATURES_IO_UART1       BIT(26)
#define NEORV32_SYSINFO_FEATURES_IO_NEOLED      BIT(27)

#endif /* RISCV_NEORV32_SOC_H */
