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

// Function: CreateParticle__20ST_ParticleGeneratorUi
// Address: 0x12f118 - 0x12ff4c
void CreateParticle__20ST_ParticleGeneratorUi_0x12f118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateParticle__20ST_ParticleGeneratorUi_0x12f118");
#endif

    switch (ctx->pc) {
        case 0x12f204u: goto label_12f204;
        case 0x12f21cu: goto label_12f21c;
        case 0x12f27cu: goto label_12f27c;
        case 0x12f2b8u: goto label_12f2b8;
        case 0x12f2e8u: goto label_12f2e8;
        case 0x12f300u: goto label_12f300;
        case 0x12f334u: goto label_12f334;
        case 0x12f368u: goto label_12f368;
        case 0x12f3c8u: goto label_12f3c8;
        case 0x12f3fcu: goto label_12f3fc;
        case 0x12f430u: goto label_12f430;
        case 0x12f558u: goto label_12f558;
        case 0x12f57cu: goto label_12f57c;
        case 0x12f60cu: goto label_12f60c;
        case 0x12f640u: goto label_12f640;
        case 0x12f670u: goto label_12f670;
        case 0x12f684u: goto label_12f684;
        case 0x12f6b8u: goto label_12f6b8;
        case 0x12f6ecu: goto label_12f6ec;
        case 0x12f74cu: goto label_12f74c;
        case 0x12f780u: goto label_12f780;
        case 0x12f7b4u: goto label_12f7b4;
        case 0x12f8dcu: goto label_12f8dc;
        case 0x12f900u: goto label_12f900;
        case 0x12f98cu: goto label_12f98c;
        case 0x12f9c0u: goto label_12f9c0;
        case 0x12f9f0u: goto label_12f9f0;
        case 0x12fa08u: goto label_12fa08;
        case 0x12fa3cu: goto label_12fa3c;
        case 0x12fa70u: goto label_12fa70;
        case 0x12fad0u: goto label_12fad0;
        case 0x12fb04u: goto label_12fb04;
        case 0x12fb38u: goto label_12fb38;
        case 0x12fc60u: goto label_12fc60;
        case 0x12fc84u: goto label_12fc84;
        case 0x12fcf8u: goto label_12fcf8;
        case 0x12fd48u: goto label_12fd48;
        case 0x12fd60u: goto label_12fd60;
        case 0x12fd78u: goto label_12fd78;
        case 0x12fd90u: goto label_12fd90;
        case 0x12fda8u: goto label_12fda8;
        case 0x12fdc0u: goto label_12fdc0;
        case 0x12fdd8u: goto label_12fdd8;
        case 0x12fdf0u: goto label_12fdf0;
        case 0x12fe08u: goto label_12fe08;
        case 0x12fe20u: goto label_12fe20;
        case 0x12fe38u: goto label_12fe38;
        case 0x12fe50u: goto label_12fe50;
        case 0x12fe68u: goto label_12fe68;
        case 0x12fe80u: goto label_12fe80;
        case 0x12fe98u: goto label_12fe98;
        case 0x12feb0u: goto label_12feb0;
        case 0x12feb4u: goto label_12feb4;
        case 0x12fec4u: goto label_12fec4;
        case 0x12fed8u: goto label_12fed8;
        default: break;
    }

    ctx->pc = 0x12f118u;

    // 0x12f118: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12f118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12f11c: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x12f11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x12f120: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x12f120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x12f124: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x12f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12f128: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x12f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x12f12c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x12f12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x12f130: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x12f130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12f134: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x12f134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x12f138: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x12f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x12f13c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x12f13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x12f140: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x12f140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x12f144: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x12f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x12f148: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x12f148u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x12f14c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x12f14cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x12f150: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x12f150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x12f154: 0x8cc20154  lw          $v0, 0x154($a2)
    ctx->pc = 0x12f154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x12f158: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x12f158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x12f15c: 0x8c710048  lw          $s1, 0x48($v1)
    ctx->pc = 0x12f15cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x12f160: 0x122002e5  beqz        $s1, . + 4 + (0x2E5 << 2)
    ctx->pc = 0x12F160u;
    {
        const bool branch_taken_0x12f160 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F160u;
        // 0x12f164: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f160) {
            ctx->pc = 0x12FCF8u;
            goto label_12fcf8;
        }
    }
    ctx->pc = 0x12F168u;
    // 0x12f168: 0x10a0036a  beqz        $a1, . + 4 + (0x36A << 2)
    ctx->pc = 0x12F168u;
    {
        const bool branch_taken_0x12f168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F168u;
        // 0x12f16c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f168) {
            ctx->pc = 0x12FF14u;
            goto label_12ff14;
        }
    }
    ctx->pc = 0x12F170u;
    // 0x12f170: 0x2ca200c9  sltiu       $v0, $a1, 0xC9
    ctx->pc = 0x12f170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)201) ? 1 : 0);
    // 0x12f174: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F174u;
    {
        const bool branch_taken_0x12f174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f174) {
            ctx->pc = 0x12F178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F174u;
            // 0x12f178: 0x8e6200dc  lw          $v0, 0xDC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F188u;
            goto label_12f188;
        }
    }
    ctx->pc = 0x12F17Cu;
    // 0x12f17c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x12f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x12f180: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12f180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12f184: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x12f184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_12f188:
    // 0x12f188: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x12F188u;
    {
        const bool branch_taken_0x12f188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f188) {
            ctx->pc = 0x12F18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F188u;
            // 0x12f18c: 0x96630132  lhu         $v1, 0x132($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 306)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F224u;
            goto label_12f224;
        }
    }
    ctx->pc = 0x12F190u;
    // 0x12f190: 0x8cd00040  lw          $s0, 0x40($a2)
    ctx->pc = 0x12f190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x12f194: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12f194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f19c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12f19cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f1a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12f1a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f1a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12f1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f1a8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f1ac: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f1acu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f1b0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f1b0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f1b4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f1b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f1b8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12f1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12f1bc: 0x26670080  addiu       $a3, $s3, 0x80
    ctx->pc = 0x12f1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x12f1c0: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x12f1c0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12f1c4: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x12f1c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f1c8: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x12f1c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x12f1cc: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x12f1ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x12f1d0: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x12f1d0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x12f1d4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12f1d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12f1d8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12f1d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12f1dc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12f1dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12f1e0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12f1e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12f1e4: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x12f1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12f1e8: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x12f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x12f1ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12f1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1f4: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x12f1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f1f8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x12f1f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x12f1fc: 0xc05185a  jal         func_146168
    ctx->pc = 0x12F1FCu;
    SET_GPR_U32(ctx, 31, 0x12F204u);
    ctx->pc = 0x12F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F1FCu;
    // 0x12f200: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146168u, 0x12F1FCu, 0x12F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F204u;
label_12f204:
    // 0x12f204: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x12f204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x12f208: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x12f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x12f20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f210: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x12f210u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x2400C0u));
    // 0x12f214: 0xc0477ca  jal         func_11DF28
    ctx->pc = 0x12F214u;
    SET_GPR_U32(ctx, 31, 0x12F21Cu);
    ctx->pc = 0x12F218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F214u;
    // 0x12f218: 0x8c66000c  lw          $a2, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF28u, 0x12F214u, 0x12F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F21Cu;
label_12f21c:
    // 0x12f21c: 0xae6000dc  sw          $zero, 0xDC($s3)
    ctx->pc = 0x12f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 0));
    // 0x12f220: 0x96630132  lhu         $v1, 0x132($s3)
    ctx->pc = 0x12f220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 306)));
