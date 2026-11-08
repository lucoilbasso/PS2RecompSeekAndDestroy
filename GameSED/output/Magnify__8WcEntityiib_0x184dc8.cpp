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

// Function: Magnify__8WcEntityiib
// Address: 0x184dc8 - 0x184e40
void Magnify__8WcEntityiib_0x184dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Magnify__8WcEntityiib_0x184dc8");
#endif

    ctx->pc = 0x184dc8u;

    // 0x184dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184dcc: 0x24880040  addiu       $t0, $a0, 0x40
    ctx->pc = 0x184dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x184dd0: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x184dd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x184dd4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x184dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x184dd8: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x184dd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x184ddc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x184ddcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x184de0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x184de0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x184de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184de8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x184de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x184dec: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x184decu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x184df0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x184df0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x184df4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x184df4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x184df8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x184df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184dfc: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x184DFCu;
    {
        const bool branch_taken_0x184dfc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x184E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DFCu;
        // 0x184e00: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184dfc) {
            ctx->pc = 0x184E18u;
            goto label_184e18;
        }
    }
    ctx->pc = 0x184E04u;
    // 0x184e04: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x184e04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184e08: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x184e08u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x184e0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x184E0Cu;
    {
        const bool branch_taken_0x184e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E0Cu;
        // 0x184e10: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e0c) {
            ctx->pc = 0x184E2Cu;
            goto label_184e2c;
        }
    }
    ctx->pc = 0x184E14u;
    // 0x184e14: 0x0  nop
    ctx->pc = 0x184e14u;
    // NOP
label_184e18:
    // 0x184e18: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x184e18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x184e1c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x184e1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184e20: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x184e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184e24: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x184e24u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x184e28: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x184e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_184e2c:
    // 0x184e2c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x184e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x184e30: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x184e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x184e34: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x184e34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x184e38: 0x3e00008  jr          $ra
    ctx->pc = 0x184E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E38u;
        // 0x184e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184E40u;
}
