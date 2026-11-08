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

// Function: entry_001ad83c
// Address: 0x1ad83c - 0x1ad87c
void entry_001ad83c_0x1ad83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad83c_0x1ad83c");
#endif

    ctx->pc = 0x1ad83cu;

    // 0x1ad83c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1AD83Cu;
    {
        const bool branch_taken_0x1ad83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD83Cu;
        // 0x1ad840: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad83c) {
            ctx->pc = 0x1AD8F4u;
            return;
        }
    }
    ctx->pc = 0x1AD844u;
    // 0x1ad844: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1ad844u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ad848: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1AD848u;
    {
        const bool branch_taken_0x1ad848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD848u;
        // 0x1ad84c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad848) {
            ctx->pc = 0x1AD964u;
            return;
        }
    }
    ctx->pc = 0x1AD850u;
    // 0x1ad850: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1ad850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1ad854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad858: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1ad858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ad85c: 0x1243001d  beq         $s2, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AD85Cu;
    {
        const bool branch_taken_0x1ad85c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD85Cu;
        // 0x1ad860: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad85c) {
            ctx->pc = 0x1AD8D4u;
            return;
        }
    }
    ctx->pc = 0x1AD864u;
    // 0x1ad864: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD864u;
    {
        const bool branch_taken_0x1ad864 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD864u;
        // 0x1ad868: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad864) {
            ctx->pc = 0x1AD87Cu;
            return;
        }
    }
    ctx->pc = 0x1AD86Cu;
    // 0x1ad86c: 0x1242001d  beq         $s2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AD86Cu;
    {
        const bool branch_taken_0x1ad86c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad86c) {
            ctx->pc = 0x1AD8E4u;
            return;
        }
    }
    ctx->pc = 0x1AD874u;
    // 0x1ad874: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1AD874u;
    {
        const bool branch_taken_0x1ad874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad874) {
            ctx->pc = 0x1AD914u;
            return;
        }
    }
    ctx->pc = 0x1AD87Cu;
}
