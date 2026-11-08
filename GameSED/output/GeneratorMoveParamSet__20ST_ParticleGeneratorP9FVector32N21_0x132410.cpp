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

// Function: GeneratorMoveParamSet__20ST_ParticleGeneratorP9FVector32N21
// Address: 0x132410 - 0x132448
void GeneratorMoveParamSet__20ST_ParticleGeneratorP9FVector32N21_0x132410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeneratorMoveParamSet__20ST_ParticleGeneratorP9FVector32N21_0x132410");
#endif

    ctx->pc = 0x132410u;

    // 0x132410: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132410u;
    {
        const bool branch_taken_0x132410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x132414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132410u;
        // 0x132414: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132410) {
            ctx->pc = 0x132420u;
            goto label_132420;
        }
    }
    ctx->pc = 0x132418u;
    // 0x132418: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x132418u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13241c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13241cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_132420:
    // 0x132420: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x132420u;
    {
        const bool branch_taken_0x132420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x132424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132420u;
        // 0x132424: 0x24830030  addiu       $v1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132420) {
            ctx->pc = 0x132430u;
            goto label_132430;
        }
    }
    ctx->pc = 0x132428u;
    // 0x132428: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x132428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13242c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13242cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_132430:
    // 0x132430: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x132430u;
    {
        const bool branch_taken_0x132430 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x132430) {
            ctx->pc = 0x132440u;
            goto label_132440;
        }
    }
    ctx->pc = 0x132438u;
    // 0x132438: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x132438u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13243c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13243cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_132440:
    // 0x132440: 0x3e00008  jr          $ra
    ctx->pc = 0x132440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132448u;
}
