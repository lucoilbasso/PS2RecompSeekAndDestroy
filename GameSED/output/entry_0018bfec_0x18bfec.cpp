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

// Function: entry_0018bfec
// Address: 0x18bfec - 0x18c078
void entry_0018bfec_0x18bfec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bfec_0x18bfec");
#endif

    ctx->pc = 0x18bfecu;

    // 0x18bfec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x18bfecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18bff0: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x18bff0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bff4: 0xd9e40000  lqc2        $vf4, 0x0($t7)
    ctx->pc = 0x18bff4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x18bff8: 0xd9e50010  lqc2        $vf5, 0x10($t7)
    ctx->pc = 0x18bff8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x18bffc: 0xd9e60020  lqc2        $vf6, 0x20($t7)
    ctx->pc = 0x18bffcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 32)));
    // 0x18c000: 0xd9e70030  lqc2        $vf7, 0x30($t7)
    ctx->pc = 0x18c000u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 48)));
    // 0x18c004: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18c004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c008: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18c008u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c00c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18c00cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c010: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18c010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18c014: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x18c014u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18c018: 0x15580017  bne         $t2, $t8, . + 4 + (0x17 << 2)
    ctx->pc = 0x18C018u;
    {
        const bool branch_taken_0x18c018 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 24));
        ctx->pc = 0x18C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C018u;
        // 0x18c01c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c018) {
            ctx->pc = 0x18C078u;
            return;
        }
    }
    ctx->pc = 0x18C020u;
    // 0x18c020: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x18c020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x18c024: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x18c024u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c028: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c02c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c030: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c034: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x18c034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x18c038: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x18c038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x18c03c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x18c03cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c040: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18c040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18c044: 0x44044000  mfc1        $a0, $f8
    ctx->pc = 0x18c044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18c048: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18c048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18c04c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18c04cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18c050: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18c050u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18c054: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18c054u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18c058: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x18c058u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x18c05c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18c05cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18c060: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x18c060u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18c064: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x18c064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18c068: 0xf9c20000  sqc2        $vf2, 0x0($t6)
    ctx->pc = 0x18c068u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18c06c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18C06Cu;
    {
        const bool branch_taken_0x18c06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C06Cu;
        // 0x18c070: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c06c) {
            ctx->pc = 0x18C08Cu;
            return;
        }
    }
    ctx->pc = 0x18C074u;
    // 0x18c074: 0x0  nop
    ctx->pc = 0x18c074u;
    // NOP
    ctx->pc = 0x18c078u;
}
