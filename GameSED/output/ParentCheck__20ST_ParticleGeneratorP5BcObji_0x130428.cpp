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

// Function: ParentCheck__20ST_ParticleGeneratorP5BcObji
// Address: 0x130428 - 0x1305f8
void ParentCheck__20ST_ParticleGeneratorP5BcObji_0x130428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParentCheck__20ST_ParticleGeneratorP5BcObji_0x130428");
#endif

    switch (ctx->pc) {
        case 0x130504u: goto label_130504;
        case 0x13050cu: goto label_13050c;
        case 0x13053cu: goto label_13053c;
        case 0x130598u: goto label_130598;
        default: break;
    }

    ctx->pc = 0x130428u;

    // 0x130428: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x130428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13042c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x13042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x130430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130434: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x130434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x130438: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x130438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x13043c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x13043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x130440: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x130440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x130444: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x130444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x130448: 0x54a20065  bnel        $a1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x130448u;
    {
        const bool branch_taken_0x130448 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x130448) {
            ctx->pc = 0x13044Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130448u;
            // 0x13044c: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1305E0u;
            goto label_1305e0;
        }
    }
    ctx->pc = 0x130450u;
    // 0x130450: 0x961300c6  lhu         $s3, 0xC6($s0)
    ctx->pc = 0x130450u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x130454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130458: 0x1662005d  bne         $s3, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x130458u;
    {
        const bool branch_taken_0x130458 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x13045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130458u;
        // 0x13045c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130458) {
            ctx->pc = 0x1305D0u;
            goto label_1305d0;
        }
    }
    ctx->pc = 0x130460u;
    // 0x130460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130464: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x130464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x130468: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x130468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13046c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13046cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x130470: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x130470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x130474: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x130474u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x130478: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x130478u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x13047c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x13047cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x130480: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x130480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x130484: 0x8e060110  lw          $a2, 0x110($s0)
    ctx->pc = 0x130484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x130488: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x130488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13048c: 0x24c600e0  addiu       $a2, $a2, 0xE0
    ctx->pc = 0x13048cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x130490: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x130490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x130494: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x130494u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x130498: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x130498u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x13049c: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x13049cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1304a0: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1304a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1304a4: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1304a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1304a8: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1304a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1304ac: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1304acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1304b0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1304b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1304b4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1304b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1304b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1304b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1304bc: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x1304bcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1304c0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1304c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1304c4: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1304c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1304c8: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1304c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1304cc: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1304ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1304d0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1304d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1304d4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1304d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1304d8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1304d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1304dc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1304dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1304e0: 0xfa0c0000  sqc2        $vf12, 0x0($s0)
    ctx->pc = 0x1304e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1304e4: 0x8e110110  lw          $s1, 0x110($s0)
    ctx->pc = 0x1304e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1304e8: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x1304e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1304ec: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x1304ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1304f0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1304f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1304f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1304F4u;
    {
        const bool branch_taken_0x1304f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1304f4) {
            ctx->pc = 0x130504u;
            goto label_130504;
        }
    }
    ctx->pc = 0x1304FCu;
    // 0x1304fc: 0xc061920  jal         func_186480
    ctx->pc = 0x1304FCu;
    SET_GPR_U32(ctx, 31, 0x130504u);
    ctx->pc = 0x130500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304FCu;
    // 0x130500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1304FCu, 0x130504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130504u;
label_130504:
    // 0x130504: 0xc061422  jal         func_185088
    ctx->pc = 0x130504u;
    SET_GPR_U32(ctx, 31, 0x13050Cu);
    ctx->pc = 0x130508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130504u;
    // 0x130508: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x130504u, 0x13050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13050Cu;
label_13050c:
    // 0x13050c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x13050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x130510: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x130510u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130514: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x130514u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x130518: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x130518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x13051c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x13051cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x130520: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x130520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x130524: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x130524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130528: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x130528u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x13052c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x13052cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x130530: 0x7cc00000  sq          $zero, 0x0($a2)
    ctx->pc = 0x130530u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 0));
    // 0x130534: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x130534u;
    SET_GPR_U32(ctx, 31, 0x13053Cu);
    ctx->pc = 0x130538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130534u;
    // 0x130538: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x130534u, 0x13053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13053Cu;
