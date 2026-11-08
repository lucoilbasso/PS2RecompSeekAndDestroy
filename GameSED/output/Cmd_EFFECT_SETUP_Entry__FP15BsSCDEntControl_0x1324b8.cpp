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

// Function: Cmd_EFFECT_SETUP_Entry__FP15BsSCDEntControl
// Address: 0x1324b8 - 0x1324d4
void Cmd_EFFECT_SETUP_Entry__FP15BsSCDEntControl_0x1324b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EFFECT_SETUP_Entry__FP15BsSCDEntControl_0x1324b8");
#endif

    switch (ctx->pc) {
        case 0x1324c8u: goto label_1324c8;
        default: break;
    }

    ctx->pc = 0x1324b8u;

    // 0x1324b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1324b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1324bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1324bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1324c0: 0xc04b8f0  jal         func_12E3C0
    ctx->pc = 0x1324C0u;
    SET_GPR_U32(ctx, 31, 0x1324C8u);
    ctx->pc = 0x12E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E3C0u, 0x1324C0u, 0x1324C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1324C8u;
label_1324c8:
    // 0x1324c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1324c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1324cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1324CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1324D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324CCu;
        // 0x1324d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1324CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1324D4u;
}
