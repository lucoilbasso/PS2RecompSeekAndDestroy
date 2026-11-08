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

// Function: ApSCDEntDirectorQuit__Fv
// Address: 0x11b990 - 0x11b9cc
void ApSCDEntDirectorQuit__Fv_0x11b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntDirectorQuit__Fv_0x11b990");
#endif

    switch (ctx->pc) {
        case 0x11b990u: goto label_11b990;
        case 0x11b994u: goto label_11b994;
        case 0x11b998u: goto label_11b998;
        case 0x11b99cu: goto label_11b99c;
        case 0x11b9a0u: goto label_11b9a0;
        case 0x11b9a4u: goto label_11b9a4;
        case 0x11b9a8u: goto label_11b9a8;
        case 0x11b9acu: goto label_11b9ac;
        case 0x11b9b0u: goto label_11b9b0;
        case 0x11b9b4u: goto label_11b9b4;
        case 0x11b9b8u: goto label_11b9b8;
        case 0x11b9bcu: goto label_11b9bc;
        case 0x11b9c0u: goto label_11b9c0;
        case 0x11b9c4u: goto label_11b9c4;
        case 0x11b9c8u: goto label_11b9c8;
        default: break;
    }

    ctx->pc = 0x11b990u;

label_11b990:
    // 0x11b990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11b994:
    // 0x11b994: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11b994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_11b998:
    // 0x11b998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11b99c:
    // 0x11b99c: 0x8c450154  lw          $a1, 0x154($v0)
    ctx->pc = 0x11b99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_11b9a0:
    // 0x11b9a0: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_11b9a4:
    if (ctx->pc == 0x11B9A4u) {
        ctx->pc = 0x11B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9A0u;
        // 0x11b9a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B9A8u;
        goto label_11b9a8;
    }
    ctx->pc = 0x11B9A0u;
    {
        const bool branch_taken_0x11b9a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b9a0) {
            ctx->pc = 0x11B9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B9A0u;
            // 0x11b9a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B9C4u;
            goto label_11b9c4;
        }
    }
    ctx->pc = 0x11B9A8u;
label_11b9a8:
    // 0x11b9a8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x11b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_11b9ac:
    // 0x11b9ac: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x11b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_11b9b0:
    // 0x11b9b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b9b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b9b4:
    // 0x11b9b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b9b8:
    // 0x11b9b8: 0x60f809  jalr        $v1
label_11b9bc:
    if (ctx->pc == 0x11B9BCu) {
        ctx->pc = 0x11B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9B8u;
        // 0x11b9bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B9C0u;
        goto label_11b9c0;
    }
    ctx->pc = 0x11B9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B9C0u);
        ctx->pc = 0x11B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9B8u;
        // 0x11b9bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B9B8u, 0x11B9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B9C0u;
label_11b9c0:
    // 0x11b9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b9c4:
    // 0x11b9c4: 0x3e00008  jr          $ra
label_11b9c8:
    if (ctx->pc == 0x11B9C8u) {
        ctx->pc = 0x11B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9C4u;
        // 0x11b9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B9CCu;
        goto label_fallthrough_0x11b9c4;
    }
    ctx->pc = 0x11B9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9C4u;
        // 0x11b9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11b9c4:
    ctx->pc = 0x11B9CCu;
}
