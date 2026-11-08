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

// Function: entry_00137f5c
// Address: 0x137f5c - 0x138000
void entry_00137f5c_0x137f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137f5c_0x137f5c");
#endif

    switch (ctx->pc) {
        case 0x137f64u: goto label_137f64;
        default: break;
    }

    ctx->pc = 0x137f5cu;

    // 0x137f5c: 0xc061422  jal         func_185088
    ctx->pc = 0x137F5Cu;
    SET_GPR_U32(ctx, 31, 0x137F64u);
    ctx->pc = 0x137F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F5Cu;
    // 0x137f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x137F5Cu, 0x137F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F64u;
label_137f64:
    // 0x137f64: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x137f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x137f68: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x137f68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137f6c: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x137f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x137f70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x137f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x137f74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137f78: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x137f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137f7c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x137f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x137f80: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x137f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x137f84: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x137f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x137f88: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x137f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x137f8c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x137f8cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x137f90: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x137f90u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x137f94: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x137f94u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x137f98: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x137f98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x137f9c: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x137f9cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137fa0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x137fa0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x137fa4: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x137fa4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x137fa8: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x137fa8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x137fac: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x137facu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x137fb0: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x137fb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x137fb4: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x137fb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x137fb8: 0xf8c80000  sqc2        $vf8, 0x0($a2)
    ctx->pc = 0x137fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x137fbc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x137fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137fc0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x137fc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137fc4: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x137fc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x137fc8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x137fc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x137fcc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x137fccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x137fd0: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x137fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137fd4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x137fd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137fd8: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x137fd8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137fdc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x137fdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x137fe0: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x137fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x137fe4: 0xaf808a18  sw          $zero, -0x75E8($gp)
    ctx->pc = 0x137fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U32(ctx, 0));
    // 0x137fe8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x137fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x137fec: 0xaf808a1c  sw          $zero, -0x75E4($gp)
    ctx->pc = 0x137fecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
    // 0x137ff0: 0x2442a390  addiu       $v0, $v0, -0x5C70
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x137ff4: 0x24130013  addiu       $s3, $zero, 0x13
    ctx->pc = 0x137ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x137ff8: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x137ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x137ffc: 0x0  nop
    ctx->pc = 0x137ffcu;
    // NOP
    ctx->pc = 0x138000u;
}