label_12f224:
    // 0x12f224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f228: 0x106201cf  beq         $v1, $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x12F228u;
    {
        const bool branch_taken_0x12f228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F228u;
        // 0x12f22c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f228) {
            ctx->pc = 0x12F968u;
            goto label_12f968;
        }
    }
    ctx->pc = 0x12F230u;
    // 0x12f230: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F230u;
    {
        const bool branch_taken_0x12f230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f230) {
            ctx->pc = 0x12F234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F230u;
            // 0x12f234: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F248u;
            goto label_12f248;
        }
    }
    ctx->pc = 0x12F238u;
    // 0x12f238: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F238u;
    {
        const bool branch_taken_0x12f238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F238u;
        // 0x12f23c: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f238) {
            ctx->pc = 0x12F258u;
            goto label_12f258;
        }
    }
    ctx->pc = 0x12F240u;
    // 0x12f240: 0x100002ab  b           . + 4 + (0x2AB << 2)
    ctx->pc = 0x12F240u;
    {
        const bool branch_taken_0x12f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f240) {
            ctx->pc = 0x12FCF0u;
            goto label_12fcf0;
        }
    }
    ctx->pc = 0x12F248u;
label_12f248:
    // 0x12f248: 0x106200e7  beq         $v1, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x12F248u;
    {
        const bool branch_taken_0x12f248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F248u;
        // 0x12f24c: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f248) {
            ctx->pc = 0x12F5E8u;
            goto label_12f5e8;
        }
    }
    ctx->pc = 0x12F250u;
    // 0x12f250: 0x100002a7  b           . + 4 + (0x2A7 << 2)
    ctx->pc = 0x12F250u;
    {
        const bool branch_taken_0x12f250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f250) {
            ctx->pc = 0x12FCF0u;
            goto label_12fcf0;
        }
    }
    ctx->pc = 0x12F258u;
label_12f258:
    // 0x12f258: 0x8e2302f8  lw          $v1, 0x2F8($s1)
    ctx->pc = 0x12f258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x12f25c: 0x8c700184  lw          $s0, 0x184($v1)
    ctx->pc = 0x12f25cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x12f260: 0x1200032c  beqz        $s0, . + 4 + (0x32C << 2)
    ctx->pc = 0x12F260u;
    {
        const bool branch_taken_0x12f260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F260u;
        // 0x12f264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f260) {
            ctx->pc = 0x12FF14u;
            goto label_12ff14;
        }
    }
    ctx->pc = 0x12F268u;
    // 0x12f268: 0x8e670138  lw          $a3, 0x138($s3)
    ctx->pc = 0x12f268u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
    // 0x12f26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f270: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f274: 0xc048906  jal         func_122418
    ctx->pc = 0x12F274u;
    SET_GPR_U32(ctx, 31, 0x12F27Cu);
    ctx->pc = 0x12F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F274u;
    // 0x12f278: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122418u, 0x12F274u, 0x12F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F27Cu;
label_12f27c:
    // 0x12f27c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12f27cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f280: 0x12800324  beqz        $s4, . + 4 + (0x324 << 2)
    ctx->pc = 0x12F280u;
    {
        const bool branch_taken_0x12f280 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F280u;
        // 0x12f284: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f280) {
            ctx->pc = 0x12FF14u;
            goto label_12ff14;
        }
    }
    ctx->pc = 0x12F288u;
    // 0x12f288: 0x10600322  beqz        $v1, . + 4 + (0x322 << 2)
    ctx->pc = 0x12F288u;
    {
        const bool branch_taken_0x12f288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F288u;
        // 0x12f28c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f288) {
            ctx->pc = 0x12FF14u;
            goto label_12ff14;
        }
    }
    ctx->pc = 0x12F290u;
    // 0x12f290: 0x8e620138  lw          $v0, 0x138($s3)
    ctx->pc = 0x12f290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
    // 0x12f294: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F294u;
    {
        const bool branch_taken_0x12f294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f294) {
            ctx->pc = 0x12F298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F294u;
            // 0x12f298: 0xae740138  sw          $s4, 0x138($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 312), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F29Cu;
            goto label_12f29c;
        }
    }
    ctx->pc = 0x12F29Cu;
label_12f29c:
    // 0x12f29c: 0x8e65007c  lw          $a1, 0x7C($s3)
    ctx->pc = 0x12f29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x12f2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2a4: 0x96670066  lhu         $a3, 0x66($s3)
    ctx->pc = 0x12f2a4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 102)));
    // 0x12f2a8: 0x2666006c  addiu       $a2, $s3, 0x6C
    ctx->pc = 0x12f2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x12f2ac: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x12f2acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f2b0: 0xc048c6e  jal         func_1231B8
    ctx->pc = 0x12F2B0u;
    SET_GPR_U32(ctx, 31, 0x12F2B8u);
    ctx->pc = 0x12F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2B0u;
    // 0x12f2b4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1231B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1231B8u, 0x12F2B0u, 0x12F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2B8u;
label_12f2b8:
    // 0x12f2b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f2bc: 0x50600291  beql        $v1, $zero, . + 4 + (0x291 << 2)
    ctx->pc = 0x12F2BCu;
    {
        const bool branch_taken_0x12f2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f2bc) {
            ctx->pc = 0x12F2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F2BCu;
            // 0x12f2c0: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD04u;
            goto label_12fd04;
        }
    }
    ctx->pc = 0x12F2C4u;
    // 0x12f2c4: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x12f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x12f2c8: 0x5040028e  beql        $v0, $zero, . + 4 + (0x28E << 2)
    ctx->pc = 0x12F2C8u;
    {
        const bool branch_taken_0x12f2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f2c8) {
            ctx->pc = 0x12F2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F2C8u;
            // 0x12f2cc: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD04u;
            goto label_12fd04;
        }
    }
    ctx->pc = 0x12F2D0u;
    // 0x12f2d0: 0x1060028b  beqz        $v1, . + 4 + (0x28B << 2)
    ctx->pc = 0x12F2D0u;
    {
        const bool branch_taken_0x12f2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2D0u;
        // 0x12f2d4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2d0) {
            ctx->pc = 0x12FD00u;
            goto label_12fd00;
        }
    }
    ctx->pc = 0x12F2D8u;
    // 0x12f2d8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f2dc: 0x245e0790  addiu       $fp, $v0, 0x790
    ctx->pc = 0x12f2dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x12f2e0: 0x8e7100c8  lw          $s1, 0xC8($s3)
    ctx->pc = 0x12f2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x12f2e4: 0x0  nop
    ctx->pc = 0x12f2e4u;
    // NOP
label_12f2e8:
    // 0x12f2e8: 0x26960010  addiu       $s6, $s4, 0x10
    ctx->pc = 0x12f2e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x12f2ec: 0x8e7200cc  lw          $s2, 0xCC($s3)
    ctx->pc = 0x12f2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x12f2f0: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x12F2F0u;
    {
        const bool branch_taken_0x12f2f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2F0u;
        // 0x12f2f4: 0x8e7500d0  lw          $s5, 0xD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2f0) {
            ctx->pc = 0x12F3B8u;
            goto label_12f3b8;
        }
    }
    ctx->pc = 0x12F2F8u;
    // 0x12f2f8: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F2F8u;
    SET_GPR_U32(ctx, 31, 0x12F300u);
    ctx->pc = 0x12F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2F8u;
    // 0x12f2fc: 0x26900080  addiu       $s0, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F2F8u, 0x12F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F300u;
label_12f300:
    // 0x12f300: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12f300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12f304: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f308: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f308u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f30c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f30cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f310: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12f310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12f314: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x12f314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12f318: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f31c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f31cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f320: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f320u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f324: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f328: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f32c: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F32Cu;
    SET_GPR_U32(ctx, 31, 0x12F334u);
    ctx->pc = 0x12F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F32Cu;
    // 0x12f330: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F32Cu, 0x12F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F334u;
label_12f334:
    // 0x12f334: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x12f334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12f338: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f338u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f33c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f33cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f340: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f340u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f344: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12f344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12f348: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x12f348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x12f34c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f34cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f350: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f350u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f354: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f354u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f35c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f360: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F360u;
    SET_GPR_U32(ctx, 31, 0x12F368u);
    ctx->pc = 0x12F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F360u;
    // 0x12f364: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F360u, 0x12F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F368u;
