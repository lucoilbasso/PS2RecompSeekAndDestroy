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

// Function: CommandFlush__18SIF_CALL_RPC_PARAM
// Address: 0x17a888 - 0x17a8ac
void CommandFlush__18SIF_CALL_RPC_PARAM_0x17a888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandFlush__18SIF_CALL_RPC_PARAM_0x17a888");
#endif

    switch (ctx->pc) {
        case 0x17a8a0u: goto label_17a8a0;
        default: break;
    }

    ctx->pc = 0x17a888u;

    // 0x17a888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a88c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17a890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a894: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17a894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a898: 0xc05ea2c  jal         func_17A8B0
    ctx->pc = 0x17A898u;
    SET_GPR_U32(ctx, 31, 0x17A8A0u);
    ctx->pc = 0x17A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A898u;
    // 0x17a89c: 0x8c440030  lw          $a0, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8B0u, 0x17A898u, 0x17A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A8A0u;
label_17a8a0:
    // 0x17a8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8A4u;
        // 0x17a8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A8ACu;
}
