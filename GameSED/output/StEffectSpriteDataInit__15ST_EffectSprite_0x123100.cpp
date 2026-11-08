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

// Function: StEffectSpriteDataInit__15ST_EffectSprite
// Address: 0x123100 - 0x123124
void StEffectSpriteDataInit__15ST_EffectSprite_0x123100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StEffectSpriteDataInit__15ST_EffectSprite_0x123100");
#endif

    switch (ctx->pc) {
        case 0x123118u: goto label_123118;
        default: break;
    }

    ctx->pc = 0x123100u;

    // 0x123100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123104: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x123104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12310c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12310cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x123110: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x123110u;
    SET_GPR_U32(ctx, 31, 0x123118u);
    ctx->pc = 0x123114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123110u;
    // 0x123114: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x123110u, 0x123118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123118u;
label_123118:
    // 0x123118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12311c: 0x3e00008  jr          $ra
    ctx->pc = 0x12311Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12311Cu;
        // 0x123120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12311Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123124u;
}
