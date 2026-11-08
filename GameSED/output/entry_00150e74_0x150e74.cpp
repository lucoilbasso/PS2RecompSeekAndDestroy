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

// Function: entry_00150e74
// Address: 0x150e74 - 0x150ee4
void entry_00150e74_0x150e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150e74_0x150e74");
#endif

    ctx->pc = 0x150e74u;

    // 0x150e74: 0x50a0001b  beql        $a1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x150E74u;
    {
        const bool branch_taken_0x150e74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x150e74) {
            ctx->pc = 0x150E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150E74u;
            // 0x150e78: 0x92030576  lbu         $v1, 0x576($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1398)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150EE4u;
            return;
        }
    }
    ctx->pc = 0x150E7Cu;
    // 0x150e7c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x150e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x150e80: 0x8e03038c  lw          $v1, 0x38C($s0)
    ctx->pc = 0x150e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x150e84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x150e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150e88: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x150e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x150e8c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x150e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x150e90: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x150e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x150e94: 0x28654000  slti        $a1, $v1, 0x4000
    ctx->pc = 0x150e94u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x150e98: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x150e9c: 0x85180a  movz        $v1, $a0, $a1
    ctx->pc = 0x150e9cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x150ea0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x150ea0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x150ea4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x150ea4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150ea8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x150ea8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x150eac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x150eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150eb0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x150eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x150eb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150eb8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x150eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x150ebc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x150ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x150ec0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x150ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x150ec4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150ec8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x150ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x150ecc: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x150eccu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x150ed0: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x150ed0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x150ed4: 0xc6000308  lwc1        $f0, 0x308($s0)
    ctx->pc = 0x150ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150ed8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x150ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x150edc: 0xe6000384  swc1        $f0, 0x384($s0)
    ctx->pc = 0x150edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 900), bits); }
    // 0x150ee0: 0x92030576  lbu         $v1, 0x576($s0)
    ctx->pc = 0x150ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1398)));
    ctx->pc = 0x150ee4u;
}