label_12f368:
    // 0x12f368: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12f368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12f36c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f36cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f370: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f370u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f374: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f374u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f378: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f37c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x12f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x12f380: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f380u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f384: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f384u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f388: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f388u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f38c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f390: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f394: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12f394u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12f398: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12f398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f39c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12f39cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f3a0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12f3a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f3a4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f3a8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f3a8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f3ac: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f3acu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f3b0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f3b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f3b4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12f3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_12f3b8:
    // 0x12f3b8: 0x12400063  beqz        $s2, . + 4 + (0x63 << 2)
    ctx->pc = 0x12F3B8u;
    {
        const bool branch_taken_0x12f3b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f3b8) {
            ctx->pc = 0x12F548u;
            goto label_12f548;
        }
    }
    ctx->pc = 0x12F3C0u;
    // 0x12f3c0: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F3C0u;
    SET_GPR_U32(ctx, 31, 0x12F3C8u);
    ctx->pc = 0x12F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F3C0u;
    // 0x12f3c4: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F3C0u, 0x12F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3C8u;
label_12f3c8:
    // 0x12f3c8: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x12f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12f3cc: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f3ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f3d0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f3d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f3d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f3d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f3d8: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12f3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12f3dc: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x12f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x12f3e0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f3e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f3e4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f3e4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f3e8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f3e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f3ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f3f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f3f4: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F3F4u;
    SET_GPR_U32(ctx, 31, 0x12F3FCu);
    ctx->pc = 0x12F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F3F4u;
    // 0x12f3f8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F3F4u, 0x12F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3FCu;
label_12f3fc:
    // 0x12f3fc: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12f400: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f400u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f404: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f404u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f408: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f408u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f40c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12f40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12f410: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x12f410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x12f414: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f414u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f418: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f418u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f41c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f41cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f424: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f428: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F428u;
    SET_GPR_U32(ctx, 31, 0x12F430u);
    ctx->pc = 0x12F42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F428u;
    // 0x12f42c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F428u, 0x12F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F430u;
label_12f430:
    // 0x12f430: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12f434: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f434u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f438: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f438u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f43c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f43cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f440: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f444: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x12f444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x12f448: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f448u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f44c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f44cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f450: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f450u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f454: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f458: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f45c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12f45cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12f460: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12f460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f464: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12f464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f468: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12f468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f46c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f470: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f470u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f474: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f474u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f478: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f478u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f47c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12f47cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12f480: 0x268700a0  addiu       $a3, $s4, 0xA0
    ctx->pc = 0x12f480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x12f484: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x12f484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x12f488: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f488u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f48c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f48cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f490: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f490u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f494: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f498: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x12f498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x12f49c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f49cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f4a0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f4a0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f4a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f4a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f4a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f4ac: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x12f4acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x12f4b0: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12f4b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12f4b4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f4b4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f4b8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f4b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f4c0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12f4c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f4c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12f4c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f4c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12f4c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f4cc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f4d0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f4d0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f4d4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f4d4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f4d8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f4d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f4dc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x12f4e0: 0x268800b0  addiu       $t0, $s4, 0xB0
    ctx->pc = 0x12f4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x12f4e4: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x12f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x12f4e8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f4e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f4ec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f4ecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f4f0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f4f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f4f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f4f8: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x12f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x12f4fc: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f4fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f500: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f500u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f504: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f504u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f50c: 0x8e46003c  lw          $a2, 0x3C($s2)
    ctx->pc = 0x12f50cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x12f510: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12f510u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12f514: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f514u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f518: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f518u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f520: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12f520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f524: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12f524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f528: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12f528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f52c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f530: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f530u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f534: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f534u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f538: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f538u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f53c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x12f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x12f540: 0x9646000c  lhu         $a2, 0xC($s2)
    ctx->pc = 0x12f540u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12f544: 0xa6c6002a  sh          $a2, 0x2A($s6)
    ctx->pc = 0x12f544u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 42), (uint16_t)GPR_U32(ctx, 6));
label_12f548:
    // 0x12f548: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x12F548u;
    {
        const bool branch_taken_0x12f548 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F548u;
        // 0x12f54c: 0x2ee200c8  sltiu       $v0, $s7, 0xC8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f548) {
            ctx->pc = 0x12F5B4u;
            goto label_12f5b4;
        }
    }
    ctx->pc = 0x12F550u;
    // 0x12f550: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12F550u;
    SET_GPR_U32(ctx, 31, 0x12F558u);
    ctx->pc = 0x12F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F550u;
    // 0x12f554: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12F550u, 0x12F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F558u;
label_12f558:
    // 0x12f558: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x12f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12f55c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f560: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f560u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f564: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f564u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f568: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f568u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f570: 0xe6c00058  swc1        $f0, 0x58($s6)
    ctx->pc = 0x12f570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 88), bits); }
    // 0x12f574: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12F574u;
    SET_GPR_U32(ctx, 31, 0x12F57Cu);
    ctx->pc = 0x12F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F574u;
    // 0x12f578: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12F574u, 0x12F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F57Cu;
label_12f57c:
    // 0x12f57c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x12f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12f580: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f584: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f584u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f588: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f588u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f58c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f58cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f594: 0xe6c0005c  swc1        $f0, 0x5C($s6)
    ctx->pc = 0x12f594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 92), bits); }
    // 0x12f598: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x12f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x12f59c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f59cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f5a0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f5a0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f5a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f5a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f5ac: 0xe6c00060  swc1        $f0, 0x60($s6)
    ctx->pc = 0x12f5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 96), bits); }
    // 0x12f5b0: 0x2ee200c8  sltiu       $v0, $s7, 0xC8
    ctx->pc = 0x12f5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_12f5b4:
    // 0x12f5b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F5B4u;
    {
        const bool branch_taken_0x12f5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f5b4) {
            ctx->pc = 0x12F5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F5B4u;
            // 0x12f5b8: 0xafd60000  sw          $s6, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F5BCu;
            goto label_12f5bc;
        }
    }
    ctx->pc = 0x12F5BCu;
label_12f5bc:
    // 0x12f5bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f5c0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12f5c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x12f5c4: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x12f5c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x12f5c8: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x12f5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12f5cc: 0x104001cc  beqz        $v0, . + 4 + (0x1CC << 2)
    ctx->pc = 0x12F5CCu;
    {
        const bool branch_taken_0x12f5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5CCu;
        // 0x12f5d0: 0x8e940004  lw          $s4, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5cc) {
            ctx->pc = 0x12FD00u;
            goto label_12fd00;
        }
    }
    ctx->pc = 0x12F5D4u;
    // 0x12f5d4: 0x5680ff44  bnel        $s4, $zero, . + 4 + (-0xBC << 2)
    ctx->pc = 0x12F5D4u;
    {
        const bool branch_taken_0x12f5d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f5d4) {
            ctx->pc = 0x12F5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F5D4u;
            // 0x12f5d8: 0x8e7100c8  lw          $s1, 0xC8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f2e8;
        }
    }
    ctx->pc = 0x12F5DCu;
    // 0x12f5dc: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x12F5DCu;
    {
        const bool branch_taken_0x12f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5DCu;
        // 0x12f5e0: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5dc) {
            ctx->pc = 0x12FD04u;
            goto label_12fd04;
        }
    }
    ctx->pc = 0x12F5E4u;
    // 0x12f5e4: 0x0  nop
    ctx->pc = 0x12f5e4u;
    // NOP
label_12f5e8:
    // 0x12f5e8: 0x8e2302f8  lw          $v1, 0x2F8($s1)
    ctx->pc = 0x12f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x12f5ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5f0: 0x8c64018c  lw          $a0, 0x18C($v1)
    ctx->pc = 0x12f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
    // 0x12f5f4: 0x10800247  beqz        $a0, . + 4 + (0x247 << 2)
    ctx->pc = 0x12F5F4u;
    {
        const bool branch_taken_0x12f5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5F4u;
        // 0x12f5f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5f4) {
            ctx->pc = 0x12FF14u;
            goto label_12ff14;
        }
    }
    ctx->pc = 0x12F5FCu;
    // 0x12f5fc: 0x8e670140  lw          $a3, 0x140($s3)
    ctx->pc = 0x12f5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x12f600: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f604: 0xc04b3f6  jal         func_12CFD8
    ctx->pc = 0x12F604u;
    SET_GPR_U32(ctx, 31, 0x12F60Cu);
    ctx->pc = 0x12F608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F604u;
    // 0x12f608: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CFD8u, 0x12F604u, 0x12F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F60Cu;
