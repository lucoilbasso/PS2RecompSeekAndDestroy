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

// Function: entry_00177670
// Address: 0x177670 - 0x1776b0
void entry_00177670_0x177670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177670_0x177670");
#endif

    switch (ctx->pc) {
        case 0x177694u: goto label_177694;
        default: break;
    }

    ctx->pc = 0x177670u;

    // 0x177670: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177674: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x177674u;
    {
        const bool branch_taken_0x177674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177674u;
        // 0x177678: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177674) {
            ctx->pc = 0x1776B0u;
            return;
        }
    }
    ctx->pc = 0x17767Cu;
    // 0x17767c: 0x56420013  bnel        $s2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17767Cu;
    {
        const bool branch_taken_0x17767c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x17767c) {
            ctx->pc = 0x177680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17767Cu;
            // 0x177680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1776CCu;
            return;
        }
    }
    ctx->pc = 0x177684u;
    // 0x177684: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x177684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177688: 0x27868ca0  addiu       $a2, $gp, -0x7360
    ctx->pc = 0x177688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937760));
    // 0x17768c: 0xc06e5ae  jal         func_1B96B8
    ctx->pc = 0x17768Cu;
    SET_GPR_U32(ctx, 31, 0x177694u);
    ctx->pc = 0x177690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17768Cu;
    // 0x177690: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B96B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B96B8u, 0x17768Cu, 0x177694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177694u;
label_177694:
    // 0x177694: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x177694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17769c: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17769Cu;
    {
        const bool branch_taken_0x17769c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17769c) {
            ctx->pc = 0x1776A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17769Cu;
            // 0x1776a0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1776CCu;
            return;
        }
    }
    ctx->pc = 0x1776A4u;
    // 0x1776a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1776A4u;
    {
        const bool branch_taken_0x1776a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776A4u;
        // 0x1776a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776a4) {
            ctx->pc = 0x1776D0u;
            return;
        }
    }
    ctx->pc = 0x1776ACu;
    // 0x1776ac: 0x0  nop
    ctx->pc = 0x1776acu;
    // NOP
    ctx->pc = 0x1776b0u;
}
