#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001c16d8
// Address: 0x1c16d8 - 0x1c171c
void entry_001c16d8_0x1c16d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c16d8_0x1c16d8");
#endif

    ctx->pc = 0x1c16d8u;

    // 0x1c16d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c16dc: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C16DCu;
    {
        const bool branch_taken_0x1c16dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16DCu;
        // 0x1c16e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16dc) {
            ctx->pc = 0x1C1738u;
            return;
        }
    }
    ctx->pc = 0x1C16E4u;
    // 0x1c16e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c16e8: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x1c16e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x1c16ec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C16ECu;
    {
        const bool branch_taken_0x1c16ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16ECu;
        // 0x1c16f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16ec) {
            ctx->pc = 0x1C1738u;
            return;
        }
    }
    ctx->pc = 0x1C16F4u;
    // 0x1c16f4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c16f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c16fc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1c16fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1c1700: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1c1700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1c1704: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c1704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c1708: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c1708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c170c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C170Cu;
    {
        const bool branch_taken_0x1c170c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C170Cu;
        // 0x1c1710: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c170c) {
            ctx->pc = 0x1C171Cu;
            return;
        }
    }
    ctx->pc = 0x1C1714u;
    // 0x1c1714: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1714u;
    {
        const bool branch_taken_0x1c1714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1714u;
        // 0x1c1718: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1714) {
            ctx->pc = 0x1C1734u;
            return;
        }
    }
    ctx->pc = 0x1C171Cu;
}
