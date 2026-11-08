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

// Function: entry_0018befc
// Address: 0x18befc - 0x18bfec
void entry_0018befc_0x18befc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018befc_0x18befc");
#endif

    ctx->pc = 0x18befcu;

    // 0x18befc: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x18befcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x18bf00: 0x96460018  lhu         $a2, 0x18($s2)
    ctx->pc = 0x18bf00u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x18bf04: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x18bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x18bf08: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x18bf08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x18bf0c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x18bf0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18bf10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18bf10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18bf14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18bf14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18bf18: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x18bf18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x18bf1c: 0x523c0  sll         $a0, $a1, 15
    ctx->pc = 0x18bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x18bf20: 0x9645001a  lhu         $a1, 0x1A($s2)
    ctx->pc = 0x18bf20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x18bf24: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x18bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x18bf28: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x18bf28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x18bf2c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x18bf2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x18bf30: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18bf30u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18bf34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18bf34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18bf38: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x18bf38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18bf3c: 0x81bc0  sll         $v1, $t0, 15
    ctx->pc = 0x18bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x18bf40: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x18bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x18bf44: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x18bf44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x18bf48: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x18bf48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18bf4c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18bf4cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18bf50: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18bf50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18bf54: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x18bf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18bf58: 0x923c0  sll         $a0, $t1, 15
    ctx->pc = 0x18bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 15));
    // 0x18bf5c: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x18bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x18bf60: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x18bf60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x18bf64: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x18bf64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x18bf68: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18bf68u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18bf6c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18bf6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18bf70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18bf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18bf74: 0x33c34000  andi        $v1, $fp, 0x4000
    ctx->pc = 0x18bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16384);
    // 0x18bf78: 0x33c4000f  andi        $a0, $fp, 0xF
    ctx->pc = 0x18bf78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)15);
    // 0x18bf7c: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x18bf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x18bf80: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x18bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18bf84: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x18bf84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18bf88: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x18bf88u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x18bf8c: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18BF8Cu;
    {
        const bool branch_taken_0x18bf8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x18BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF8Cu;
        // 0x18bf90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf8c) {
            ctx->pc = 0x18BFECu;
            return;
        }
    }
    ctx->pc = 0x18BF94u;
    // 0x18bf94: 0xa625000c  sh          $a1, 0xC($s1)
    ctx->pc = 0x18bf94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x18bf98: 0xde440038  ld          $a0, 0x38($s2)
    ctx->pc = 0x18bf98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x18bf9c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x18bf9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x18bfa0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x18bfa0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x18bfa4: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x18bfa4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x18bfa8: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x18bfa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18bfac: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x18bfacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18bfb0: 0x96450030  lhu         $a1, 0x30($s2)
    ctx->pc = 0x18bfb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x18bfb4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18bfb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18bfb8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x18bfb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18bfbc: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x18bfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x18bfc0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18bfc4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x18bfc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x18bfc8: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18bfcc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x18bfccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x18bfd0: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x18bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x18bfd4: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x18bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x18bfd8: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x18bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x18bfdc: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x18bfdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18bfe0: 0xfe070008  sd          $a3, 0x8($s0)
    ctx->pc = 0x18bfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 7));
    // 0x18bfe4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x18bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x18bfe8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18bfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x18bfecu;
}
