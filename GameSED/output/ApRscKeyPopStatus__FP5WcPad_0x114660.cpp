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

// Function: ApRscKeyPopStatus__FP5WcPad
// Address: 0x114660 - 0x1146a8
void ApRscKeyPopStatus__FP5WcPad_0x114660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRscKeyPopStatus__FP5WcPad_0x114660");
#endif

    switch (ctx->pc) {
        case 0x11469cu: goto label_11469c;
        default: break;
    }

    ctx->pc = 0x114660u;

    // 0x114660: 0x8f829124  lw          $v0, -0x6EDC($gp)
    ctx->pc = 0x114660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x114664: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11466c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11466Cu;
    {
        const bool branch_taken_0x11466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11466Cu;
        // 0x114670: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11466c) {
            ctx->pc = 0x114690u;
            goto label_114690;
        }
    }
    ctx->pc = 0x114674u;
    // 0x114674: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x114674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x114678: 0xaf859124  sw          $a1, -0x6EDC($gp)
    ctx->pc = 0x114678u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 5));
    // 0x11467c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x11467cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x114680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114684: 0x8c420730  lw          $v0, 0x730($v0)
    ctx->pc = 0x114684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1840)));
    // 0x114688: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x114688u;
    {
        const bool branch_taken_0x114688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114688u;
        // 0x11468c: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114688) {
            ctx->pc = 0x11469Cu;
            goto label_11469c;
        }
    }
    ctx->pc = 0x114690u;
label_114690:
    // 0x114690: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x114694: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114694u;
    SET_GPR_U32(ctx, 31, 0x11469Cu);
    ctx->pc = 0x114698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114694u;
    // 0x114698: 0x24844268  addiu       $a0, $a0, 0x4268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114694u, 0x11469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11469Cu;
label_11469c:
    // 0x11469c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11469cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1146a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1146A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1146A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146A0u;
        // 0x1146a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1146A8u;
}
