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

// Function: entry_001519b4
// Address: 0x1519b4 - 0x151afc
void entry_001519b4_0x1519b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001519b4_0x1519b4");
#endif

    switch (ctx->pc) {
        case 0x1519d0u: goto label_1519d0;
        default: break;
    }

    ctx->pc = 0x1519b4u;

    // 0x1519b4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1519b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1519b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1519b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1519bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1519bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1519c0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1519c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1519c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1519c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519c8: 0xc0618c2  jal         func_186308
    ctx->pc = 0x1519C8u;
    SET_GPR_U32(ctx, 31, 0x1519D0u);
    ctx->pc = 0x1519CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519C8u;
    // 0x1519cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x1519C8u, 0x1519D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519D0u;
label_1519d0:
    // 0x1519d0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1519d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1519d4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1519d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1519d8: 0x26420820  addiu       $v0, $s2, 0x820
    ctx->pc = 0x1519d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
    // 0x1519dc: 0x24639cb0  addiu       $v1, $v1, -0x6350
    ctx->pc = 0x1519dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941872));
    // 0x1519e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1519e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1519e4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1519e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x209CB0u));
    // 0x1519e8: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1519e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1519ec: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1519ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1519f0: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1519f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1519f4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1519f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1519f8: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x1519f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x1519fc: 0x26480400  addiu       $t0, $s2, 0x400
    ctx->pc = 0x1519fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x151a00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x151a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151a04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x151a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151a08: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x151a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x151a0c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x151a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x151a10: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x151a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151a14: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x151a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x151a18: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x151a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x151a1c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x151a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x151a20: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x151a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x151a24: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x151a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x151a28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151a2c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x151a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x151a30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x151a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151a34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151a38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x151a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151a3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x151a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x151a40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x151a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151a44: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x151a44u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x151a48: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x151a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x151a4c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x151a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x151a50: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x151a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151a54: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x151a54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151a58: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x151a58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x151a5c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x151a5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151a60: 0x4bc1106c  vsub.xyz    $vf1, $vf2, $vf1
    ctx->pc = 0x151a60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151a64: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x151a64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151a68: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x151a68u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x151a6c: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x151a6cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x151a70: 0x4be64b3d  vmr32.xyzw  $vf6, $vf9
    ctx->pc = 0x151a70u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x151a74: 0x4be5333d  vmr32.xyzw  $vf5, $vf6
    ctx->pc = 0x151a74u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x151a78: 0x4aa42b3d  vmr32.yw    $vf4, $vf5
    ctx->pc = 0x151a78u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151a7c: 0x4b461b3c  vmove.xz    $vf6, $vf3
    ctx->pc = 0x151a7cu;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x151a80: 0x4bc121bc  vmulax.xyz  $ACC, $vf4, $vf1x
    ctx->pc = 0x151a80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x151a84: 0x4bc128bd  vmadday.xyz $ACC, $vf5, $vf1y
    ctx->pc = 0x151a84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x151a88: 0x4bc1304a  vmaddz.xyz  $vf1, $vf6, $vf1z
    ctx->pc = 0x151a88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151a8c: 0x4bc221bc  vmulax.xyz  $ACC, $vf4, $vf2x
    ctx->pc = 0x151a8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x151a90: 0x4bc228bd  vmadday.xyz $ACC, $vf5, $vf2y
    ctx->pc = 0x151a90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x151a94: 0x4bc230ca  vmaddz.xyz  $vf3, $vf6, $vf2z
    ctx->pc = 0x151a94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x151a98: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x151a98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151a9c: 0xf8c30000  sqc2        $vf3, 0x0($a2)
    ctx->pc = 0x151a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x151aa0: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x151aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151aa4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x151aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151aa8: 0x264303b0  addiu       $v1, $s2, 0x3B0
    ctx->pc = 0x151aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
    // 0x151aac: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x151aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x151ab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ab4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x151ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x151ab8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x151ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x151abc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x151abcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x151ac0: 0xc781828c  lwc1        $f1, -0x7D74($gp)
    ctx->pc = 0x151ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151ac4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x151ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x151ac8: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x151ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x151acc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x151accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x151ad0: 0x8e4501ac  lw          $a1, 0x1AC($s2)
    ctx->pc = 0x151ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x151ad4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x151ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x151ad8: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x151ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x151adc: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x151adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    // 0x151ae0: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x151ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x151ae4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x151AE4u;
    {
        const bool branch_taken_0x151ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x151AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AE4u;
        // 0x151ae8: 0xe6420088  swc1        $f2, 0x88($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ae4) {
            ctx->pc = 0x151AFCu;
            return;
        }
    }
    ctx->pc = 0x151AECu;
    // 0x151aec: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x151aecu;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x151af0: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x151af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151af4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x151af4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x151af8: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x151af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    ctx->pc = 0x151afcu;
}
