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

// Function: Cmd_NOT_Entry__FP15BsSCDEntControl
// Address: 0x1a91e0 - 0x1a91fc
void Cmd_NOT_Entry__FP15BsSCDEntControl_0x1a91e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_NOT_Entry__FP15BsSCDEntControl_0x1a91e0");
#endif

    switch (ctx->pc) {
        case 0x1a91f0u: goto label_1a91f0;
        default: break;
    }

    ctx->pc = 0x1a91e0u;

    // 0x1a91e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a91e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a91e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a91e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a91e8: 0xc06980a  jal         func_1A6028
    ctx->pc = 0x1A91E8u;
    SET_GPR_U32(ctx, 31, 0x1A91F0u);
    ctx->pc = 0x1A91ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A91E8u;
    // 0x1a91ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6028u, 0x1A91E8u, 0x1A91F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A91F0u;
label_1a91f0:
    // 0x1a91f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a91f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a91f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A91F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A91F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91F4u;
        // 0x1a91f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A91F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A91FCu;
}
