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

// Function: entry_00150f00
// Address: 0x150f00 - 0x150fe0
void entry_00150f00_0x150f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150f00_0x150f00");
#endif

    ctx->pc = 0x150f00u;

    // 0x150f00: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x150f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x150f04: 0x24639c80  addiu       $v1, $v1, -0x6380
    ctx->pc = 0x150f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941824));
    // 0x150f08: 0x26060670  addiu       $a2, $s0, 0x670
    ctx->pc = 0x150f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x150f0c: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x150f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x150f10: 0x26040660  addiu       $a0, $s0, 0x660
    ctx->pc = 0x150f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x150f14: 0x260201d0  addiu       $v0, $s0, 0x1D0
    ctx->pc = 0x150f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x150f18: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x150f18u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150f1c: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x150f1cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x150f20: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x150f20u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x150f24: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x150f24u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x150f28: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x150f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150f2c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x150f2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150f30: 0x4bc3016c  vsub.xyz    $vf5, $vf0, $vf3
    ctx->pc = 0x150f30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150f34: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x150f34u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x150f38: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x150f38u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x150f3c: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x150f3cu;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x150f40: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x150f40u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x150f44: 0x4bc5096a  vmul.xyz    $vf5, $vf1, $vf5
    ctx->pc = 0x150f44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150f48: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x150f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150f4c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x150f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150f50: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x150f50u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x150f54: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x150f54u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x150f58: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x150f58u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x150f5c: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x150f5cu;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x150f60: 0x4bc518d8  vmulx.xyz   $vf3, $vf3, $vf5x
    ctx->pc = 0x150f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x150f64: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x150f64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x150f68: 0x48a92800  qmtc2.ni    $t1, $vf5
    ctx->pc = 0x150f68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x150f6c: 0x48aa3000  qmtc2.ni    $t2, $vf6
    ctx->pc = 0x150f6cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x150f70: 0x48ab3800  qmtc2.ni    $t3, $vf7
    ctx->pc = 0x150f70u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x150f74: 0x4bc118e8  vadd.xyz    $vf3, $vf3, $vf1
    ctx->pc = 0x150f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x150f78: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x150f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x150f7c: 0x48a84000  qmtc2.ni    $t0, $vf8
    ctx->pc = 0x150f7cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x150f80: 0x4be121bc  vmulax.xyzw $ACC, $vf4, $vf1x
    ctx->pc = 0x150f80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150f84: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x150f84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150f88: 0x4be130be  vmaddaz.xyzw $ACC, $vf6, $vf1z
    ctx->pc = 0x150f88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150f8c: 0x4be1388b  vmaddw.xyzw $vf2, $vf7, $vf1w
    ctx->pc = 0x150f8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x150f90: 0x4bc818d8  vmulx.xyz   $vf3, $vf3, $vf8x
    ctx->pc = 0x150f90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x150f94: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x150f94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x150f98: 0xf8c30000  sqc2        $vf3, 0x0($a2)
    ctx->pc = 0x150f98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x150f9c: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x150f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x150fa0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x150fa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fa4: 0xc6010668  lwc1        $f1, 0x668($s0)
    ctx->pc = 0x150fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150fa8: 0xc6000360  lwc1        $f0, 0x360($s0)
    ctx->pc = 0x150fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150fac: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x150facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x150fb0: 0xc6030380  lwc1        $f3, 0x380($s0)
    ctx->pc = 0x150fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x150fb4: 0x46000a02  mul.s       $f8, $f1, $f0
    ctx->pc = 0x150fb4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x150fb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x150FB8u;
    {
        const bool branch_taken_0x150fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FB8u;
        // 0x150fbc: 0xc6150384  lwc1        $f21, 0x384($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fb8) {
            ctx->pc = 0x150FE0u;
            return;
        }
    }
    ctx->pc = 0x150FC0u;
    // 0x150fc0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x150fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x150fc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150FC4u;
    {
        const bool branch_taken_0x150fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FC4u;
        // 0x150fc8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fc4) {
            ctx->pc = 0x150FE4u;
            return;
        }
    }
    ctx->pc = 0x150FCCu;
    // 0x150fcc: 0x92030575  lbu         $v1, 0x575($s0)
    ctx->pc = 0x150fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    // 0x150fd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150FD0u;
    {
        const bool branch_taken_0x150fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FD0u;
        // 0x150fd4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fd0) {
            ctx->pc = 0x150FE0u;
            return;
        }
    }
    ctx->pc = 0x150FD8u;
    // 0x150fd8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150FD8u;
    {
        const bool branch_taken_0x150fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150fd8) {
            ctx->pc = 0x150FE4u;
            return;
        }
    }
    ctx->pc = 0x150FE0u;
}
