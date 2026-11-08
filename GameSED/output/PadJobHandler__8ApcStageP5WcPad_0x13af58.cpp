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

// Function: PadJobHandler__8ApcStageP5WcPad
// Address: 0x13af58 - 0x13af74
void PadJobHandler__8ApcStageP5WcPad_0x13af58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PadJobHandler__8ApcStageP5WcPad_0x13af58");
#endif

    switch (ctx->pc) {
        case 0x13af68u: goto label_13af68;
        default: break;
    }

    ctx->pc = 0x13af58u;

    // 0x13af58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13af58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13af5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13af5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13af60: 0xc046dfa  jal         func_11B7E8
    ctx->pc = 0x13AF60u;
    SET_GPR_U32(ctx, 31, 0x13AF68u);
    ctx->pc = 0x11B7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B7E8u, 0x13AF60u, 0x13AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF68u;
label_13af68:
    // 0x13af68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13af68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13af6c: 0x3e00008  jr          $ra
    ctx->pc = 0x13AF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF6Cu;
        // 0x13af70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AF74u;
}
