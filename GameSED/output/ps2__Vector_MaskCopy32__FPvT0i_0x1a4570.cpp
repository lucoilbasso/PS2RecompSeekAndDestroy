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

// Function: _Vector_MaskCopy32__FPvT0i
// Address: 0x1a4570 - 0x1a4608
void ps2__Vector_MaskCopy32__FPvT0i_0x1a4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Vector_MaskCopy32__FPvT0i_0x1a4570");
#endif

    ctx->pc = 0x1a4570u;

    // 0x1a4570: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a4570u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4574: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1a4574u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a4578: 0x2cc20007  sltiu       $v0, $a2, 0x7
    ctx->pc = 0x1a4578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a457c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A457Cu;
    {
        const bool branch_taken_0x1a457c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A457Cu;
        // 0x1a4580: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a457c) {
            ctx->pc = 0x1A45FCu;
            goto label_1a45fc;
        }
    }
    ctx->pc = 0x1A4584u;
    // 0x1a4584: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a4584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1a4588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a458c: 0x8c639330  lw          $v1, -0x6CD0($v1)
    ctx->pc = 0x1a458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939440)));
    // 0x1a4590: 0x600008  jr          $v1
    ctx->pc = 0x1A4590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4598u: goto label_1a4598;
            case 0x1A45A8u: goto label_1a45a8;
            case 0x1A45B8u: goto label_1a45b8;
            case 0x1A45C8u: goto label_1a45c8;
            case 0x1A45D8u: goto label_1a45d8;
            case 0x1A45E8u: goto label_1a45e8;
            case 0x1A45F8u: goto label_1a45f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4590u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A4598u;
label_1a4598:
    // 0x1a4598: 0x4bc21b3c  vmove.xyz   $vf2, $vf3
    ctx->pc = 0x1a4598u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a459c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A459Cu;
    {
        const bool branch_taken_0x1a459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a459c) {
            ctx->pc = 0x1A45FCu;
            goto label_1a45fc;
        }
    }
    ctx->pc = 0x1A45A4u;
    // 0x1a45a4: 0x0  nop
    ctx->pc = 0x1a45a4u;
    // NOP
label_1a45a8:
    // 0x1a45a8: 0x4ac21b3c  vmove.yz    $vf2, $vf3
    ctx->pc = 0x1a45a8u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a45ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A45ACu;
    {
        const bool branch_taken_0x1a45ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45ac) {
            ctx->pc = 0x1A45FCu;
            goto label_1a45fc;
        }
    }
    ctx->pc = 0x1A45B4u;
    // 0x1a45b4: 0x0  nop
    ctx->pc = 0x1a45b4u;
    // NOP
label_1a45b8:
    // 0x1a45b8: 0x4b421b3c  vmove.xz    $vf2, $vf3
    ctx->pc = 0x1a45b8u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a45bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A45BCu;
    {
        const bool branch_taken_0x1a45bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45bc) {
            ctx->pc = 0x1A45FCu;
            goto label_1a45fc;
        }
    }
    ctx->pc = 0x1A45C4u;
    // 0x1a45c4: 0x0  nop
    ctx->pc = 0x1a45c4u;
    // NOP
label_1a45c8:
    // 0x1a45c8: 0x4a421b3c  vmove.z     $vf2, $vf3
    ctx->pc = 0x1a45c8u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a45cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A45CCu;
    {
        const bool branch_taken_0x1a45cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45cc) {
            ctx->pc = 0x1A45FCu;
            goto label_1a45fc;
        }
    }
    ctx->pc = 0x1A45D4u;
    // 0x1a45d4: 0x0  nop
    ctx->pc = 0x1a45d4u;
    // NOP
label_1a45d8:
    // 0x1a45d8: 0x4b821b3c  vmove.xy    $vf2, $vf3
    ctx->pc = 0x1a45d8u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a45dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A45DCu;
    {
        const bool branch_taken_0x1a45dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45dc) {
            ctx->pc = 0x1A45FCu;
            goto label_1a45fc;
        }
    }
    ctx->pc = 0x1A45E4u;
    // 0x1a45e4: 0x0  nop
    ctx->pc = 0x1a45e4u;
    // NOP
label_1a45e8:
    // 0x1a45e8: 0x4a821b3c  vmove.y     $vf2, $vf3
    ctx->pc = 0x1a45e8u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x1a45ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A45ECu;
    {
        const bool branch_taken_0x1a45ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45ec) {
            ctx->pc = 0x1A45FCu;
            goto label_1a45fc;
        }
    }
    ctx->pc = 0x1A45F4u;
    // 0x1a45f4: 0x0  nop
    ctx->pc = 0x1a45f4u;
    // NOP
label_1a45f8:
    // 0x1a45f8: 0x4b021b3c  vmove.x     $vf2, $vf3
    ctx->pc = 0x1a45f8u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
label_1a45fc:
    // 0x1a45fc: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a45fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a4600: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4608u;
}
