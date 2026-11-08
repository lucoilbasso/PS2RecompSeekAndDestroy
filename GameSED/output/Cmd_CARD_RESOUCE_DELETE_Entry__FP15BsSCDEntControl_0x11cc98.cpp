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

// Function: Cmd_CARD_RESOUCE_DELETE_Entry__FP15BsSCDEntControl
// Address: 0x11cc98 - 0x11cce0
void Cmd_CARD_RESOUCE_DELETE_Entry__FP15BsSCDEntControl_0x11cc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_RESOUCE_DELETE_Entry__FP15BsSCDEntControl_0x11cc98");
#endif

    switch (ctx->pc) {
        case 0x11cc98u: goto label_11cc98;
        case 0x11cc9cu: goto label_11cc9c;
        case 0x11cca0u: goto label_11cca0;
        case 0x11cca4u: goto label_11cca4;
        case 0x11cca8u: goto label_11cca8;
        case 0x11ccacu: goto label_11ccac;
        case 0x11ccb0u: goto label_11ccb0;
        case 0x11ccb4u: goto label_11ccb4;
        case 0x11ccb8u: goto label_11ccb8;
        case 0x11ccbcu: goto label_11ccbc;
        case 0x11ccc0u: goto label_11ccc0;
        case 0x11ccc4u: goto label_11ccc4;
        case 0x11ccc8u: goto label_11ccc8;
        case 0x11ccccu: goto label_11cccc;
        case 0x11ccd0u: goto label_11ccd0;
        case 0x11ccd4u: goto label_11ccd4;
        case 0x11ccd8u: goto label_11ccd8;
        case 0x11ccdcu: goto label_11ccdc;
        default: break;
    }

    ctx->pc = 0x11cc98u;

label_11cc98:
    // 0x11cc98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11cc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11cc9c:
    // 0x11cc9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11cca0:
    // 0x11cca0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11cca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_11cca4:
    // 0x11cca4: 0xc06a25a  jal         func_1A8968
label_11cca8:
    if (ctx->pc == 0x11CCA8u) {
        ctx->pc = 0x11CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCA4u;
        // 0x11cca8: 0x8f908d10  lw          $s0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CCACu;
        goto label_11ccac;
    }
    ctx->pc = 0x11CCA4u;
    SET_GPR_U32(ctx, 31, 0x11CCACu);
    ctx->pc = 0x11CCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCA4u;
    // 0x11cca8: 0x8f908d10  lw          $s0, -0x72F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11CCA4u, 0x11CCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCACu;
label_11ccac:
    // 0x11ccac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11ccb0:
    // 0x11ccb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11ccb4:
    // 0x11ccb4: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x11ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_11ccb8:
    // 0x11ccb8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x11ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_11ccbc:
    // 0x11ccbc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x11ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_11ccc0:
    // 0x11ccc0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11ccc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11ccc4:
    // 0x11ccc4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11ccc8:
    // 0x11ccc8: 0x60f809  jalr        $v1
label_11cccc:
    if (ctx->pc == 0x11CCCCu) {
        ctx->pc = 0x11CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCC8u;
        // 0x11cccc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CCD0u;
        goto label_11ccd0;
    }
    ctx->pc = 0x11CCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11CCD0u);
        ctx->pc = 0x11CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCC8u;
        // 0x11cccc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CCC8u, 0x11CCD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CCD0u;
label_11ccd0:
    // 0x11ccd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ccd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11ccd4:
    // 0x11ccd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11ccd8:
    // 0x11ccd8: 0x3e00008  jr          $ra
label_11ccdc:
    if (ctx->pc == 0x11CCDCu) {
        ctx->pc = 0x11CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCD8u;
        // 0x11ccdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CCE0u;
        goto label_fallthrough_0x11ccd8;
    }
    ctx->pc = 0x11CCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCD8u;
        // 0x11ccdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11ccd8:
    ctx->pc = 0x11CCE0u;
}
