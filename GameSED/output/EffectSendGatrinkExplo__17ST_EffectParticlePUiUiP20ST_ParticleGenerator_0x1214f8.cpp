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

// Function: EffectSendGatrinkExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x1214f8 - 0x121540
void EffectSendGatrinkExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x1214f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendGatrinkExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x1214f8");
#endif

    switch (ctx->pc) {
        case 0x121510u: goto label_121510;
        default: break;
    }

    ctx->pc = 0x1214f8u;

    // 0x1214f8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1214f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1214fc: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1214fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x121500: 0x244579c0  addiu       $a1, $v0, 0x79C0
    ctx->pc = 0x121500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31168));
    // 0x121504: 0x24630790  addiu       $v1, $v1, 0x790
    ctx->pc = 0x121504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
    // 0x121508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12150c: 0x0  nop
    ctx->pc = 0x12150cu;
    // NOP
label_121510:
    // 0x121510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x121510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121514: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121514u;
    {
        const bool branch_taken_0x121514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121514u;
        // 0x121518: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121514) {
            ctx->pc = 0x121538u;
            goto label_121538;
        }
    }
    ctx->pc = 0x12151Cu;
    // 0x12151c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x12151cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121520: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x121520u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x121524: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x121524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x121528: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x121528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12152c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x12152cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x121530: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x121530u;
    {
        const bool branch_taken_0x121530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121530u;
        // 0x121534: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121530) {
            ctx->pc = 0x121510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121510;
        }
    }
    ctx->pc = 0x121538u;
label_121538:
    // 0x121538: 0x3e00008  jr          $ra
    ctx->pc = 0x121538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121540u;
}
