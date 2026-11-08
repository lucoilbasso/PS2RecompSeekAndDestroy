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

// Function: entry_00147d4c
// Address: 0x147d4c - 0x147d88
void entry_00147d4c_0x147d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147d4c_0x147d4c");
#endif

    ctx->pc = 0x147d4cu;

    // 0x147d4c: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x147d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x147d50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x147d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147d54: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x147D54u;
    {
        const bool branch_taken_0x147d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x147D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D54u;
        // 0x147d58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d54) {
            ctx->pc = 0x147DFCu;
            return;
        }
    }
    ctx->pc = 0x147D5Cu;
    // 0x147d5c: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x147d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x147d60: 0x30c50003  andi        $a1, $a2, 0x3
    ctx->pc = 0x147d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x147d64: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x147D64u;
    {
        const bool branch_taken_0x147d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x147D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D64u;
        // 0x147d68: 0x26040005  addiu       $a0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d64) {
            ctx->pc = 0x147D94u;
            return;
        }
    }
    ctx->pc = 0x147D6Cu;
    // 0x147d6c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x147d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x147d70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x147D70u;
    {
        const bool branch_taken_0x147d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d70) {
            ctx->pc = 0x147D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D70u;
            // 0x147d74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147D88u;
            return;
        }
    }
    ctx->pc = 0x147D78u;
    // 0x147d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x147D7Cu;
    {
        const bool branch_taken_0x147d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D7Cu;
        // 0x147d80: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d7c) {
            ctx->pc = 0x147D8Cu;
            return;
        }
    }
    ctx->pc = 0x147D84u;
    // 0x147d84: 0x0  nop
    ctx->pc = 0x147d84u;
    // NOP
    ctx->pc = 0x147d88u;
}