label_13053c:
    // 0x13053c: 0xa60000c6  sh          $zero, 0xC6($s0)
    ctx->pc = 0x13053cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 0));
    // 0x130540: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x130540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x130544: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x130544u;
    {
        const bool branch_taken_0x130544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130544) {
            ctx->pc = 0x130548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130544u;
            // 0x130548: 0x8e030068  lw          $v1, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13055Cu;
            goto label_13055c;
        }
    }
    ctx->pc = 0x13054Cu;
    // 0x13054c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x13054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x130550: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x130550u;
    {
        const bool branch_taken_0x130550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x130550) {
            ctx->pc = 0x130554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130550u;
            // 0x130554: 0xa6020118  sh          $v0, 0x118($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130558u;
            goto label_130558;
        }
    }
    ctx->pc = 0x130558u;
label_130558:
    // 0x130558: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x130558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_13055c:
    // 0x13055c: 0x2402006b  addiu       $v0, $zero, 0x6B
    ctx->pc = 0x13055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x130560: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x130560u;
    {
        const bool branch_taken_0x130560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x130560) {
            ctx->pc = 0x130564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130560u;
            // 0x130564: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1305DCu;
            goto label_1305dc;
        }
    }
    ctx->pc = 0x130568u;
    // 0x130568: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x130568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x13056c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x13056Cu;
    {
        const bool branch_taken_0x13056c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13056c) {
            ctx->pc = 0x130570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13056Cu;
            // 0x130570: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1305DCu;
            goto label_1305dc;
        }
    }
    ctx->pc = 0x130574u;
    // 0x130574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130578: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x130578u;
    {
        const bool branch_taken_0x130578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130578u;
        // 0x13057c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130578) {
            ctx->pc = 0x1305D8u;
            goto label_1305d8;
        }
    }
    ctx->pc = 0x130580u;
    // 0x130580: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x130580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x130584: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x130584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x130588: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x130588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13058c: 0x2442a298  addiu       $v0, $v0, -0x5D68
    ctx->pc = 0x13058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943384));
    // 0x130590: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x130590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130594: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x130594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_130598:
    // 0x130598: 0xac8700e0  sw          $a3, 0xE0($a0)
    ctx->pc = 0x130598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 7));
    // 0x13059c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13059Cu;
    {
        const bool branch_taken_0x13059c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1305A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13059Cu;
        // 0x1305a0: 0xac860134  sw          $a2, 0x134($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13059c) {
            ctx->pc = 0x1305B8u;
            goto label_1305b8;
        }
    }
    ctx->pc = 0x1305A4u;
    // 0x1305a4: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x1305a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x1305a8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1305A8u;
    {
        const bool branch_taken_0x1305a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1305a8) {
            ctx->pc = 0x1305ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1305A8u;
            // 0x1305ac: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1305BCu;
            goto label_1305bc;
        }
    }
    ctx->pc = 0x1305B0u;
    // 0x1305b0: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1305b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1305b4: 0xac6200e8  sw          $v0, 0xE8($v1)
    ctx->pc = 0x1305b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 2));
label_1305b8:
    // 0x1305b8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1305b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1305bc:
    // 0x1305bc: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1305BCu;
    {
        const bool branch_taken_0x1305bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1305C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305BCu;
        // 0x1305c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305bc) {
            ctx->pc = 0x130598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130598;
        }
    }
    ctx->pc = 0x1305C4u;
    // 0x1305c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1305C4u;
    {
        const bool branch_taken_0x1305c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1305C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305C4u;
        // 0x1305c8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305c4) {
            ctx->pc = 0x1305DCu;
            goto label_1305dc;
        }
    }
    ctx->pc = 0x1305CCu;
    // 0x1305cc: 0x0  nop
    ctx->pc = 0x1305ccu;
    // NOP
label_1305d0:
    // 0x1305d0: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x1305d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x1305d4: 0xa602011a  sh          $v0, 0x11A($s0)
    ctx->pc = 0x1305d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 2));
label_1305d8:
    // 0x1305d8: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1305d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_1305dc:
    // 0x1305dc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1305dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1305e0:
    // 0x1305e0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1305e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1305e4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1305e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1305e8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1305e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1305ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1305ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1305f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1305F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1305F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305F0u;
        // 0x1305f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1305F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1305F8u;
}
