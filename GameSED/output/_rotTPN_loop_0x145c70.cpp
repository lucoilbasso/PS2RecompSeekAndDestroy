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

// Function: _rotTPN_loop
// Address: 0x145c70 - 0x145d9c
void _rotTPN_loop_0x145c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rotTPN_loop_0x145c70");
#endif

    ctx->pc = 0x145c70u;

label_145c70:
    // 0x145c70: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x145c70u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x145c74: 0x4be8a1bc  vmulax.xyzw $ACC, $vf20, $vf8x
    ctx->pc = 0x145c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x145c78: 0x4be8a8bd  vmadday.xyzw $ACC, $vf21, $vf8y
    ctx->pc = 0x145c78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x145c7c: 0x4be8b0be  vmaddaz.xyzw $ACC, $vf22, $vf8z
    ctx->pc = 0x145c7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x145c80: 0x4be8bb4b  vmaddw.xyzw $vf13, $vf23, $vf8w
    ctx->pc = 0x145c80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x145c84: 0xd8880010  lqc2        $vf8, 0x10($a0)
    ctx->pc = 0x145c84u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x145c88: 0x20840010  addi        $a0, $a0, 0x10
    ctx->pc = 0x145c88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x145c8c: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x145c8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x145c90: 0x4a0003bf  vwaitq
    ctx->pc = 0x145c90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x145c94: 0x4bc0639c  vmulq.xyz   $vf14, $vf12, $Q
    ctx->pc = 0x145c94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x145c98: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x145c98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x145c9c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x145c9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x145ca0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x145ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x145ca4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x145ca4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x145ca8: 0x4bedc62f  vmini.xyzw  $vf24, $vf24, $vf13
    ctx->pc = 0x145ca8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[24], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x145cac: 0x4bedce6b  vmax.xyzw   $vf25, $vf25, $vf13
    ctx->pc = 0x145cacu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[25], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x145cb0: 0x4beed6af  vmini.xyzw  $vf26, $vf26, $vf14
    ctx->pc = 0x145cb0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[26], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x145cb4: 0x4beedeeb  vmax.xyzw   $vf27, $vf27, $vf14
    ctx->pc = 0x145cb4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[27], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x145cb8: 0xf86d0000  sqc2        $vf13, 0x0($v1)
    ctx->pc = 0x145cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x145cbc: 0xf8ae0000  sqc2        $vf14, 0x0($a1)
    ctx->pc = 0x145cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x145cc0: 0x20630010  addi        $v1, $v1, 0x10
    ctx->pc = 0x145cc0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x145cc4: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x145cc4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x145cc8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x145CC8u;
    {
        const bool branch_taken_0x145cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145cc8) {
            ctx->pc = 0x145C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145c70;
        }
    }
    ctx->pc = 0x145CD0u;
    // 0x145cd0: 0x0  nop
    ctx->pc = 0x145cd0u;
    // NOP
    // 0x145cd4: 0xf8d80000  sqc2        $vf24, 0x0($a2)
    ctx->pc = 0x145cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x145cd8: 0xf8d90010  sqc2        $vf25, 0x10($a2)
    ctx->pc = 0x145cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x145cdc: 0xf8da0020  sqc2        $vf26, 0x20($a2)
    ctx->pc = 0x145cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x145ce0: 0xf8db0030  sqc2        $vf27, 0x30($a2)
    ctx->pc = 0x145ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x145ce4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x145ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ce8: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x145ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145cec: 0xc7a30124  lwc1        $f3, 0x124($sp)
    ctx->pc = 0x145cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x145cf0: 0x46040181  sub.s       $f6, $f0, $f4
    ctx->pc = 0x145cf0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x145cf4: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x145cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145cf8: 0x460409c1  sub.s       $f7, $f1, $f4
    ctx->pc = 0x145cf8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x145cfc: 0xc7a40108  lwc1        $f4, 0x108($sp)
    ctx->pc = 0x145cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x145d00: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x145d00u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x145d04: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x145d04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x145d08: 0x46046036  c.le.s      $f12, $f4
    ctx->pc = 0x145d08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d0c: 0xe7a60120  swc1        $f6, 0x120($sp)
    ctx->pc = 0x145d0cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x145d10: 0xe7a70130  swc1        $f7, 0x130($sp)
    ctx->pc = 0x145d10u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x145d14: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x145d14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x145d18: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x145D18u;
    {
        const bool branch_taken_0x145d18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x145D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D18u;
        // 0x145d1c: 0xe7a20134  swc1        $f2, 0x134($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d18) {
            ctx->pc = 0x145DB8u;
            return;
        }
    }
    ctx->pc = 0x145D20u;
    // 0x145d20: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x145d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145d24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145d28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d2c: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
    ctx->pc = 0x145D2Cu;
    {
        const bool branch_taken_0x145d2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145d2c) {
            ctx->pc = 0x145D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145D2Cu;
            // 0x145d30: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145DBCu;
            return;
        }
    }
    ctx->pc = 0x145D34u;
    // 0x145d34: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x145d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x145d38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145d3c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x145d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d40: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x145D40u;
    {
        const bool branch_taken_0x145d40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x145D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D40u;
        // 0x145d44: 0xc7a00128  lwc1        $f0, 0x128($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d40) {
            ctx->pc = 0x145D9Cu;
            return;
        }
    }
    ctx->pc = 0x145D48u;
    // 0x145d48: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x145d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x145d4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145d50: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x145d50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d54: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x145D54u;
    {
        const bool branch_taken_0x145d54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145d54) {
            ctx->pc = 0x145D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145D54u;
            // 0x145d58: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145DBCu;
            return;
        }
    }
    ctx->pc = 0x145D5Cu;
    // 0x145d5c: 0x3c01c3c8  lui         $at, 0xC3C8
    ctx->pc = 0x145d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50120 << 16));
    // 0x145d60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145d64: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x145d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d68: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x145D68u;
    {
        const bool branch_taken_0x145d68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145d68) {
            ctx->pc = 0x145D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145D68u;
            // 0x145d6c: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145DBCu;
            return;
        }
    }
    ctx->pc = 0x145D70u;
    // 0x145d70: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x145d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x145d74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145d78: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x145d78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d7c: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x145D7Cu;
    {
        const bool branch_taken_0x145d7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145d7c) {
            ctx->pc = 0x145D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145D7Cu;
            // 0x145d80: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145DBCu;
            return;
        }
    }
    ctx->pc = 0x145D84u;
    // 0x145d84: 0x3c01c348  lui         $at, 0xC348
    ctx->pc = 0x145d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49992 << 16));
    // 0x145d88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145d8c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x145d8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d90: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x145D90u;
    {
        const bool branch_taken_0x145d90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145d90) {
            ctx->pc = 0x145D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145D90u;
            // 0x145d94: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145DBCu;
            return;
        }
    }
    ctx->pc = 0x145D98u;
    // 0x145d98: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x145d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x145d9cu;
}
