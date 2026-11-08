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

// Function: entry_0018ec2c
// Address: 0x18ec2c - 0x18ec40
void entry_0018ec2c_0x18ec2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ec2c_0x18ec2c");
#endif

    switch (ctx->pc) {
        case 0x18ec34u: goto label_18ec34;
        default: break;
    }

    ctx->pc = 0x18ec2cu;

    // 0x18ec2c: 0xc0632e6  jal         func_18CB98
    ctx->pc = 0x18EC2Cu;
    SET_GPR_U32(ctx, 31, 0x18EC34u);
    ctx->pc = 0x18EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC2Cu;
    // 0x18ec30: 0x1052821  addu        $a1, $t0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CB98u, 0x18EC2Cu, 0x18EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC34u;
label_18ec34:
    // 0x18ec34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ec38: 0x3e00008  jr          $ra
    ctx->pc = 0x18EC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC38u;
        // 0x18ec3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EC40u;
}