label_12f60c:
    // 0x12f60c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12f60cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f610: 0x52800241  beql        $s4, $zero, . + 4 + (0x241 << 2)
    ctx->pc = 0x12F610u;
    {
        const bool branch_taken_0x12f610 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f610) {
            ctx->pc = 0x12F614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F610u;
            // 0x12f614: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FF18u;
            goto label_12ff18;
        }
    }
    ctx->pc = 0x12F618u;
    // 0x12f618: 0x8e620140  lw          $v0, 0x140($s3)
    ctx->pc = 0x12f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x12f61c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F61Cu;
    {
        const bool branch_taken_0x12f61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f61c) {
            ctx->pc = 0x12F620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F61Cu;
            // 0x12f620: 0xae740140  sw          $s4, 0x140($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 320), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F624u;
            goto label_12f624;
        }
    }
    ctx->pc = 0x12F624u;
label_12f624:
    // 0x12f624: 0x8e65007c  lw          $a1, 0x7C($s3)
    ctx->pc = 0x12f624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x12f628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f62c: 0x96670066  lhu         $a3, 0x66($s3)
    ctx->pc = 0x12f62cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 102)));
    // 0x12f630: 0x2666006c  addiu       $a2, $s3, 0x6C
    ctx->pc = 0x12f630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x12f634: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x12f634u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f638: 0xc04b7d6  jal         func_12DF58
    ctx->pc = 0x12F638u;
    SET_GPR_U32(ctx, 31, 0x12F640u);
    ctx->pc = 0x12F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F638u;
    // 0x12f63c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF58u, 0x12F638u, 0x12F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F640u;
label_12f640:
    // 0x12f640: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12f640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f644: 0x506001af  beql        $v1, $zero, . + 4 + (0x1AF << 2)
    ctx->pc = 0x12F644u;
    {
        const bool branch_taken_0x12f644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f644) {
            ctx->pc = 0x12F648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F644u;
            // 0x12f648: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD04u;
            goto label_12fd04;
        }
    }
    ctx->pc = 0x12F64Cu;
    // 0x12f64c: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x12f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x12f650: 0x504001ac  beql        $v0, $zero, . + 4 + (0x1AC << 2)
    ctx->pc = 0x12F650u;
    {
        const bool branch_taken_0x12f650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f650) {
            ctx->pc = 0x12F654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F650u;
            // 0x12f654: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD04u;
            goto label_12fd04;
        }
    }
    ctx->pc = 0x12F658u;
    // 0x12f658: 0x106001a9  beqz        $v1, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x12F658u;
    {
        const bool branch_taken_0x12f658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F658u;
        // 0x12f65c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f658) {
            ctx->pc = 0x12FD00u;
            goto label_12fd00;
        }
    }
    ctx->pc = 0x12F660u;
    // 0x12f660: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f664: 0x24560790  addiu       $s6, $v0, 0x790
    ctx->pc = 0x12f664u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x12f668: 0x8e7100c8  lw          $s1, 0xC8($s3)
    ctx->pc = 0x12f668u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x12f66c: 0x0  nop
    ctx->pc = 0x12f66cu;
    // NOP
label_12f670:
    // 0x12f670: 0x8e7200cc  lw          $s2, 0xCC($s3)
    ctx->pc = 0x12f670u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x12f674: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x12F674u;
    {
        const bool branch_taken_0x12f674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F674u;
        // 0x12f678: 0x8e7500d0  lw          $s5, 0xD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f674) {
            ctx->pc = 0x12F73Cu;
            goto label_12f73c;
        }
    }
    ctx->pc = 0x12F67Cu;
    // 0x12f67c: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F67Cu;
    SET_GPR_U32(ctx, 31, 0x12F684u);
    ctx->pc = 0x12F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F67Cu;
    // 0x12f680: 0x26900070  addiu       $s0, $s4, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F67Cu, 0x12F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F684u;
label_12f684:
    // 0x12f684: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12f684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12f688: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f688u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f68c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f68cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f690: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f690u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f694: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12f694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12f698: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x12f698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12f69c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f69cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f6a0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f6a0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f6a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f6a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f6a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f6ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f6acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f6b0: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F6B0u;
    SET_GPR_U32(ctx, 31, 0x12F6B8u);
    ctx->pc = 0x12F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F6B0u;
    // 0x12f6b4: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F6B0u, 0x12F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6B8u;
label_12f6b8:
    // 0x12f6b8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x12f6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12f6bc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f6bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f6c0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f6c0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f6c4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f6c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f6c8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12f6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12f6cc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x12f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x12f6d0: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f6d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f6d4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f6d4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f6d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f6d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f6dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f6e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f6e4: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F6E4u;
    SET_GPR_U32(ctx, 31, 0x12F6ECu);
    ctx->pc = 0x12F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F6E4u;
    // 0x12f6e8: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F6E4u, 0x12F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6ECu;
label_12f6ec:
    // 0x12f6ec: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12f6f0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f6f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f6f4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f6f4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f6f8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f6f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f6fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f700: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x12f700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x12f704: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f704u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f708: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f708u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f70c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f70cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f714: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f718: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12f718u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12f71c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12f71cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f720: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12f720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f724: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12f724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f728: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f72c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f72cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f730: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f730u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f734: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f734u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f738: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12f738u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_12f73c:
    // 0x12f73c: 0x12400063  beqz        $s2, . + 4 + (0x63 << 2)
    ctx->pc = 0x12F73Cu;
    {
        const bool branch_taken_0x12f73c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f73c) {
            ctx->pc = 0x12F8CCu;
            goto label_12f8cc;
        }
    }
    ctx->pc = 0x12F744u;
    // 0x12f744: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F744u;
    SET_GPR_U32(ctx, 31, 0x12F74Cu);
    ctx->pc = 0x12F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F744u;
    // 0x12f748: 0x26900080  addiu       $s0, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F744u, 0x12F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F74Cu;
label_12f74c:
    // 0x12f74c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x12f74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12f750: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f750u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f754: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f754u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f758: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f758u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f75c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12f75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12f760: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x12f760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x12f764: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f768: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f768u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f76c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f76cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f770: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f774: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f778: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F778u;
    SET_GPR_U32(ctx, 31, 0x12F780u);
    ctx->pc = 0x12F77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F778u;
    // 0x12f77c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F778u, 0x12F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F780u;
label_12f780:
    // 0x12f780: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12f780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12f784: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f784u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f788: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f788u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f78c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f78cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f790: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12f790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12f794: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x12f794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x12f798: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f79c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f79cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f7a0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f7a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f7a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f7a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f7ac: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12F7ACu;
    SET_GPR_U32(ctx, 31, 0x12F7B4u);
    ctx->pc = 0x12F7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F7ACu;
    // 0x12f7b0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12F7ACu, 0x12F7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7B4u;
label_12f7b4:
    // 0x12f7b4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12f7b8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f7b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f7bc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f7bcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f7c0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f7c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f7c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f7c8: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x12f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x12f7cc: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f7ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f7d0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f7d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f7d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f7d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f7d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f7dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12f7dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f7e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12f7e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12f7e4: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12f7e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f7e8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12f7e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f7ec: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12f7ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f7f0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f7f4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f7f4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f7f8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f7f8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f7fc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f7fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f800: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12f800u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12f804: 0x26870090  addiu       $a3, $s4, 0x90
    ctx->pc = 0x12f804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x12f808: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x12f808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x12f80c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f80cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f810: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f810u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f814: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f814u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f818: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f81c: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x12f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x12f820: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f824: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f824u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f828: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f828u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f82c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f830: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x12f830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x12f834: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12f834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12f838: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f838u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f83c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f83cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f844: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12f844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f848: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12f848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f84c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12f84cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f850: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f854: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f854u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f858: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f858u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f85c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f85cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f860: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12f860u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x12f864: 0x268800a0  addiu       $t0, $s4, 0xA0
    ctx->pc = 0x12f864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x12f868: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x12f868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x12f86c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f86cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f870: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f870u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f874: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f874u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f878: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f87c: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x12f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x12f880: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12f880u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f884: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f884u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f888: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f888u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f88c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f890: 0x8e46003c  lw          $a2, 0x3C($s2)
    ctx->pc = 0x12f890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x12f894: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12f894u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12f898: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f898u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f89c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f89cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f8a4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12f8a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f8a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12f8a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f8ac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12f8acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f8b0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f8b4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f8b4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f8b8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f8b8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f8bc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f8bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f8c0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x12f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x12f8c4: 0x9646000c  lhu         $a2, 0xC($s2)
    ctx->pc = 0x12f8c4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12f8c8: 0xa686002a  sh          $a2, 0x2A($s4)
    ctx->pc = 0x12f8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 6));
