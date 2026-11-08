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

// Function: entry_0017ac2c
// Address: 0x17ac2c - 0x17ac44
void entry_0017ac2c_0x17ac2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ac2c_0x17ac2c");
#endif

    switch (ctx->pc) {
        case 0x17ac34u: goto label_17ac34;
        default: break;
    }

    ctx->pc = 0x17ac2cu;

    // 0x17ac2c: 0xc05ea56  jal         func_17A958
    ctx->pc = 0x17AC2Cu;
    SET_GPR_U32(ctx, 31, 0x17AC34u);
    ctx->pc = 0x17AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC2Cu;
    // 0x17ac30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A958u, 0x17AC2Cu, 0x17AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC34u;
label_17ac34:
    // 0x17ac34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ac34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ac38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17ac38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ac3c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC3Cu;
        // 0x17ac40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AC44u;
}
