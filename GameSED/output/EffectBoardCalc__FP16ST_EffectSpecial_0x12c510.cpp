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

// Function: EffectBoardCalc__FP16ST_EffectSpecial
// Address: 0x12c510 - 0x12c56c
void EffectBoardCalc__FP16ST_EffectSpecial_0x12c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectBoardCalc__FP16ST_EffectSpecial_0x12c510");
#endif

    switch (ctx->pc) {
        case 0x12c52cu: goto label_12c52c;
        default: break;
    }

    ctx->pc = 0x12c510u;

    // 0x12c510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c514: 0x248501cc  addiu       $a1, $a0, 0x1CC
    ctx->pc = 0x12c514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 460));
    // 0x12c518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c51c: 0x249001b0  addiu       $s0, $a0, 0x1B0
    ctx->pc = 0x12c51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x12c520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c524: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12C524u;
    SET_GPR_U32(ctx, 31, 0x12C52Cu);
    ctx->pc = 0x12C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C524u;
    // 0x12c528: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12C524u, 0x12C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C52Cu;
label_12c52c:
    // 0x12c52c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x12c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12c530: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12c534: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x12c534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12c538: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x12c538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12c53c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x12c53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12c540: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x12c540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12c544: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12c548: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x12c548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12c54c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x12c550: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x12c550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x12c554: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x12c554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x12c558: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x12c558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x12c55c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12c55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c564: 0x3e00008  jr          $ra
    ctx->pc = 0x12C564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C564u;
        // 0x12c568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C56Cu;
}