label_12f8cc:
    // 0x12f8cc: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x12F8CCu;
    {
        const bool branch_taken_0x12f8cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8CCu;
        // 0x12f8d0: 0x2ee200c8  sltiu       $v0, $s7, 0xC8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8cc) {
            ctx->pc = 0x12F938u;
            goto label_12f938;
        }
    }
    ctx->pc = 0x12F8D4u;
    // 0x12f8d4: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12F8D4u;
    SET_GPR_U32(ctx, 31, 0x12F8DCu);
    ctx->pc = 0x12F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F8D4u;
    // 0x12f8d8: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12F8D4u, 0x12F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8DCu;
label_12f8dc:
    // 0x12f8dc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x12f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12f8e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f8e4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f8e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f8e8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f8e8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f8ec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f8ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f8f4: 0xe6800058  swc1        $f0, 0x58($s4)
    ctx->pc = 0x12f8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 88), bits); }
    // 0x12f8f8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12F8F8u;
    SET_GPR_U32(ctx, 31, 0x12F900u);
    ctx->pc = 0x12F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F8F8u;
    // 0x12f8fc: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12F8F8u, 0x12F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F900u;
label_12f900:
    // 0x12f900: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x12f900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12f904: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f908: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f908u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f90c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f90cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f910: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f910u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f918: 0xe680005c  swc1        $f0, 0x5C($s4)
    ctx->pc = 0x12f918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 92), bits); }
    // 0x12f91c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x12f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x12f920: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12f920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f924: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12f924u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12f928: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12f928u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12f92c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f930: 0xe6800060  swc1        $f0, 0x60($s4)
    ctx->pc = 0x12f930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 96), bits); }
    // 0x12f934: 0x2ee200c8  sltiu       $v0, $s7, 0xC8
    ctx->pc = 0x12f934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_12f938:
    // 0x12f938: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F938u;
    {
        const bool branch_taken_0x12f938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f938) {
            ctx->pc = 0x12F93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F938u;
            // 0x12f93c: 0xaed40000  sw          $s4, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F940u;
            goto label_12f940;
        }
    }
    ctx->pc = 0x12F940u;
label_12f940:
    // 0x12f940: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f944: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12f944u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x12f948: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x12f948u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x12f94c: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x12f94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12f950: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x12F950u;
    {
        const bool branch_taken_0x12f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F950u;
        // 0x12f954: 0x8e9400c4  lw          $s4, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f950) {
            ctx->pc = 0x12FD00u;
            goto label_12fd00;
        }
    }
    ctx->pc = 0x12F958u;
    // 0x12f958: 0x5680ff45  bnel        $s4, $zero, . + 4 + (-0xBB << 2)
    ctx->pc = 0x12F958u;
    {
        const bool branch_taken_0x12f958 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f958) {
            ctx->pc = 0x12F95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F958u;
            // 0x12f95c: 0x8e7100c8  lw          $s1, 0xC8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f670;
        }
    }
    ctx->pc = 0x12F960u;
    // 0x12f960: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x12F960u;
    {
        const bool branch_taken_0x12f960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F960u;
        // 0x12f964: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f960) {
            ctx->pc = 0x12FD04u;
            goto label_12fd04;
        }
    }
    ctx->pc = 0x12F968u;
label_12f968:
    // 0x12f968: 0x8e2302f8  lw          $v1, 0x2F8($s1)
    ctx->pc = 0x12f968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x12f96c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f970: 0x8c640188  lw          $a0, 0x188($v1)
    ctx->pc = 0x12f970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x12f974: 0x10800167  beqz        $a0, . + 4 + (0x167 << 2)
    ctx->pc = 0x12F974u;
    {
        const bool branch_taken_0x12f974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F974u;
        // 0x12f978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f974) {
            ctx->pc = 0x12FF14u;
            goto label_12ff14;
        }
    }
    ctx->pc = 0x12F97Cu;
    // 0x12f97c: 0x8e67013c  lw          $a3, 0x13C($s3)
    ctx->pc = 0x12f97cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
    // 0x12f980: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f984: 0xc049060  jal         func_124180
    ctx->pc = 0x12F984u;
    SET_GPR_U32(ctx, 31, 0x12F98Cu);
    ctx->pc = 0x12F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F984u;
    // 0x12f988: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124180u, 0x12F984u, 0x12F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F98Cu;
label_12f98c:
    // 0x12f98c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12f98cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f990: 0x52800161  beql        $s4, $zero, . + 4 + (0x161 << 2)
    ctx->pc = 0x12F990u;
    {
        const bool branch_taken_0x12f990 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f990) {
            ctx->pc = 0x12F994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F990u;
            // 0x12f994: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FF18u;
            goto label_12ff18;
        }
    }
    ctx->pc = 0x12F998u;
    // 0x12f998: 0x8e62013c  lw          $v0, 0x13C($s3)
    ctx->pc = 0x12f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
    // 0x12f99c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F99Cu;
    {
        const bool branch_taken_0x12f99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f99c) {
            ctx->pc = 0x12F9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F99Cu;
            // 0x12f9a0: 0xae74013c  sw          $s4, 0x13C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 316), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F9A4u;
            goto label_12f9a4;
        }
    }
    ctx->pc = 0x12F9A4u;
label_12f9a4:
    // 0x12f9a4: 0x8e65007c  lw          $a1, 0x7C($s3)
    ctx->pc = 0x12f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x12f9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9ac: 0x96670066  lhu         $a3, 0x66($s3)
    ctx->pc = 0x12f9acu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 102)));
    // 0x12f9b0: 0x2666006c  addiu       $a2, $s3, 0x6C
    ctx->pc = 0x12f9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x12f9b4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x12f9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f9b8: 0xc04afb0  jal         func_12BEC0
    ctx->pc = 0x12F9B8u;
    SET_GPR_U32(ctx, 31, 0x12F9C0u);
    ctx->pc = 0x12F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F9B8u;
    // 0x12f9bc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BEC0u, 0x12F9B8u, 0x12F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9C0u;
label_12f9c0:
    // 0x12f9c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f9c4: 0x506000cf  beql        $v1, $zero, . + 4 + (0xCF << 2)
    ctx->pc = 0x12F9C4u;
    {
        const bool branch_taken_0x12f9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9c4) {
            ctx->pc = 0x12F9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F9C4u;
            // 0x12f9c8: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD04u;
            goto label_12fd04;
        }
    }
    ctx->pc = 0x12F9CCu;
    // 0x12f9cc: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x12f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x12f9d0: 0x504000cc  beql        $v0, $zero, . + 4 + (0xCC << 2)
    ctx->pc = 0x12F9D0u;
    {
        const bool branch_taken_0x12f9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9d0) {
            ctx->pc = 0x12F9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F9D0u;
            // 0x12f9d4: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD04u;
            goto label_12fd04;
        }
    }
    ctx->pc = 0x12F9D8u;
    // 0x12f9d8: 0x106000c9  beqz        $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x12F9D8u;
    {
        const bool branch_taken_0x12f9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9D8u;
        // 0x12f9dc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9d8) {
            ctx->pc = 0x12FD00u;
            goto label_12fd00;
        }
    }
    ctx->pc = 0x12F9E0u;
    // 0x12f9e0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f9e4: 0x245e0790  addiu       $fp, $v0, 0x790
    ctx->pc = 0x12f9e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x12f9e8: 0x8e7100c8  lw          $s1, 0xC8($s3)
    ctx->pc = 0x12f9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x12f9ec: 0x0  nop
    ctx->pc = 0x12f9ecu;
    // NOP
