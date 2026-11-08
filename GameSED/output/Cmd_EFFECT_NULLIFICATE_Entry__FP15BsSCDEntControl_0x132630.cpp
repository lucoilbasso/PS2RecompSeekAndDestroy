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

// Function: Cmd_EFFECT_NULLIFICATE_Entry__FP15BsSCDEntControl
// Address: 0x132630 - 0x132664
void Cmd_EFFECT_NULLIFICATE_Entry__FP15BsSCDEntControl_0x132630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EFFECT_NULLIFICATE_Entry__FP15BsSCDEntControl_0x132630");
#endif

    switch (ctx->pc) {
        case 0x132658u: goto label_132658;
        default: break;
    }

    ctx->pc = 0x132630u;

    // 0x132630: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x132634: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13263c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x13263cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132640: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x132640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x132644: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132644u;
    {
        const bool branch_taken_0x132644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132644u;
        // 0x132648: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132644) {
            ctx->pc = 0x132658u;
            goto label_132658;
        }
    }
    ctx->pc = 0x13264Cu;
    // 0x13264c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x13264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x132650: 0xc04ca52  jal         func_132948
    ctx->pc = 0x132650u;
    SET_GPR_U32(ctx, 31, 0x132658u);
    ctx->pc = 0x132654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132650u;
    // 0x132654: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132948u, 0x132650u, 0x132658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132658u;
label_132658:
    // 0x132658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13265c: 0x3e00008  jr          $ra
    ctx->pc = 0x13265Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13265Cu;
        // 0x132660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13265Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132664u;
}
