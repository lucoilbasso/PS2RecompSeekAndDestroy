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

// Function: entry_0015d400
// Address: 0x15d400 - 0x15d440
void entry_0015d400_0x15d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d400_0x15d400");
#endif

    switch (ctx->pc) {
        case 0x15d43cu: goto label_15d43c;
        default: break;
    }

    ctx->pc = 0x15d400u;

label_15d400:
    // 0x15d400: 0x50600035  beql        $v1, $zero, . + 4 + (0x35 << 2)
label_15d404:
    if (ctx->pc == 0x15D404u) {
        ctx->pc = 0x15D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D400u;
        // 0x15d404: 0x8e050160  lw          $a1, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D408u;
        goto label_15d408;
    }
    ctx->pc = 0x15D400u;
    {
        const bool branch_taken_0x15d400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d400) {
            ctx->pc = 0x15D404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D400u;
            // 0x15d404: 0x8e050160  lw          $a1, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D4D8u;
            return;
        }
    }
    ctx->pc = 0x15D408u;
label_15d408:
    // 0x15d408: 0x8e02016c  lw          $v0, 0x16C($s0)
    ctx->pc = 0x15d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
label_15d40c:
    // 0x15d40c: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
label_15d410:
    if (ctx->pc == 0x15D410u) {
        ctx->pc = 0x15D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D40Cu;
        // 0x15d410: 0x8e070160  lw          $a3, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D414u;
        goto label_15d414;
    }
    ctx->pc = 0x15D40Cu;
    {
        const bool branch_taken_0x15d40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15d40c) {
            ctx->pc = 0x15D410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D40Cu;
            // 0x15d410: 0x8e070160  lw          $a3, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D4A0u;
            return;
        }
    }
    ctx->pc = 0x15D414u;
label_15d414:
    // 0x15d414: 0x8e050160  lw          $a1, 0x160($s0)
    ctx->pc = 0x15d414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_15d418:
    // 0x15d418: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x15d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_15d41c:
    // 0x15d41c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_15d420:
    if (ctx->pc == 0x15D420u) {
        ctx->pc = 0x15D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D41Cu;
        // 0x15d420: 0x8e060160  lw          $a2, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D424u;
        goto label_15d424;
    }
    ctx->pc = 0x15D41Cu;
    {
        const bool branch_taken_0x15d41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d41c) {
            ctx->pc = 0x15D420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D41Cu;
            // 0x15d420: 0x8e060160  lw          $a2, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D440u;
            return;
        }
    }
    ctx->pc = 0x15D424u;
label_15d424:
    // 0x15d424: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_15d428:
    // 0x15d428: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x15d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15d42c:
    // 0x15d42c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d42cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d430:
    // 0x15d430: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d434:
    // 0x15d434: 0x60f809  jalr        $v1
label_15d438:
    if (ctx->pc == 0x15D438u) {
        ctx->pc = 0x15D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D434u;
        // 0x15d438: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D43Cu;
        goto label_15d43c;
    }
    ctx->pc = 0x15D434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D43Cu);
        ctx->pc = 0x15D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D434u;
        // 0x15d438: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D434u, 0x15D43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D43Cu;
label_15d43c:
    // 0x15d43c: 0x8e060160  lw          $a2, 0x160($s0)
    ctx->pc = 0x15d43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    ctx->pc = 0x15d440u;
}