label_12f9f0:
    // 0x12f9f0: 0x26960010  addiu       $s6, $s4, 0x10
    ctx->pc = 0x12f9f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x12f9f4: 0x8e7200cc  lw          $s2, 0xCC($s3)
    ctx->pc = 0x12f9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x12f9f8: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x12F9F8u;
    {
        const bool branch_taken_0x12f9f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9F8u;
        // 0x12f9fc: 0x8e7500d0  lw          $s5, 0xD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9f8) {
            ctx->pc = 0x12FAC0u;
            goto label_12fac0;
        }
    }
    ctx->pc = 0x12FA00u;
    // 0x12fa00: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FA00u;
    SET_GPR_U32(ctx, 31, 0x12FA08u);
    ctx->pc = 0x12FA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA00u;
    // 0x12fa04: 0x26900080  addiu       $s0, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FA00u, 0x12FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA08u;
label_12fa08:
    // 0x12fa08: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12fa0c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fa0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fa10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa18: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12fa18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12fa1c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x12fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12fa20: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fa20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fa24: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa24u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa28: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fa2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fa30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fa30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fa34: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FA34u;
    SET_GPR_U32(ctx, 31, 0x12FA3Cu);
    ctx->pc = 0x12FA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA34u;
    // 0x12fa38: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FA34u, 0x12FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA3Cu;
label_12fa3c:
    // 0x12fa3c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x12fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12fa40: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fa40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fa44: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa44u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa48: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa4c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12fa4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12fa50: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x12fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x12fa54: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fa54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fa58: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa58u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa5c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fa60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fa64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fa64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fa68: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FA68u;
    SET_GPR_U32(ctx, 31, 0x12FA70u);
    ctx->pc = 0x12FA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA68u;
    // 0x12fa6c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FA68u, 0x12FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA70u;
label_12fa70:
    // 0x12fa70: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12fa74: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fa74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fa78: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa78u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa7c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12fa80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12fa84: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x12fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x12fa88: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fa88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fa8c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fa8cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fa90: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fa90u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fa94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fa94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fa98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fa98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fa9c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12fa9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12faa0: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12faa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12faa4: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12faa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12faa8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12faa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12faac: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12faacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12fab0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12fab0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12fab4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12fab4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12fab8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12fab8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12fabc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12fabcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_12fac0:
    // 0x12fac0: 0x12400063  beqz        $s2, . + 4 + (0x63 << 2)
    ctx->pc = 0x12FAC0u;
    {
        const bool branch_taken_0x12fac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fac0) {
            ctx->pc = 0x12FC50u;
            goto label_12fc50;
        }
    }
    ctx->pc = 0x12FAC8u;
    // 0x12fac8: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FAC8u;
    SET_GPR_U32(ctx, 31, 0x12FAD0u);
    ctx->pc = 0x12FACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FAC8u;
    // 0x12facc: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FAC8u, 0x12FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAD0u;
label_12fad0:
    // 0x12fad0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x12fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12fad4: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fad8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fad8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fadc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fadcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fae0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x12fae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12fae4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x12fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x12fae8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12faec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12faecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12faf0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12faf0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12faf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12faf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12faf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12faf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fafc: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FAFCu;
    SET_GPR_U32(ctx, 31, 0x12FB04u);
    ctx->pc = 0x12FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FAFCu;
    // 0x12fb00: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FAFCu, 0x12FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB04u;
label_12fb04:
    // 0x12fb04: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12fb08: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fb08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fb0c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fb0cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fb10: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fb10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fb14: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12fb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12fb18: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x12fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x12fb1c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fb1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fb20: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fb20u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fb24: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fb24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fb28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fb2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fb2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fb30: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x12FB30u;
    SET_GPR_U32(ctx, 31, 0x12FB38u);
    ctx->pc = 0x12FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB30u;
    // 0x12fb34: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x12FB30u, 0x12FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB38u;
label_12fb38:
    // 0x12fb38: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12fb3c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fb3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fb40: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fb40u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fb44: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fb44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fb48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12fb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12fb4c: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x12fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x12fb50: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fb50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fb54: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fb54u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fb58: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fb58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fb5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fb5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fb60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fb60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fb64: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12fb64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12fb68: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x12fb68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12fb6c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x12fb6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12fb70: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12fb70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12fb74: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12fb74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12fb78: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12fb78u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12fb7c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12fb7cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12fb80: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12fb80u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12fb84: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x12fb84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x12fb88: 0x268700a0  addiu       $a3, $s4, 0xA0
    ctx->pc = 0x12fb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x12fb8c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x12fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x12fb90: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fb90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fb94: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fb94u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fb98: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fb98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fb9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12fb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12fba0: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x12fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x12fba4: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fba4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fba8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fba8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fbac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fbacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fbb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fbb4: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x12fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x12fbb8: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12fbb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12fbbc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fbbcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fbc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fbc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fbc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fbc8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12fbc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12fbcc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12fbccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12fbd0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12fbd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12fbd4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12fbd8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12fbd8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12fbdc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12fbdcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12fbe0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12fbe0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12fbe4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12fbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x12fbe8: 0x268800b0  addiu       $t0, $s4, 0xB0
    ctx->pc = 0x12fbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x12fbec: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x12fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x12fbf0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fbf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fbf4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fbf4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fbf8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fbf8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fbfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12fbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12fc00: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x12fc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x12fc04: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x12fc04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12fc08: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fc08u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fc0c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fc0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fc10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fc10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fc14: 0x8e46003c  lw          $a2, 0x3C($s2)
    ctx->pc = 0x12fc14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x12fc18: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x12fc18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x12fc1c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fc1cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fc20: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fc20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fc24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fc28: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x12fc28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12fc2c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12fc2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12fc30: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12fc30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12fc34: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12fc38: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12fc38u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12fc3c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12fc3cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12fc40: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12fc40u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12fc44: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x12fc44u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x12fc48: 0x9646000c  lhu         $a2, 0xC($s2)
    ctx->pc = 0x12fc48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12fc4c: 0xa6c6002a  sh          $a2, 0x2A($s6)
    ctx->pc = 0x12fc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 42), (uint16_t)GPR_U32(ctx, 6));
label_12fc50:
    // 0x12fc50: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x12FC50u;
    {
        const bool branch_taken_0x12fc50 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC50u;
        // 0x12fc54: 0x2ee200c8  sltiu       $v0, $s7, 0xC8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc50) {
            ctx->pc = 0x12FCBCu;
            goto label_12fcbc;
        }
    }
    ctx->pc = 0x12FC58u;
    // 0x12fc58: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12FC58u;
    SET_GPR_U32(ctx, 31, 0x12FC60u);
    ctx->pc = 0x12FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC58u;
    // 0x12fc5c: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12FC58u, 0x12FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC60u;
label_12fc60:
    // 0x12fc60: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x12fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12fc64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fc68: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fc68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fc6c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fc6cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fc70: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fc70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fc74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fc78: 0xe6c00058  swc1        $f0, 0x58($s6)
    ctx->pc = 0x12fc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 88), bits); }
    // 0x12fc7c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12FC7Cu;
    SET_GPR_U32(ctx, 31, 0x12FC84u);
    ctx->pc = 0x12FC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC7Cu;
    // 0x12fc80: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12FC7Cu, 0x12FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC84u;
