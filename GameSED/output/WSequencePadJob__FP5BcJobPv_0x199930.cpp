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

// Function: WSequencePadJob__FP5BcJobPv
// Address: 0x199930 - 0x199970
void WSequencePadJob__FP5BcJobPv_0x199930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSequencePadJob__FP5BcJobPv_0x199930");
#endif

    switch (ctx->pc) {
        case 0x199930u: goto label_199930;
        case 0x199934u: goto label_199934;
        case 0x199938u: goto label_199938;
        case 0x19993cu: goto label_19993c;
        case 0x199940u: goto label_199940;
        case 0x199944u: goto label_199944;
        case 0x199948u: goto label_199948;
        case 0x19994cu: goto label_19994c;
        case 0x199950u: goto label_199950;
        case 0x199954u: goto label_199954;
        case 0x199958u: goto label_199958;
        case 0x19995cu: goto label_19995c;
        case 0x199960u: goto label_199960;
        case 0x199964u: goto label_199964;
        case 0x199968u: goto label_199968;
        case 0x19996cu: goto label_19996c;
        default: break;
    }

    ctx->pc = 0x199930u;

label_199930:
    // 0x199930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_199934:
    // 0x199934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_199938:
    // 0x199938: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x199938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19993c:
    // 0x19993c: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x19993cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_199940:
    // 0x199940: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x199940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_199944:
    // 0x199944: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x199944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_199948:
    // 0x199948: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x199948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_19994c:
    // 0x19994c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199950:
    // 0x199950: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x199950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_199954:
    // 0x199954: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x199954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_199958:
    // 0x199958: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x199958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19995c:
    // 0x19995c: 0x60f809  jalr        $v1
label_199960:
    if (ctx->pc == 0x199960u) {
        ctx->pc = 0x199960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19995Cu;
        // 0x199960: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199964u;
        goto label_199964;
    }
    ctx->pc = 0x19995Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x199964u);
        ctx->pc = 0x199960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19995Cu;
        // 0x199960: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19995Cu, 0x199964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199964u;
label_199964:
    // 0x199964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199968:
    // 0x199968: 0x3e00008  jr          $ra
label_19996c:
    if (ctx->pc == 0x19996Cu) {
        ctx->pc = 0x19996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199968u;
        // 0x19996c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199970u;
        goto label_fallthrough_0x199968;
    }
    ctx->pc = 0x199968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199968u;
        // 0x19996c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x199968:
    ctx->pc = 0x199970u;
}
