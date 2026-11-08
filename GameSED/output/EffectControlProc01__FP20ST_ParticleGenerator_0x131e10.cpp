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

// Function: EffectControlProc01__FP20ST_ParticleGenerator
// Address: 0x131e10 - 0x131e64
void EffectControlProc01__FP20ST_ParticleGenerator_0x131e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectControlProc01__FP20ST_ParticleGenerator_0x131e10");
#endif

    ctx->pc = 0x131e10u;

    // 0x131e10: 0x8c860114  lw          $a2, 0x114($a0)
    ctx->pc = 0x131e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x131e14: 0x8c82012c  lw          $v0, 0x12C($a0)
    ctx->pc = 0x131e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x131e18: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x131e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x131e1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x131e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x131e20: 0x24432000  addiu       $v1, $v0, 0x2000
    ctx->pc = 0x131e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x131e24: 0xac82012c  sw          $v0, 0x12C($a0)
    ctx->pc = 0x131e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 2));
    // 0x131e28: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x131e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x131e2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131e30: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x131e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x131e34: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x131e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x131e38: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x131e38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x131e3c: 0xc421f640  lwc1        $f1, -0x9C0($at)
    ctx->pc = 0x131e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131e40: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x131e40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x131e44: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x131e44u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x131e48: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x131e48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x131e4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x131e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x131e50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x131e50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x131e54: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x131e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131e58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x131e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x131e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x131E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E5Cu;
        // 0x131e60: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131E64u;
}
