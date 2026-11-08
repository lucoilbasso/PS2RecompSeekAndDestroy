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

// Function: ApCRefSetTargetFixed__FP10ApCRefWorkT0P9FVector32P7WcActor
// Address: 0x141748 - 0x1417bc
void ApCRefSetTargetFixed__FP10ApCRefWorkT0P9FVector32P7WcActor_0x141748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefSetTargetFixed__FP10ApCRefWorkT0P9FVector32P7WcActor_0x141748");
#endif

    switch (ctx->pc) {
        case 0x1417b0u: goto label_1417b0;
        default: break;
    }

    ctx->pc = 0x141748u;

    // 0x141748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14174c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x14174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x141750: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x141750u;
    {
        const bool branch_taken_0x141750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x141754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141750u;
        // 0x141754: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141750) {
            ctx->pc = 0x141770u;
            goto label_141770;
        }
    }
    ctx->pc = 0x141758u;
    // 0x141758: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x141758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14175c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x14175cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x141760: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x141760u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x141764: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x141764u;
    {
        const bool branch_taken_0x141764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141764u;
        // 0x141768: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141764) {
            ctx->pc = 0x141778u;
            goto label_141778;
        }
    }
    ctx->pc = 0x14176Cu;
    // 0x14176c: 0x0  nop
    ctx->pc = 0x14176cu;
    // NOP
label_141770:
    // 0x141770: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x141770u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141774: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x141774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_141778:
    // 0x141778: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x141778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x14177c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14177cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141780: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x141780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x141784: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x141784u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x141788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14178c: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x14178cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x141790: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x141790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x141794: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x141794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x141798: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x141798u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14179c: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x14179cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1417a0: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1417a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1417a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1417a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417a8: 0xc050a7c  jal         func_1429F0
    ctx->pc = 0x1417A8u;
    SET_GPR_U32(ctx, 31, 0x1417B0u);
    ctx->pc = 0x1417ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1417A8u;
    // 0x1417ac: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429F0u, 0x1417A8u, 0x1417B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1417B0u;
label_1417b0:
    // 0x1417b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1417b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1417b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1417B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1417B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417B4u;
        // 0x1417b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1417B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1417BCu;
}
