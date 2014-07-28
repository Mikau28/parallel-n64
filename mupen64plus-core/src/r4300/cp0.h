/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *   Mupen64plus - cp0.h                                                   *
 *   Mupen64Plus homepage: http://code.google.com/p/mupen64plus/           *
 *   Copyright (C) 2002 Hacktarux                                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.          *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef M64P_R4300_CP0_H
#define M64P_R4300_CP0_H

/* registers macros */
#define Context g_cp0_regs[4]
#define PageMask g_cp0_regs[5]
#define BadVAddr g_cp0_regs[8]
#define Count g_cp0_regs[9]
#define EntryHi g_cp0_regs[10]
#define Compare g_cp0_regs[11]
#define Status g_cp0_regs[12]
#define EPC g_cp0_regs[14]
#define PRevID g_cp0_regs[15]
#define Config g_cp0_regs[16]

enum {
   CP0_INDEX_REG,
   CP0_RANDOM_REG,
   CP0_ENTRYLO0_REG,
   CP0_ENTRYLO1_REG,
   CP0_CONTEXT_REG,
   CP0_PAGEMASK_REG,
   CP0_WIRED_REG,
   /* 7 is unused */
   CP0_BADVADDR_REG = 8,
   CP0_COUNT_REG,
   CP0_ENTRYHI_REG,
   CP0_COMPARE_REG,
   CP0_STATUS_REG,
   CP0_CAUSE_REG,
   CP0_EPC_REG,
   CP0_PREVID_REG,
   CP0_CONFIG_REG,
   CP0_LLADDR_REG,
   CP0_WATCHLO_REG,
   CP0_WATCHHI_REG,
   CP0_XCONTEXT_REG,
   /* 21 - 27 are unused */
   CP0_TAGLO_REG = 28,
   CP0_TAGHI_REG,
   CP0_ERROREPC_REG,
   /* 31 is unused */
   CP0_REGS_COUNT = 32
};

extern unsigned int g_cp0_regs[32];

int check_cop1_unusable(void);
void update_count(void);

#endif /* M64P_R4300_CP0_H */
