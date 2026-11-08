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

// Function: entry_0014777c
// Address: 0x14777c - 0x1478a8
void entry_0014777c_0x14777c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014777c_0x14777c");
#endif

    ctx->pc = 0x14777cu;

    // 0x14777c: 0x200782d  daddu       $t7, $s0, $zero
    ctx->pc = 0x14777cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147780: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x147780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x147784: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x147784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x147788: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x147788u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x14778c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x14778cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x147790: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x147790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x147794: 0x2410004e  addiu       $s0, $zero, 0x4E
    ctx->pc = 0x147794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x147798: 0x25ab0060  addiu       $t3, $t5, 0x60
    ctx->pc = 0x147798u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x14779c: 0x25a40010  addiu       $a0, $t5, 0x10
    ctx->pc = 0x14779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x1477a0: 0x25a20020  addiu       $v0, $t5, 0x20
    ctx->pc = 0x1477a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1477a4: 0x160702d  daddu       $t6, $t3, $zero
    ctx->pc = 0x1477a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477a8: 0xaded0008  sw          $t5, 0x8($t7)
    ctx->pc = 0x1477a8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 13));
    // 0x1477ac: 0x1c41823  subu        $v1, $t6, $a0
    ctx->pc = 0x1477acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1477b0: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1477b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1477b4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1477b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1477b8: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x1477b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x1477bc: 0x25a60030  addiu       $a2, $t5, 0x30
    ctx->pc = 0x1477bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
    // 0x1477c0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1477c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1477c4: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1477c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1477c8: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x1477c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x1477cc: 0xdf898c80  ld          $t1, -0x7380($gp)
    ctx->pc = 0x1477ccu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x1477d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1477d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1477d4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1477d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1477d8: 0x25a70040  addiu       $a3, $t5, 0x40
    ctx->pc = 0x1477d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x1477dc: 0x25aa0050  addiu       $t2, $t5, 0x50
    ctx->pc = 0x1477dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 80));
    // 0x1477e0: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1477e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1477e4: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1477e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1477e8: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x1477e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1477ec: 0x356b8080  ori         $t3, $t3, 0x8080
    ctx->pc = 0x1477ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32896);
    // 0x1477f0: 0x240c0044  addiu       $t4, $zero, 0x44
    ctx->pc = 0x1477f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1477f4: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x1477f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1477f8: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x1477f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x1477fc: 0xfcd00008  sd          $s0, 0x8($a2)
    ctx->pc = 0x1477fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 16));
    // 0x147800: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x147800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147804: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x147804u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x147808: 0xfceb0000  sd          $t3, 0x0($a3)
    ctx->pc = 0x147808u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 11));
    // 0x14780c: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x14780cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x147810: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x147810u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x147814: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x147814u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x147818: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x147818u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x14781c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x14781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x147820: 0x54490021  bnel        $v0, $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x147820u;
    {
        const bool branch_taken_0x147820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x147820) {
            ctx->pc = 0x147824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147820u;
            // 0x147824: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1478A8u;
            return;
        }
    }
    ctx->pc = 0x147828u;
    // 0x147828: 0x2402044e  addiu       $v0, $zero, 0x44E
    ctx->pc = 0x147828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1102));
    // 0x14782c: 0x3c043003  lui         $a0, 0x3003
    ctx->pc = 0x14782cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12291 << 16));
    // 0x147830: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x147830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x147834: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x147834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x147838: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x147838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x14783c: 0xfdc20008  sd          $v0, 0x8($t6)
    ctx->pc = 0x14783cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 2));
    // 0x147840: 0x262204b0  addiu       $v0, $s1, 0x4B0
    ctx->pc = 0x147840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
    // 0x147844: 0xfdc40000  sd          $a0, 0x0($t6)
    ctx->pc = 0x147844u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 4));
    // 0x147848: 0x25a40080  addiu       $a0, $t5, 0x80
    ctx->pc = 0x147848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 128));
    // 0x14784c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14784cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x147850: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147854: 0x25a30070  addiu       $v1, $t5, 0x70
    ctx->pc = 0x147854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
    // 0x147858: 0x8e250370  lw          $a1, 0x370($s1)
    ctx->pc = 0x147858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x14785c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14785cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147860: 0x25ab0090  addiu       $t3, $t5, 0x90
    ctx->pc = 0x147860u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
    // 0x147864: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x147864u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x147868: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x147868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x14786c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x14786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x147870: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x147870u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147874: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x147874u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x147878: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x147878u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14787c: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x14787cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147880: 0x25ab00a0  addiu       $t3, $t5, 0xA0
    ctx->pc = 0x147880u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 160));
    // 0x147884: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x147884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x147888: 0x262304c0  addiu       $v1, $s1, 0x4C0
    ctx->pc = 0x147888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1216));
    // 0x14788c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x14788cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x147890: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x147890u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147894: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x147894u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x147898: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x147898u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14789c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x14789cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1478a0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1478A0u;
    {
        const bool branch_taken_0x1478a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478A0u;
        // 0x1478a4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478a0) {
            ctx->pc = 0x1479F8u;
            return;
        }
    }
    ctx->pc = 0x1478A8u;
}
