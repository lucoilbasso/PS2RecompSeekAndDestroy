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

// Function: ApRsc3DMakeBlockAxis__FP9FVector32P13ApRscMapBlockP9IVector32
// Address: 0x143560 - 0x1435e0
void ApRsc3DMakeBlockAxis__FP9FVector32P13ApRscMapBlockP9IVector32_0x143560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DMakeBlockAxis__FP9FVector32P13ApRscMapBlockP9IVector32_0x143560");
#endif

    switch (ctx->pc) {
        case 0x143578u: goto label_143578;
        default: break;
    }

    ctx->pc = 0x143560u;

    // 0x143560: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x143560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x143564: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x143564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143568: 0x2449c4a0  addiu       $t1, $v0, -0x3B60
    ctx->pc = 0x143568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952096));
    // 0x14356c: 0x24a80030  addiu       $t0, $a1, 0x30
    ctx->pc = 0x14356cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x143570: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x143570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x143574: 0x0  nop
    ctx->pc = 0x143574u;
    // NOP
label_143578:
    // 0x143578: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x143578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x14357c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x143580: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x143580u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143584: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x143584u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x143588: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x143588u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x14358c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x14358cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x143590: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x143590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143594: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x143594u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x143598: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x143598u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x14359c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x14359cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1435a0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1435a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1435a4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1435a4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1435a8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1435a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1435ac: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1435acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1435b0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1435b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1435b4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1435b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1435b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1435b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1435bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1435bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1435c0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1435c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1435c4: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1435c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1435c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1435c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1435cc: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x1435ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1435d0: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1435D0u;
    {
        const bool branch_taken_0x1435d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1435d0) {
            ctx->pc = 0x1435D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1435D0u;
            // 0x1435d4: 0x71900  sll         $v1, $a3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143578;
        }
    }
    ctx->pc = 0x1435D8u;
    // 0x1435d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1435D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1435D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1435E0u;
}
