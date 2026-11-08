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

// Function: caseD_9
// Address: 0x105630 - 0x105670
void caseD_9_0x105630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x105630");
#endif

    switch (ctx->pc) {
        case 0x105638u: goto label_105638;
        case 0x105664u: goto label_105664;
        default: break;
    }

    ctx->pc = 0x105630u;

    // 0x105630: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x105630u;
    SET_GPR_U32(ctx, 31, 0x105638u);
    ctx->pc = 0x105634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105630u;
    // 0x105634: 0x24040051  addiu       $a0, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x105630u, 0x105638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105638u;
label_105638:
    // 0x105638: 0x8f878d10  lw          $a3, -0x72F0($gp)
    ctx->pc = 0x105638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10563c: 0x3c05dfff  lui         $a1, 0xDFFF
    ctx->pc = 0x10563cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57343 << 16));
    // 0x105640: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x105640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x105644: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x105644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x105648: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x105648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10564c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105650: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x105650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x105654: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x105654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x105658: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x105658u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x10565c: 0xc05bea8  jal         func_16FAA0
    ctx->pc = 0x10565Cu;
    SET_GPR_U32(ctx, 31, 0x105664u);
    ctx->pc = 0x105660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10565Cu;
    // 0x105660: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAA0u, 0x10565Cu, 0x105664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105664u;
label_105664:
    // 0x105664: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x105664u;
    {
        const bool branch_taken_0x105664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105664u;
        // 0x105668: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105664) {
            ctx->pc = 0x1057A0u;
            return;
        }
    }
    ctx->pc = 0x10566Cu;
    // 0x10566c: 0x0  nop
    ctx->pc = 0x10566cu;
    // NOP
    ctx->pc = 0x105670u;
}