label_12fc84:
    // 0x12fc84: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x12fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12fc88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fc8c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fc8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fc90: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fc90u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fc94: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fc94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fc98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fc9c: 0xe6c0005c  swc1        $f0, 0x5C($s6)
    ctx->pc = 0x12fc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 92), bits); }
    // 0x12fca0: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x12fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x12fca4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12fca4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12fca8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12fca8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12fcac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12fcacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12fcb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fcb4: 0xe6c00060  swc1        $f0, 0x60($s6)
    ctx->pc = 0x12fcb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 96), bits); }
    // 0x12fcb8: 0x2ee200c8  sltiu       $v0, $s7, 0xC8
    ctx->pc = 0x12fcb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
label_12fcbc:
    // 0x12fcbc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12FCBCu;
    {
        const bool branch_taken_0x12fcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fcbc) {
            ctx->pc = 0x12FCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FCBCu;
            // 0x12fcc0: 0xafd60000  sw          $s6, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FCC4u;
            goto label_12fcc4;
        }
    }
    ctx->pc = 0x12FCC4u;
label_12fcc4:
    // 0x12fcc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fcc8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12fcc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x12fccc: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x12fcccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x12fcd0: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x12fcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12fcd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12FCD4u;
    {
        const bool branch_taken_0x12fcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCD4u;
        // 0x12fcd8: 0x8e940004  lw          $s4, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcd4) {
            ctx->pc = 0x12FD00u;
            goto label_12fd00;
        }
    }
    ctx->pc = 0x12FCDCu;
    // 0x12fcdc: 0x5680ff44  bnel        $s4, $zero, . + 4 + (-0xBC << 2)
    ctx->pc = 0x12FCDCu;
    {
        const bool branch_taken_0x12fcdc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fcdc) {
            ctx->pc = 0x12FCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FCDCu;
            // 0x12fce0: 0x8e7100c8  lw          $s1, 0xC8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f9f0;
        }
    }
    ctx->pc = 0x12FCE4u;
    // 0x12fce4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FCE4u;
    {
        const bool branch_taken_0x12fce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCE4u;
        // 0x12fce8: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fce4) {
            ctx->pc = 0x12FD04u;
            goto label_12fd04;
        }
    }
    ctx->pc = 0x12FCECu;
    // 0x12fcec: 0x0  nop
    ctx->pc = 0x12fcecu;
    // NOP
label_12fcf0:
    // 0x12fcf0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x12FCF0u;
    SET_GPR_U32(ctx, 31, 0x12FCF8u);
    ctx->pc = 0x12FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCF0u;
    // 0x12fcf4: 0x24846068  addiu       $a0, $a0, 0x6068 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x12FCF0u, 0x12FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCF8u;
label_12fcf8:
    // 0x12fcf8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x12FCF8u;
    {
        const bool branch_taken_0x12fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCF8u;
        // 0x12fcfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcf8) {
            ctx->pc = 0x12FF14u;
            goto label_12ff14;
        }
    }
    ctx->pc = 0x12FD00u;
label_12fd00:
    // 0x12fd00: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x12fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_12fd04:
    // 0x12fd04: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x12FD04u;
    {
        const bool branch_taken_0x12fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD04u;
        // 0x12fd08: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd04) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FD0Cu;
    // 0x12fd0c: 0x8e630108  lw          $v1, 0x108($s3)
    ctx->pc = 0x12fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
    // 0x12fd10: 0x4600068  bltz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x12FD10u;
    {
        const bool branch_taken_0x12fd10 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD10u;
        // 0x12fd14: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd10) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FD18u;
    // 0x12fd18: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x12FD18u;
    {
        const bool branch_taken_0x12fd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD18u;
        // 0x12fd1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd18) {
            ctx->pc = 0x12FEB8u;
            goto label_12feb8;
        }
    }
    ctx->pc = 0x12FD20u;
    // 0x12fd20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12fd24: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x12fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x12fd28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fd2c: 0x8c6360a0  lw          $v1, 0x60A0($v1)
    ctx->pc = 0x12fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24736)));
    // 0x12fd30: 0x600008  jr          $v1
    ctx->pc = 0x12FD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FD38u: goto label_12fd38;
            case 0x12FD50u: goto label_12fd50;
            case 0x12FD68u: goto label_12fd68;
            case 0x12FD80u: goto label_12fd80;
            case 0x12FD98u: goto label_12fd98;
            case 0x12FDB0u: goto label_12fdb0;
            case 0x12FDC8u: goto label_12fdc8;
            case 0x12FDE0u: goto label_12fde0;
            case 0x12FDF8u: goto label_12fdf8;
            case 0x12FE10u: goto label_12fe10;
            case 0x12FE28u: goto label_12fe28;
            case 0x12FE40u: goto label_12fe40;
            case 0x12FE58u: goto label_12fe58;
            case 0x12FE70u: goto label_12fe70;
            case 0x12FE88u: goto label_12fe88;
            case 0x12FEA0u: goto label_12fea0;
            case 0x12FEB0u: goto label_12feb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FD30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12FD38u;
label_12fd38:
    // 0x12fd38: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fd3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fd3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd40: 0xc047be4  jal         func_11EF90
    ctx->pc = 0x12FD40u;
    SET_GPR_U32(ctx, 31, 0x12FD48u);
    ctx->pc = 0x12FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD40u;
    // 0x12fd44: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EF90u, 0x12FD40u, 0x12FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD48u;
