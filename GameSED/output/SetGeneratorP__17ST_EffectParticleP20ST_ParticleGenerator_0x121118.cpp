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

// Function: SetGeneratorP__17ST_EffectParticleP20ST_ParticleGenerator
// Address: 0x121118 - 0x121128
void SetGeneratorP__17ST_EffectParticleP20ST_ParticleGenerator_0x121118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGeneratorP__17ST_EffectParticleP20ST_ParticleGenerator_0x121118");
#endif

    ctx->pc = 0x121118u;

    // 0x121118: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x121118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x12111c: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x12111cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x121120: 0x3e00008  jr          $ra
    ctx->pc = 0x121120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121120u;
        // 0x121124: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121128u;
}
