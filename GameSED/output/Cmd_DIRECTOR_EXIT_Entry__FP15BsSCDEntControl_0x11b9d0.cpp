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

// Function: Cmd_DIRECTOR_EXIT_Entry__FP15BsSCDEntControl
// Address: 0x11b9d0 - 0x11ba0c
void Cmd_DIRECTOR_EXIT_Entry__FP15BsSCDEntControl_0x11b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIRECTOR_EXIT_Entry__FP15BsSCDEntControl_0x11b9d0");
#endif

    switch (ctx->pc) {
        case 0x11b9d0u: goto label_11b9d0;
        case 0x11b9d4u: goto label_11b9d4;
        case 0x11b9d8u: goto label_11b9d8;
        case 0x11b9dcu: goto label_11b9dc;
        case 0x11b9e0u: goto label_11b9e0;
        case 0x11b9e4u: goto label_11b9e4;
        case 0x11b9e8u: goto label_11b9e8;
        case 0x11b9ecu: goto label_11b9ec;
        case 0x11b9f0u: goto label_11b9f0;
        case 0x11b9f4u: goto label_11b9f4;
        case 0x11b9f8u: goto label_11b9f8;
        case 0x11b9fcu: goto label_11b9fc;
        case 0x11ba00u: goto label_11ba00;
        case 0x11ba04u: goto label_11ba04;
        case 0x11ba08u: goto label_11ba08;
        default: break;
    }

    ctx->pc = 0x11b9d0u;

label_11b9d0:
    // 0x11b9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11b9d4:
    // 0x11b9d4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_11b9d8:
    // 0x11b9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11b9dc:
    // 0x11b9dc: 0x8c450154  lw          $a1, 0x154($v0)
    ctx->pc = 0x11b9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_11b9e0:
    // 0x11b9e0: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_11b9e4:
    if (ctx->pc == 0x11B9E4u) {
        ctx->pc = 0x11B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9E0u;
        // 0x11b9e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B9E8u;
        goto label_11b9e8;
    }
    ctx->pc = 0x11B9E0u;
    {
        const bool branch_taken_0x11b9e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b9e0) {
            ctx->pc = 0x11B9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B9E0u;
            // 0x11b9e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BA04u;
            goto label_11ba04;
        }
    }
    ctx->pc = 0x11B9E8u;
label_11b9e8:
    // 0x11b9e8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x11b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_11b9ec:
    // 0x11b9ec: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x11b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_11b9f0:
    // 0x11b9f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b9f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b9f4:
    // 0x11b9f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b9f8:
    // 0x11b9f8: 0x60f809  jalr        $v1
label_11b9fc:
    if (ctx->pc == 0x11B9FCu) {
        ctx->pc = 0x11B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9F8u;
        // 0x11b9fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BA00u;
        goto label_11ba00;
    }
    ctx->pc = 0x11B9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BA00u);
        ctx->pc = 0x11B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9F8u;
        // 0x11b9fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B9F8u, 0x11BA00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BA00u;
label_11ba00:
    // 0x11ba00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ba00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11ba04:
    // 0x11ba04: 0x3e00008  jr          $ra
label_11ba08:
    if (ctx->pc == 0x11BA08u) {
        ctx->pc = 0x11BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA04u;
        // 0x11ba08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BA0Cu;
        goto label_fallthrough_0x11ba04;
    }
    ctx->pc = 0x11BA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA04u;
        // 0x11ba08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11ba04:
    ctx->pc = 0x11BA0Cu;
}
