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

// Function: GetObjectPosition__13WActorHitInfoP9FVector32b
// Address: 0x19a8e8 - 0x19a8fc
void GetObjectPosition__13WActorHitInfoP9FVector32b_0x19a8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjectPosition__13WActorHitInfoP9FVector32b_0x19a8e8");
#endif

    ctx->pc = 0x19a8e8u;

    // 0x19a8e8: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x19a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x19a8ec: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x19a8ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a8f0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x19a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x19a8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x19A8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8F4u;
        // 0x19a8f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A8FCu;
}
