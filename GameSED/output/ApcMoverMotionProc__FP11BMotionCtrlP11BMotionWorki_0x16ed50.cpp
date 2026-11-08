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

// Function: ApcMoverMotionProc__FP11BMotionCtrlP11BMotionWorki
// Address: 0x16ed50 - 0x16ed80
void ApcMoverMotionProc__FP11BMotionCtrlP11BMotionWorki_0x16ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApcMoverMotionProc__FP11BMotionCtrlP11BMotionWorki_0x16ed50");
#endif

    switch (ctx->pc) {
        case 0x16ed50u: goto label_16ed50;
        case 0x16ed54u: goto label_16ed54;
        case 0x16ed58u: goto label_16ed58;
        case 0x16ed5cu: goto label_16ed5c;
        case 0x16ed60u: goto label_16ed60;
        case 0x16ed64u: goto label_16ed64;
        case 0x16ed68u: goto label_16ed68;
        case 0x16ed6cu: goto label_16ed6c;
        case 0x16ed70u: goto label_16ed70;
        case 0x16ed74u: goto label_16ed74;
        case 0x16ed78u: goto label_16ed78;
        case 0x16ed7cu: goto label_16ed7c;
        default: break;
    }

    ctx->pc = 0x16ed50u;

label_16ed50:
    // 0x16ed50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16ed54:
    // 0x16ed54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16ed58:
    // 0x16ed58: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x16ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_16ed5c:
    // 0x16ed5c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x16ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_16ed60:
    // 0x16ed60: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16ed60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16ed64:
    // 0x16ed64: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16ed68:
    // 0x16ed68: 0x60f809  jalr        $v1
label_16ed6c:
    if (ctx->pc == 0x16ED6Cu) {
        ctx->pc = 0x16ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED68u;
        // 0x16ed6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED70u;
        goto label_16ed70;
    }
    ctx->pc = 0x16ED68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16ED70u);
        ctx->pc = 0x16ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED68u;
        // 0x16ed6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ED68u, 0x16ED70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16ED70u;
label_16ed70:
    // 0x16ed70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16ed70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ed74:
    // 0x16ed74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ed74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ed78:
    // 0x16ed78: 0x3e00008  jr          $ra
label_16ed7c:
    if (ctx->pc == 0x16ED7Cu) {
        ctx->pc = 0x16ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED78u;
        // 0x16ed7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ED80u;
        goto label_fallthrough_0x16ed78;
    }
    ctx->pc = 0x16ED78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED78u;
        // 0x16ed7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ED78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16ed78:
    ctx->pc = 0x16ED80u;
}