label_12fd48:
    // 0x12fd48: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x12FD48u;
    {
        const bool branch_taken_0x12fd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD48u;
        // 0x12fd4c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd48) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FD50u;
label_12fd50:
    // 0x12fd50: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fd54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd58: 0xc047cbc  jal         func_11F2F0
    ctx->pc = 0x12FD58u;
    SET_GPR_U32(ctx, 31, 0x12FD60u);
    ctx->pc = 0x12FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD58u;
    // 0x12fd5c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F2F0u, 0x12FD58u, 0x12FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD60u;
label_12fd60:
    // 0x12fd60: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x12FD60u;
    {
        const bool branch_taken_0x12fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD60u;
        // 0x12fd64: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd60) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FD68u;
label_12fd68:
    // 0x12fd68: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fd6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd70: 0xc047cf4  jal         func_11F3D0
    ctx->pc = 0x12FD70u;
    SET_GPR_U32(ctx, 31, 0x12FD78u);
    ctx->pc = 0x12FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD70u;
    // 0x12fd74: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3D0u, 0x12FD70u, 0x12FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD78u;
label_12fd78:
    // 0x12fd78: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x12FD78u;
    {
        const bool branch_taken_0x12fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD78u;
        // 0x12fd7c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd78) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FD80u;
label_12fd80:
    // 0x12fd80: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fd84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fd84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd88: 0xc047dca  jal         func_11F728
    ctx->pc = 0x12FD88u;
    SET_GPR_U32(ctx, 31, 0x12FD90u);
    ctx->pc = 0x12FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD88u;
    // 0x12fd8c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F728u, 0x12FD88u, 0x12FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD90u;
label_12fd90:
    // 0x12fd90: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x12FD90u;
    {
        const bool branch_taken_0x12fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD90u;
        // 0x12fd94: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd90) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FD98u;
label_12fd98:
    // 0x12fd98: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fd9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fda0: 0xc047e50  jal         func_11F940
    ctx->pc = 0x12FDA0u;
    SET_GPR_U32(ctx, 31, 0x12FDA8u);
    ctx->pc = 0x12FDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDA0u;
    // 0x12fda4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F940u, 0x12FDA0u, 0x12FDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDA8u;
label_12fda8:
    // 0x12fda8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x12FDA8u;
    {
        const bool branch_taken_0x12fda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDA8u;
        // 0x12fdac: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fda8) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FDB0u;
label_12fdb0:
    // 0x12fdb0: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fdb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fdb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdb8: 0xc047f0e  jal         func_11FC38
    ctx->pc = 0x12FDB8u;
    SET_GPR_U32(ctx, 31, 0x12FDC0u);
    ctx->pc = 0x12FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDB8u;
    // 0x12fdbc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FC38u, 0x12FDB8u, 0x12FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDC0u;
label_12fdc0:
    // 0x12fdc0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x12FDC0u;
    {
        const bool branch_taken_0x12fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDC0u;
        // 0x12fdc4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdc0) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FDC8u;
label_12fdc8:
    // 0x12fdc8: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fdcc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fdccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdd0: 0xc047f6a  jal         func_11FDA8
    ctx->pc = 0x12FDD0u;
    SET_GPR_U32(ctx, 31, 0x12FDD8u);
    ctx->pc = 0x12FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDD0u;
    // 0x12fdd4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDA8u, 0x12FDD0u, 0x12FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDD8u;
label_12fdd8:
    // 0x12fdd8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x12FDD8u;
    {
        const bool branch_taken_0x12fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDD8u;
        // 0x12fddc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdd8) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FDE0u;
label_12fde0:
    // 0x12fde0: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fde4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fde4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fde8: 0xc04804c  jal         func_120130
    ctx->pc = 0x12FDE8u;
    SET_GPR_U32(ctx, 31, 0x12FDF0u);
    ctx->pc = 0x12FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDE8u;
    // 0x12fdec: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120130u, 0x12FDE8u, 0x12FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDF0u;
label_12fdf0:
    // 0x12fdf0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x12FDF0u;
    {
        const bool branch_taken_0x12fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDF0u;
        // 0x12fdf4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdf0) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FDF8u;
label_12fdf8:
    // 0x12fdf8: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fdfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fdfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe00: 0xc04813e  jal         func_1204F8
    ctx->pc = 0x12FE00u;
    SET_GPR_U32(ctx, 31, 0x12FE08u);
    ctx->pc = 0x12FE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE00u;
    // 0x12fe04: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1204F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1204F8u, 0x12FE00u, 0x12FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE08u;
label_12fe08:
    // 0x12fe08: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x12FE08u;
    {
        const bool branch_taken_0x12fe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE08u;
        // 0x12fe0c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe08) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FE10u;
label_12fe10:
    // 0x12fe10: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe14: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe18: 0xc04853e  jal         func_1214F8
    ctx->pc = 0x12FE18u;
    SET_GPR_U32(ctx, 31, 0x12FE20u);
    ctx->pc = 0x12FE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE18u;
    // 0x12fe1c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1214F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1214F8u, 0x12FE18u, 0x12FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE20u;
label_12fe20:
    // 0x12fe20: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x12FE20u;
    {
        const bool branch_taken_0x12fe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE20u;
        // 0x12fe24: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe20) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FE28u;
label_12fe28:
    // 0x12fe28: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe30: 0xc04820e  jal         func_120838
    ctx->pc = 0x12FE30u;
    SET_GPR_U32(ctx, 31, 0x12FE38u);
    ctx->pc = 0x12FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE30u;
    // 0x12fe34: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120838u, 0x12FE30u, 0x12FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE38u;
label_12fe38:
    // 0x12fe38: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x12FE38u;
    {
        const bool branch_taken_0x12fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE38u;
        // 0x12fe3c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe38) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FE40u;
label_12fe40:
    // 0x12fe40: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe48: 0xc0482c6  jal         func_120B18
    ctx->pc = 0x12FE48u;
    SET_GPR_U32(ctx, 31, 0x12FE50u);
    ctx->pc = 0x12FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE48u;
    // 0x12fe4c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120B18u, 0x12FE48u, 0x12FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE50u;
label_12fe50:
    // 0x12fe50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12FE50u;
    {
        const bool branch_taken_0x12fe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE50u;
        // 0x12fe54: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe50) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FE58u;
label_12fe58:
    // 0x12fe58: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe60: 0xc048550  jal         func_121540
    ctx->pc = 0x12FE60u;
    SET_GPR_U32(ctx, 31, 0x12FE68u);
    ctx->pc = 0x12FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE60u;
    // 0x12fe64: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121540u, 0x12FE60u, 0x12FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE68u;
label_12fe68:
    // 0x12fe68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12FE68u;
    {
        const bool branch_taken_0x12fe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE68u;
        // 0x12fe6c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe68) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FE70u;
label_12fe70:
    // 0x12fe70: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe78: 0xc04838e  jal         func_120E38
    ctx->pc = 0x12FE78u;
    SET_GPR_U32(ctx, 31, 0x12FE80u);
    ctx->pc = 0x12FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE78u;
    // 0x12fe7c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E38u, 0x12FE78u, 0x12FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE80u;
label_12fe80:
    // 0x12fe80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12FE80u;
    {
        const bool branch_taken_0x12fe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE80u;
        // 0x12fe84: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe80) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FE88u;
label_12fe88:
    // 0x12fe88: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe90: 0xc048366  jal         func_120D98
    ctx->pc = 0x12FE90u;
    SET_GPR_U32(ctx, 31, 0x12FE98u);
    ctx->pc = 0x12FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE90u;
    // 0x12fe94: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120D98u, 0x12FE90u, 0x12FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE98u;
label_12fe98:
    // 0x12fe98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12FE98u;
    {
        const bool branch_taken_0x12fe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE98u;
        // 0x12fe9c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe98) {
            ctx->pc = 0x12FEB4u;
            goto label_12feb4;
        }
    }
    ctx->pc = 0x12FEA0u;
label_12fea0:
    // 0x12fea0: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fea4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fea8: 0xc0483ee  jal         func_120FB8
    ctx->pc = 0x12FEA8u;
    SET_GPR_U32(ctx, 31, 0x12FEB0u);
    ctx->pc = 0x12FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FEA8u;
    // 0x12feac: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120FB8u, 0x12FEA8u, 0x12FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEB0u;
label_12feb0:
    // 0x12feb0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12feb4:
    // 0x12feb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12feb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12feb8:
    // 0x12feb8: 0x96650132  lhu         $a1, 0x132($s3)
    ctx->pc = 0x12feb8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 306)));
    // 0x12febc: 0xc047b7c  jal         func_11EDF0
    ctx->pc = 0x12FEBCu;
    SET_GPR_U32(ctx, 31, 0x12FEC4u);
    ctx->pc = 0x12FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FEBCu;
    // 0x12fec0: 0x26670010  addiu       $a3, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EDF0u, 0x12FEBCu, 0x12FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEC4u;
label_12fec4:
    // 0x12fec4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12fec8: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x12fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x12fecc: 0x240300c7  addiu       $v1, $zero, 0xC7
    ctx->pc = 0x12feccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x12fed0: 0x2442031c  addiu       $v0, $v0, 0x31C
    ctx->pc = 0x12fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 796));
    // 0x12fed4: 0x0  nop
    ctx->pc = 0x12fed4u;
    // NOP
label_12fed8:
    // 0x12fed8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12fedc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12fee0: 0x0  nop
    ctx->pc = 0x12fee0u;
    // NOP
    // 0x12fee4: 0x0  nop
    ctx->pc = 0x12fee4u;
    // NOP
    // 0x12fee8: 0x0  nop
    ctx->pc = 0x12fee8u;
    // NOP
    // 0x12feec: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12FEECu;
    {
        const bool branch_taken_0x12feec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEECu;
        // 0x12fef0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12feec) {
            ctx->pc = 0x12FED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fed8;
        }
    }
    ctx->pc = 0x12FEF4u;
    // 0x12fef4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fefc: 0x8e6300c0  lw          $v1, 0xC0($s3)
    ctx->pc = 0x12fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x12ff00: 0x8e64011c  lw          $a0, 0x11C($s3)
    ctx->pc = 0x12ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x12ff04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12ff08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12ff08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12ff0c: 0xae6300c0  sw          $v1, 0xC0($s3)
    ctx->pc = 0x12ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 3));
    // 0x12ff10: 0xae64011c  sw          $a0, 0x11C($s3)
    ctx->pc = 0x12ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 4));
label_12ff14:
    // 0x12ff14: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x12ff14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12ff18:
    // 0x12ff18: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x12ff18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ff1c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x12ff1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ff20: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x12ff20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12ff24: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12ff24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ff28: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x12ff28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ff2c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x12ff2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ff30: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x12ff30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12ff34: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x12ff34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ff38: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x12ff38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ff3c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x12ff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12ff40: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x12ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12ff44: 0x3e00008  jr          $ra
    ctx->pc = 0x12FF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF44u;
        // 0x12ff48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FF4Cu;
}
