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

// Function: entry_00182700
// Address: 0x182700 - 0x182760
void entry_00182700_0x182700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182700_0x182700");
#endif

    ctx->pc = 0x182700u;

    // 0x182700: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x182700u;
    {
        const bool branch_taken_0x182700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182700u;
        // 0x182704: 0x26030030  addiu       $v1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182700) {
            ctx->pc = 0x182760u;
            return;
        }
    }
    ctx->pc = 0x182708u;
    // 0x182708: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x182708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x18270c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x182710: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x182710u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182714: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x182714u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182718: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x182718u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18271c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18271cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x182720: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x182720u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182724: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x182724u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x182728: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x182728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18272c: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x18272cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x182730: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x182730u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x182734: 0x4a0003bf  vwaitq
    ctx->pc = 0x182734u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x182738: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x182738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18273c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x18273cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x182740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182744: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x182744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182748: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x182748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18274c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18274cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182750: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x182750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x182754: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x182754u;
    {
        const bool branch_taken_0x182754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182754u;
        // 0x182758: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182754) {
            ctx->pc = 0x182778u;
            return;
        }
    }
    ctx->pc = 0x18275Cu;
    // 0x18275c: 0x0  nop
    ctx->pc = 0x18275cu;
    // NOP
    ctx->pc = 0x182760u;
}
