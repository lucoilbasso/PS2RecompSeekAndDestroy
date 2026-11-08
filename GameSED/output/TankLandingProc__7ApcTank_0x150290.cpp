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

// Function: TankLandingProc__7ApcTank
// Address: 0x150290 - 0x150bb8
void TankLandingProc__7ApcTank_0x150290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankLandingProc__7ApcTank_0x150290");
#endif

    switch (ctx->pc) {
        case 0x1502f8u: goto label_1502f8;
        case 0x150300u: goto label_150300;
        case 0x150368u: goto label_150368;
        case 0x150400u: goto label_150400;
        case 0x150428u: goto label_150428;
        case 0x150500u: goto label_150500;
        case 0x150568u: goto label_150568;
        case 0x150618u: goto label_150618;
        case 0x150670u: goto label_150670;
        case 0x150744u: goto label_150744;
        case 0x1507a0u: goto label_1507a0;
        case 0x1507b0u: goto label_1507b0;
        case 0x1507b8u: goto label_1507b8;
        case 0x1507c0u: goto label_1507c0;
        case 0x150860u: goto label_150860;
        case 0x150994u: goto label_150994;
        case 0x1509dcu: goto label_1509dc;
        case 0x150a24u: goto label_150a24;
        case 0x150a2cu: goto label_150a2c;
        case 0x150a40u: goto label_150a40;
        case 0x150a48u: goto label_150a48;
        default: break;
    }

    ctx->pc = 0x150290u;

    // 0x150290: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x150290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x150294: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x150294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x150298: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x150298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x15029c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15029cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502a0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1502a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1502a4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1502a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1502a8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1502a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1502ac: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1502acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x1502b0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1502b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1502b4: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x1502b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x1502b8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1502b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1502bc: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1502bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x1502c0: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x1502c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1502c4: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x1502c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1502c8: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x1502c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1502cc: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1502ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1502d0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1502d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1502d4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1502d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1502d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1502d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1502dc: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x1502dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1502e0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1502e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1502e4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1502e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1502e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1502E8u;
    {
        const bool branch_taken_0x1502e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1502ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502E8u;
        // 0x1502ec: 0x8e550170  lw          $s5, 0x170($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1502e8) {
            ctx->pc = 0x1502F8u;
            goto label_1502f8;
        }
    }
    ctx->pc = 0x1502F0u;
    // 0x1502f0: 0xc061920  jal         func_186480
    ctx->pc = 0x1502F0u;
    SET_GPR_U32(ctx, 31, 0x1502F8u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1502F0u, 0x1502F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502F8u;
label_1502f8:
    // 0x1502f8: 0xc061422  jal         func_185088
    ctx->pc = 0x1502F8u;
    SET_GPR_U32(ctx, 31, 0x150300u);
    ctx->pc = 0x1502FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502F8u;
    // 0x1502fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1502F8u, 0x150300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150300u;
label_150300:
    // 0x150300: 0x86420266  lh          $v0, 0x266($s2)
    ctx->pc = 0x150300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
    // 0x150304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x150304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x150308: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x150308u;
    {
        const bool branch_taken_0x150308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150308u;
        // 0x15030c: 0x264302d0  addiu       $v1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150308) {
            ctx->pc = 0x150350u;
            goto label_150350;
        }
    }
    ctx->pc = 0x150310u;
    // 0x150310: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x150310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150314: 0x264405f0  addiu       $a0, $s2, 0x5F0
    ctx->pc = 0x150314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1520));
    // 0x150318: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x150318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15031c: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x15031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x150320: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x150320u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150324: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x150324u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150328: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x150328u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15032c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x15032cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x150330: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x150330u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x150334: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x150334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150338: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x150338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x15033c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x15033cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150340: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x150340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x150344: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x150344u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x150348: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x150348u;
    {
        const bool branch_taken_0x150348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150348u;
        // 0x15034c: 0x264403b0  addiu       $a0, $s2, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150348) {
            ctx->pc = 0x1503ACu;
            goto label_1503ac;
        }
    }
    ctx->pc = 0x150350u;
label_150350:
    // 0x150350: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x150350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150354: 0x264505b0  addiu       $a1, $s2, 0x5B0
    ctx->pc = 0x150354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
    // 0x150358: 0x26440290  addiu       $a0, $s2, 0x290
    ctx->pc = 0x150358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
    // 0x15035c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x15035cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x150360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150364: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x150364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_150368:
    // 0x150368: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x150368u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15036c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15036cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150370: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x150370u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x150374: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x150374u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x150378: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x150378u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15037c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x15037cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150380: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x150380u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150384: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x150384u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150388: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x150388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x15038c: 0xf8ac0000  sqc2        $vf12, 0x0($a1)
    ctx->pc = 0x15038cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x150390: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x150390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x150394: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x150394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x150398: 0x0  nop
    ctx->pc = 0x150398u;
    // NOP
    // 0x15039c: 0x0  nop
    ctx->pc = 0x15039cu;
    // NOP
    // 0x1503a0: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x1503A0u;
    {
        const bool branch_taken_0x1503a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1503A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503A0u;
        // 0x1503a4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503a0) {
            ctx->pc = 0x150368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150368;
        }
    }
    ctx->pc = 0x1503A8u;
    // 0x1503a8: 0x264403b0  addiu       $a0, $s2, 0x3B0
    ctx->pc = 0x1503a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
label_1503ac:
    // 0x1503ac: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1503acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1503b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1503b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1503b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1503b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1503b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1503b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1503bc: 0x8e430180  lw          $v1, 0x180($s2)
    ctx->pc = 0x1503bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x1503c0: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1503c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1503c4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1503c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1503c8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1503C8u;
    {
        const bool branch_taken_0x1503c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1503CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503C8u;
        // 0x1503cc: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503c8) {
            ctx->pc = 0x1503F0u;
            goto label_1503f0;
        }
    }
    ctx->pc = 0x1503D0u;
    // 0x1503d0: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x1503d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x1503d4: 0x8c431a2c  lw          $v1, 0x1A2C($v0)
    ctx->pc = 0x1503d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6700)));
    // 0x1503d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1503D8u;
    {
        const bool branch_taken_0x1503d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503D8u;
        // 0x1503dc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503d8) {
            ctx->pc = 0x1503F4u;
            goto label_1503f4;
        }
    }
    ctx->pc = 0x1503E0u;
    // 0x1503e0: 0x86420266  lh          $v0, 0x266($s2)
    ctx->pc = 0x1503e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
    // 0x1503e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1503e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1503e8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1503E8u;
    {
        const bool branch_taken_0x1503e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503E8u;
        // 0x1503ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503e8) {
            ctx->pc = 0x1504F8u;
            goto label_1504f8;
        }
    }
    ctx->pc = 0x1503F0u;
label_1503f0:
    // 0x1503f0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1503f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1503f4:
    // 0x1503f4: 0x265e01d0  addiu       $fp, $s2, 0x1D0
    ctx->pc = 0x1503f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x1503f8: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x1503f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503fc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1503fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_150400:
    // 0x150400: 0x26300440  addiu       $s0, $s1, 0x440
    ctx->pc = 0x150400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x150404: 0x26d405b0  addiu       $s4, $s6, 0x5B0
    ctx->pc = 0x150404u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1456));
    // 0x150408: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x150408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x15040c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15040cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x150410: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x150410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150414: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x150414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150418: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15041c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15041cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150420: 0xc05129a  jal         func_144A68
    ctx->pc = 0x150420u;
    SET_GPR_U32(ctx, 31, 0x150428u);
    ctx->pc = 0x150424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150420u;
    // 0x150424: 0x26330420  addiu       $s3, $s1, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x150420u, 0x150428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150428u;
label_150428:
    // 0x150428: 0x8ea50328  lw          $a1, 0x328($s5)
    ctx->pc = 0x150428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x15042c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x15042cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x150430: 0xe6210430  swc1        $f1, 0x430($s1)
    ctx->pc = 0x150430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1072), bits); }
    // 0x150434: 0x24a54020  addiu       $a1, $a1, 0x4020
    ctx->pc = 0x150434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16416));
    // 0x150438: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x150438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15043c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x15043cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x150440: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x150440u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x150444: 0xfe230448  sd          $v1, 0x448($s1)
    ctx->pc = 0x150444u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1096), GPR_U64(ctx, 3));
    // 0x150448: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x150448u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15044c: 0xfe220450  sd          $v0, 0x450($s1)
    ctx->pc = 0x15044cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1104), GPR_U64(ctx, 2));
    // 0x150450: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x150450u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x150454: 0xfe230458  sd          $v1, 0x458($s1)
    ctx->pc = 0x150454u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1112), GPR_U64(ctx, 3));
    // 0x150458: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x150458u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15045c: 0xfe220460  sd          $v0, 0x460($s1)
    ctx->pc = 0x15045cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1120), GPR_U64(ctx, 2));
    // 0x150460: 0xdca40028  ld          $a0, 0x28($a1)
    ctx->pc = 0x150460u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x150464: 0xfe240468  sd          $a0, 0x468($s1)
    ctx->pc = 0x150464u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1128), GPR_U64(ctx, 4));
    // 0x150468: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x150468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x15046c: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x15046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x150470: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x150470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150474: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x150474u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x150478: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x150478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x15047c: 0x9062402c  lbu         $v0, 0x402C($v1)
    ctx->pc = 0x15047cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16428)));
    // 0x150480: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150480u;
    {
        const bool branch_taken_0x150480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150480u;
        // 0x150484: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150480) {
            ctx->pc = 0x150490u;
            goto label_150490;
        }
    }
    ctx->pc = 0x150488u;
    // 0x150488: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x150488u;
    {
        const bool branch_taken_0x150488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150488u;
        // 0x15048c: 0x8c624018  lw          $v0, 0x4018($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150488) {
            ctx->pc = 0x150494u;
            goto label_150494;
        }
    }
    ctx->pc = 0x150490u;
label_150490:
    // 0x150490: 0x8c62402c  lw          $v0, 0x402C($v1)
    ctx->pc = 0x150490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16428)));
label_150494:
    // 0x150494: 0x16e40011  bne         $s7, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x150494u;
    {
        const bool branch_taken_0x150494 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 4));
        ctx->pc = 0x150498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150494u;
        // 0x150498: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150494) {
            ctx->pc = 0x1504DCu;
            goto label_1504dc;
        }
    }
    ctx->pc = 0x15049Cu;
    // 0x15049c: 0xe64101e8  swc1        $f1, 0x1E8($s2)
    ctx->pc = 0x15049cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 488), bits); }
    // 0x1504a0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1504a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1504a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1504a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1504a8: 0xe64001e0  swc1        $f0, 0x1E0($s2)
    ctx->pc = 0x1504a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 480), bits); }
    // 0x1504ac: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1504acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1504b0: 0xae4301ec  sw          $v1, 0x1EC($s2)
    ctx->pc = 0x1504b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 3));
    // 0x1504b4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1504b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1504b8: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x1504b8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x1504bc: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x1504bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x1504c0: 0x8e420184  lw          $v0, 0x184($s2)
    ctx->pc = 0x1504c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x1504c4: 0x8c644028  lw          $a0, 0x4028($v1)
    ctx->pc = 0x1504c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16424)));
    // 0x1504c8: 0x8c654024  lw          $a1, 0x4024($v1)
    ctx->pc = 0x1504c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16420)));
    // 0x1504cc: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1504ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1504d0: 0xae4401f4  sw          $a0, 0x1F4($s2)
    ctx->pc = 0x1504d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 4));
    // 0x1504d4: 0xae4501f0  sw          $a1, 0x1F0($s2)
    ctx->pc = 0x1504d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 5));
    // 0x1504d8: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x1504d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
label_1504dc:
    // 0x1504dc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1504dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1504e0: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1504e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1504e4: 0x2ae20005  slti        $v0, $s7, 0x5
    ctx->pc = 0x1504e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1504e8: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1504E8u;
    {
        const bool branch_taken_0x1504e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1504ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504E8u;
        // 0x1504ec: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504e8) {
            ctx->pc = 0x150400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150400;
        }
    }
    ctx->pc = 0x1504F0u;
    // 0x1504f0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1504F0u;
    {
        const bool branch_taken_0x1504f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1504F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504F0u;
        // 0x1504f4: 0x26440600  addiu       $a0, $s2, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504f0) {
            ctx->pc = 0x15060Cu;
            goto label_15060c;
        }
    }
    ctx->pc = 0x1504F8u;
label_1504f8:
    // 0x1504f8: 0xc052fa2  jal         func_14BE88
    ctx->pc = 0x1504F8u;
    SET_GPR_U32(ctx, 31, 0x150500u);
    ctx->pc = 0x1504FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504F8u;
    // 0x1504fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE88u, 0x1504F8u, 0x150500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150500u;
label_150500:
    // 0x150500: 0x264a01d0  addiu       $t2, $s2, 0x1D0
    ctx->pc = 0x150500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x150504: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x150504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150508: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x150508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15050c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150510: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x150510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x150514: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x150514u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150518: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x150518u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x15051c: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x15051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150520: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x150520u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150524: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x150524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x150528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15052c: 0x264905b0  addiu       $t1, $s2, 0x5B0
    ctx->pc = 0x15052cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
    // 0x150530: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x150530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x150534: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x150534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150538: 0x0  nop
    ctx->pc = 0x150538u;
    // NOP
    // 0x15053c: 0x0  nop
    ctx->pc = 0x15053cu;
    // NOP
    // 0x150540: 0x460201c3  div.s       $f7, $f0, $f2
    ctx->pc = 0x150540u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x150544: 0xc64101e8  lwc1        $f1, 0x1E8($s2)
    ctx->pc = 0x150544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150548: 0x8c644028  lw          $a0, 0x4028($v1)
    ctx->pc = 0x150548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16424)));
    // 0x15054c: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x15054cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x150550: 0x8c624024  lw          $v0, 0x4024($v1)
    ctx->pc = 0x150550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16420)));
    // 0x150554: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x150554u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150558: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x150558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15055c: 0xae4201f0  sw          $v0, 0x1F0($s2)
    ctx->pc = 0x15055cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 2));
    // 0x150560: 0xae4401f4  sw          $a0, 0x1F4($s2)
    ctx->pc = 0x150560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 4));
    // 0x150564: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x150564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_150568:
    // 0x150568: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x150568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15056c: 0x25070420  addiu       $a3, $t0, 0x420
    ctx->pc = 0x15056cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1056));
    // 0x150570: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x150570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150574: 0x25060450  addiu       $a2, $t0, 0x450
    ctx->pc = 0x150574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1104));
    // 0x150578: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x150578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15057c: 0xc5230008  lwc1        $f3, 0x8($t1)
    ctx->pc = 0x15057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x150580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150584: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x150584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150588: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x150588u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x15058c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x15058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150590: 0xc5440000  lwc1        $f4, 0x0($t2)
    ctx->pc = 0x150590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x150594: 0xad000440  sw          $zero, 0x440($t0)
    ctx->pc = 0x150594u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1088), GPR_U32(ctx, 0));
    // 0x150598: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x150598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15059c: 0xad000444  sw          $zero, 0x444($t0)
    ctx->pc = 0x15059cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1092), GPR_U32(ctx, 0));
    // 0x1505a0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1505a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1505a4: 0xad000448  sw          $zero, 0x448($t0)
    ctx->pc = 0x1505a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1096), GPR_U32(ctx, 0));
    // 0x1505a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1505a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1505ac: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1505acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1505b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1505b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1505b4: 0xe5000430  swc1        $f0, 0x430($t0)
    ctx->pc = 0x1505b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 1072), bits); }
    // 0x1505b8: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x1505b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1505bc: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x1505bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1505c0: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x1505c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1505c4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1505c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1505c8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1505c8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1505cc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1505ccu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1505d0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1505d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1505d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1505d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1505d8: 0xa100044f  sb          $zero, 0x44F($t0)
    ctx->pc = 0x1505d8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1505dc: 0xa100044e  sb          $zero, 0x44E($t0)
    ctx->pc = 0x1505dcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1102), (uint8_t)GPR_U32(ctx, 0));
    // 0x1505e0: 0xa100044d  sb          $zero, 0x44D($t0)
    ctx->pc = 0x1505e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1101), (uint8_t)GPR_U32(ctx, 0));
    // 0x1505e4: 0xa100044c  sb          $zero, 0x44C($t0)
    ctx->pc = 0x1505e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1100), (uint8_t)GPR_U32(ctx, 0));
    // 0x1505e8: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x1505e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1505ec: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1505ecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1505f0: 0x8e4301ec  lw          $v1, 0x1EC($s2)
    ctx->pc = 0x1505f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x1505f4: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1505f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1505f8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1505f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1505fc: 0xad030434  sw          $v1, 0x434($t0)
    ctx->pc = 0x1505fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1076), GPR_U32(ctx, 3));
    // 0x150600: 0x581ffd9  bgez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x150600u;
    {
        const bool branch_taken_0x150600 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x150604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150600u;
        // 0x150604: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150600) {
            ctx->pc = 0x150568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150568;
        }
    }
    ctx->pc = 0x150608u;
    // 0x150608: 0x26440600  addiu       $a0, $s2, 0x600
    ctx->pc = 0x150608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
label_15060c:
    // 0x15060c: 0x26430430  addiu       $v1, $s2, 0x430
    ctx->pc = 0x15060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
    // 0x150610: 0x264205b0  addiu       $v0, $s2, 0x5B0
    ctx->pc = 0x150610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
    // 0x150614: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x150614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_150618:
    // 0x150618: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x150618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15061c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x15061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x150620: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x150620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150624: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x150624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x150628: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x150628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15062c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x150630: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150634: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x150634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x150638: 0x4a1fff7  bgez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x150638u;
    {
        const bool branch_taken_0x150638 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x15063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150638u;
        // 0x15063c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150638) {
            ctx->pc = 0x150618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150618;
        }
    }
    ctx->pc = 0x150640u;
    // 0x150640: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x150640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x150644: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x150644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x150648: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x150648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x15064c: 0x24569c00  addiu       $s6, $v0, -0x6400
    ctx->pc = 0x15064cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x150650: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x150650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x150654: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x150654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x150658: 0x24749be0  addiu       $s4, $v1, -0x6420
    ctx->pc = 0x150658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941664));
    // 0x15065c: 0xc7968210  lwc1        $f22, -0x7DF0($gp)
    ctx->pc = 0x15065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x150660: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x150660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150664: 0x265503b0  addiu       $s5, $s2, 0x3B0
    ctx->pc = 0x150664u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
    // 0x150668: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x150668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15066c: 0x26500600  addiu       $s0, $s2, 0x600
    ctx->pc = 0x15066cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
label_150670:
    // 0x150670: 0xc6150000  lwc1        $f21, 0x0($s0)
    ctx->pc = 0x150670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x150674: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x150674u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x150678: 0x46180528  max.s       $f20, $f0, $f24
    ctx->pc = 0x150678u;
    ctx->f[20] = std::max(ctx->f[0], ctx->f[24]);
    // 0x15067c: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x15067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x150680: 0x244419c0  addiu       $a0, $v0, 0x19C0
    ctx->pc = 0x150680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6592));
    // 0x150684: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x150684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150688: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x150688u;
    {
        const bool branch_taken_0x150688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150688) {
            ctx->pc = 0x15068Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150688u;
            // 0x15068c: 0x92430576  lbu         $v1, 0x576($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1398)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150730u;
            goto label_150730;
        }
    }
    ctx->pc = 0x150690u;
    // 0x150690: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x150690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x150694: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x150694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x150698: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x150698u;
    {
        const bool branch_taken_0x150698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150698) {
            ctx->pc = 0x15069Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150698u;
            // 0x15069c: 0x92430576  lbu         $v1, 0x576($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1398)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150730u;
            goto label_150730;
        }
    }
    ctx->pc = 0x1506A0u;
    // 0x1506a0: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1506a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1506a4: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1506A4u;
    {
        const bool branch_taken_0x1506a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506a4) {
            ctx->pc = 0x1506A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1506A4u;
            // 0x1506a8: 0x92430576  lbu         $v1, 0x576($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1398)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150730u;
            goto label_150730;
        }
    }
    ctx->pc = 0x1506ACu;
    // 0x1506ac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1506acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1506b0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1506b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1506b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1506B4u;
    {
        const bool branch_taken_0x1506b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1506B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506B4u;
        // 0x1506b8: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506b4) {
            ctx->pc = 0x1506C8u;
            goto label_1506c8;
        }
    }
    ctx->pc = 0x1506BCu;
    // 0x1506bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1506BCu;
    {
        const bool branch_taken_0x1506bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1506C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506BCu;
        // 0x1506c0: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506bc) {
            ctx->pc = 0x1506CCu;
            goto label_1506cc;
        }
    }
    ctx->pc = 0x1506C4u;
    // 0x1506c4: 0x0  nop
    ctx->pc = 0x1506c4u;
    // NOP
label_1506c8:
    // 0x1506c8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1506c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1506cc:
    // 0x1506cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1506ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1506d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1506d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1506d4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1506d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1506d8: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x1506d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x1506dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1506dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1506e0: 0x24430028  addiu       $v1, $v0, 0x28
    ctx->pc = 0x1506e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1506e4: 0x46170068  max.s       $f1, $f0, $f23
    ctx->pc = 0x1506e4u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[23]);
    // 0x1506e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1506e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1506ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1506ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1506f0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1506F0u;
    {
        const bool branch_taken_0x1506f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1506f0) {
            ctx->pc = 0x1506F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1506F0u;
            // 0x1506f4: 0x92430576  lbu         $v1, 0x576($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1398)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150730u;
            goto label_150730;
        }
    }
    ctx->pc = 0x1506F8u;
    // 0x1506f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1506f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1506fc: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1506fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x150700: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x150700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x150704: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x150704u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x150708: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x150708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15070c: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x15070cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x150710: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x150710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x150714: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x150714u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x150718: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x150718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x15071c: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x15071cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x150720: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x150720u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x150724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150728: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x150728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15072c: 0x92430576  lbu         $v1, 0x576($s2)
    ctx->pc = 0x15072cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1398)));
label_150730:
    // 0x150730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150734: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x150734u;
    {
        const bool branch_taken_0x150734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150734) {
            ctx->pc = 0x150758u;
            goto label_150758;
        }
    }
    ctx->pc = 0x15073Cu;
    // 0x15073c: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x15073Cu;
    SET_GPR_U32(ctx, 31, 0x150744u);
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x15073Cu, 0x150744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150744u;
label_150744:
    // 0x150744: 0xc7818214  lwc1        $f1, -0x7DEC($gp)
    ctx->pc = 0x150744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150748: 0xc64203cc  lwc1        $f2, 0x3CC($s2)
    ctx->pc = 0x150748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15074c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15074cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x150750: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x150750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x150754: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x150754u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_150758:
    // 0x150758: 0xc7808218  lwc1        $f0, -0x7DE8($gp)
    ctx->pc = 0x150758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15075c: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x15075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x150760: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x150760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150764: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x150764u;
    {
        const bool branch_taken_0x150764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150764u;
        // 0x150768: 0xe4540000  swc1        $f20, 0x0($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150764) {
            ctx->pc = 0x150780u;
            goto label_150780;
        }
    }
    ctx->pc = 0x15076Cu;
    // 0x15076c: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x15076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x150770: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x150770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x150774: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x150774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150778: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x150778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15077c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x15077cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_150780:
    // 0x150780: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x150780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x150784: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x150784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x150788: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x150788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15078c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x15078cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x150790: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x150790u;
    {
        const bool branch_taken_0x150790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150790u;
        // 0x150794: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150790) {
            ctx->pc = 0x150670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150670;
        }
    }
    ctx->pc = 0x150798u;
    // 0x150798: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x150798u;
    SET_GPR_U32(ctx, 31, 0x1507A0u);
    ctx->pc = 0x15079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150798u;
    // 0x15079c: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x150798u, 0x1507A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507A0u;
label_1507a0:
    // 0x1507a0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1507A0u;
    {
        const bool branch_taken_0x1507a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1507a0) {
            ctx->pc = 0x1507A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1507A0u;
            // 0x1507a4: 0x8e420264  lw          $v0, 0x264($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1507C4u;
            goto label_1507c4;
        }
    }
    ctx->pc = 0x1507A8u;
    // 0x1507a8: 0xc05573c  jal         func_155CF0
    ctx->pc = 0x1507A8u;
    SET_GPR_U32(ctx, 31, 0x1507B0u);
    ctx->pc = 0x1507ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507A8u;
    // 0x1507ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CF0u, 0x1507A8u, 0x1507B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507B0u;
label_1507b0:
    // 0x1507b0: 0xc055756  jal         func_155D58
    ctx->pc = 0x1507B0u;
    SET_GPR_U32(ctx, 31, 0x1507B8u);
    ctx->pc = 0x1507B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507B0u;
    // 0x1507b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D58u, 0x1507B0u, 0x1507B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507B8u;
label_1507b8:
    // 0x1507b8: 0xc055770  jal         func_155DC0
    ctx->pc = 0x1507B8u;
    SET_GPR_U32(ctx, 31, 0x1507C0u);
    ctx->pc = 0x1507BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507B8u;
    // 0x1507bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x1507B8u, 0x1507C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507C0u;
label_1507c0:
    // 0x1507c0: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x1507c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_1507c4:
    // 0x1507c4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1507c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1507c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1507C8u;
    {
        const bool branch_taken_0x1507c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1507CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507C8u;
        // 0x1507cc: 0x8e4203b0  lw          $v0, 0x3B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507c8) {
            ctx->pc = 0x1507F0u;
            goto label_1507f0;
        }
    }
    ctx->pc = 0x1507D0u;
    // 0x1507d0: 0xc6410860  lwc1        $f1, 0x860($s2)
    ctx->pc = 0x1507d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1507d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1507d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1507d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1507d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1507dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1507e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1507E0u;
    {
        const bool branch_taken_0x1507e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1507e0) {
            ctx->pc = 0x1507F0u;
            goto label_1507f0;
        }
    }
    ctx->pc = 0x1507E8u;
    // 0x1507e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1507E8u;
    {
        const bool branch_taken_0x1507e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1507ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507E8u;
        // 0x1507ec: 0x34422000  ori         $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507e8) {
            ctx->pc = 0x1507F8u;
            goto label_1507f8;
        }
    }
    ctx->pc = 0x1507F0u;
label_1507f0:
    // 0x1507f0: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x1507f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1507f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1507f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1507f8:
    // 0x1507f8: 0xae4203b0  sw          $v0, 0x3B0($s2)
    ctx->pc = 0x1507f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 944), GPR_U32(ctx, 2));
    // 0x1507fc: 0x8e4203b0  lw          $v0, 0x3B0($s2)
    ctx->pc = 0x1507fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    // 0x150800: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x150800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x150804: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x150804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x150808: 0x246c9c00  addiu       $t4, $v1, -0x6400
    ctx->pc = 0x150808u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941696));
    // 0x15080c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x15080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x150810: 0x8e4803b0  lw          $t0, 0x3B0($s2)
    ctx->pc = 0x150810u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    // 0x150814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150818: 0xc787821c  lwc1        $f7, -0x7DE4($gp)
    ctx->pc = 0x150818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15081c: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x15081cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
    // 0x150820: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x150820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x150824: 0x8e739ba0  lw          $s3, -0x6460($s3)
    ctx->pc = 0x150824u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941600)));
    // 0x150828: 0x4600b546  mov.s       $f21, $f22
    ctx->pc = 0x150828u;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
    // 0x15082c: 0xc7868220  lwc1        $f6, -0x7DE0($gp)
    ctx->pc = 0x15082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x150830: 0x4600b606  mov.s       $f24, $f22
    ctx->pc = 0x150830u;
    ctx->f[24] = FPU_MOV_S(ctx->f[22]);
    // 0x150834: 0xc7858224  lwc1        $f5, -0x7DDC($gp)
    ctx->pc = 0x150834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x150838: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x150838u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x15083c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15083cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x150840: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x150840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x150844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x150844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150848: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x150848u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15084c: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x15084cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x150850: 0x24092000  addiu       $t1, $zero, 0x2000
    ctx->pc = 0x150850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x150854: 0x4600b0c6  mov.s       $f3, $f22
    ctx->pc = 0x150854u;
    ctx->f[3] = FPU_MOV_S(ctx->f[22]);
    // 0x150858: 0x264602e4  addiu       $a2, $s2, 0x2E4
    ctx->pc = 0x150858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 740));
    // 0x15085c: 0x26450420  addiu       $a1, $s2, 0x420
    ctx->pc = 0x15085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
label_150860:
    // 0x150860: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x150860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x150864: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x150864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x150868: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x150868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x15086c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150870: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x150870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x150874: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x150874u;
    {
        const bool branch_taken_0x150874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150874u;
        // 0x150878: 0x30e20002  andi        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150874) {
            ctx->pc = 0x1508C8u;
            goto label_1508c8;
        }
    }
    ctx->pc = 0x15087Cu;
    // 0x15087c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x15087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150884: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x150884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150888: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15088c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15088Cu;
    {
        const bool branch_taken_0x15088c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15088Cu;
        // 0x150890: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15088c) {
            ctx->pc = 0x15089Cu;
            goto label_15089c;
        }
    }
    ctx->pc = 0x150894u;
    // 0x150894: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150898: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x150898u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_15089c:
    // 0x15089c: 0xc7808228  lwc1        $f0, -0x7DD8($gp)
    ctx->pc = 0x15089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1508a0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1508a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1508a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1508a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1508a8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1508A8u;
    {
        const bool branch_taken_0x1508a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1508ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508A8u;
        // 0x1508ac: 0xe4b40018  swc1        $f20, 0x18($a1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508a8) {
            ctx->pc = 0x150910u;
            goto label_150910;
        }
    }
    ctx->pc = 0x1508B0u;
    // 0x1508b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1508b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1508b4: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x1508b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1508b8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1508b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1508bc: 0x46010529  min.s       $f20, $f0, $f1
    ctx->pc = 0x1508bcu;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1508c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1508C0u;
    {
        const bool branch_taken_0x1508c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1508c0) {
            ctx->pc = 0x150910u;
            goto label_150910;
        }
    }
    ctx->pc = 0x1508C8u;
label_1508c8:
    // 0x1508c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1508C8u;
    {
        const bool branch_taken_0x1508c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1508c8) {
            ctx->pc = 0x1508E0u;
            goto label_1508e0;
        }
    }
    ctx->pc = 0x1508D0u;
    // 0x1508d0: 0x526b0006  beql        $s3, $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1508D0u;
    {
        const bool branch_taken_0x1508d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 11));
        if (branch_taken_0x1508d0) {
            ctx->pc = 0x1508D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1508D0u;
            // 0x1508d4: 0x8e4303b0  lw          $v1, 0x3B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1508ECu;
            goto label_1508ec;
        }
    }
    ctx->pc = 0x1508D8u;
    // 0x1508d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1508D8u;
    {
        const bool branch_taken_0x1508d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1508d8) {
            ctx->pc = 0x150910u;
            goto label_150910;
        }
    }
    ctx->pc = 0x1508E0u;
label_1508e0:
    // 0x1508e0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1508E0u;
    {
        const bool branch_taken_0x1508e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1508e0) {
            ctx->pc = 0x150910u;
            goto label_150910;
        }
    }
    ctx->pc = 0x1508E8u;
    // 0x1508e8: 0x8e4303b0  lw          $v1, 0x3B0($s2)
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
label_1508ec:
    // 0x1508ec: 0x6a1024  and         $v0, $v1, $t2
    ctx->pc = 0x1508ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x1508f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1508F0u;
    {
        const bool branch_taken_0x1508f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1508F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508F0u;
        // 0x1508f4: 0x691024  and         $v0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508f0) {
            ctx->pc = 0x150910u;
            goto label_150910;
        }
    }
    ctx->pc = 0x1508F8u;
    // 0x1508f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1508F8u;
    {
        const bool branch_taken_0x1508f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1508f8) {
            ctx->pc = 0x150910u;
            goto label_150910;
        }
    }
    ctx->pc = 0x150900u;
    // 0x150900: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x150900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150904: 0x46050040  add.s       $f1, $f0, $f5
    ctx->pc = 0x150904u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x150908: 0x46060502  mul.s       $f20, $f0, $f6
    ctx->pc = 0x150908u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x15090c: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x15090cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_150910:
    // 0x150910: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x150910u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150914: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x150914u;
    {
        const bool branch_taken_0x150914 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x150918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150914u;
        // 0x150918: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150914) {
            ctx->pc = 0x15093Cu;
            goto label_15093c;
        }
    }
    ctx->pc = 0x15091Cu;
    // 0x15091c: 0xc4c0fffc  lwc1        $f0, -0x4($a2)
    ctx->pc = 0x15091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150920: 0x4604a082  mul.s       $f2, $f20, $f4
    ctx->pc = 0x150920u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x150924: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x150924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150928: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x150928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x15092c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x15092cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x150930: 0x4602bdc0  add.s       $f23, $f23, $f2
    ctx->pc = 0x150930u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x150934: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x150934u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x150938: 0x4601b580  add.s       $f22, $f22, $f1
    ctx->pc = 0x150938u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_15093c:
    // 0x15093c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x15093cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x150940: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x150940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x150944: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x150944u;
    {
        const bool branch_taken_0x150944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150944u;
        // 0x150948: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150944) {
            ctx->pc = 0x150860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150860;
        }
    }
    ctx->pc = 0x15094Cu;
    // 0x15094c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15094cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150950: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x150950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150954: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x150954u;
    {
        const bool branch_taken_0x150954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150954) {
            ctx->pc = 0x150A48u;
            goto label_150a48;
        }
    }
    ctx->pc = 0x15095Cu;
    // 0x15095c: 0xc780822c  lwc1        $f0, -0x7DD4($gp)
    ctx->pc = 0x15095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150964: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x150964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150968: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x150968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x15096c: 0x46010569  min.s       $f21, $f0, $f1
    ctx->pc = 0x15096cu;
    ctx->f[21] = std::min(ctx->f[0], ctx->f[1]);
    // 0x150970: 0xc78c8230  lwc1        $f12, -0x7DD0($gp)
    ctx->pc = 0x150970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150974: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x150974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x150978: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x150978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x15097c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15097cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150980: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x150980u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x150984: 0x8e440170  lw          $a0, 0x170($s2)
    ctx->pc = 0x150984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
    // 0x150988: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x150988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15098c: 0xc05185a  jal         func_146168
    ctx->pc = 0x15098Cu;
    SET_GPR_U32(ctx, 31, 0x150994u);
    ctx->pc = 0x150990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15098Cu;
    // 0x150990: 0x24c600d0  addiu       $a2, $a2, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146168u, 0x15098Cu, 0x150994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150994u;
label_150994:
    // 0x150994: 0x8e4501ac  lw          $a1, 0x1AC($s2)
    ctx->pc = 0x150994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x150998: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x150998u;
    {
        const bool branch_taken_0x150998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x150998) {
            ctx->pc = 0x1509C4u;
            goto label_1509c4;
        }
    }
    ctx->pc = 0x1509A0u;
    // 0x1509a0: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x1509a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1509a4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1509a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1509a8: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1509a8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1509ac: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x1509acu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1509b0: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x1509b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x1509b4: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x1509b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1509b8: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x1509b8u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1509bc: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1509bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x1509c0: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x1509c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
label_1509c4:
    // 0x1509c4: 0xc7808234  lwc1        $f0, -0x7DCC($gp)
    ctx->pc = 0x1509c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1509c8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1509c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1509cc: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1509CCu;
    {
        const bool branch_taken_0x1509cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1509cc) {
            ctx->pc = 0x150A48u;
            goto label_150a48;
        }
    }
    ctx->pc = 0x1509D4u;
    // 0x1509d4: 0xc04c99a  jal         func_132668
    ctx->pc = 0x1509D4u;
    SET_GPR_U32(ctx, 31, 0x1509DCu);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x1509D4u, 0x1509DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509DCu;
label_1509dc:
    // 0x1509dc: 0x8e430690  lw          $v1, 0x690($s2)
    ctx->pc = 0x1509dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x1509e0: 0x8c620c08  lw          $v0, 0xC08($v1)
    ctx->pc = 0x1509e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3080)));
    // 0x1509e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1509E4u;
    {
        const bool branch_taken_0x1509e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1509E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509E4u;
        // 0x1509e8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509e4) {
            ctx->pc = 0x150A00u;
            goto label_150a00;
        }
    }
    ctx->pc = 0x1509ECu;
    // 0x1509ec: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x1509ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x1509f0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1509f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1509f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1509F4u;
    {
        const bool branch_taken_0x1509f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1509F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509F4u;
        // 0x1509f8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509f4) {
            ctx->pc = 0x150A04u;
            goto label_150a04;
        }
    }
    ctx->pc = 0x1509FCu;
    // 0x1509fc: 0x0  nop
    ctx->pc = 0x1509fcu;
    // NOP
label_150a00:
    // 0x150a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x150a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150a04:
    // 0x150a04: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x150a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150a08: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x150a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x150a0c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x150a0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x150a10: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x150a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x150a14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150A14u;
    {
        const bool branch_taken_0x150a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150a14) {
            ctx->pc = 0x150A24u;
            goto label_150a24;
        }
    }
    ctx->pc = 0x150A1Cu;
    // 0x150a1c: 0xc061920  jal         func_186480
    ctx->pc = 0x150A1Cu;
    SET_GPR_U32(ctx, 31, 0x150A24u);
    ctx->pc = 0x150A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A1Cu;
    // 0x150a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x150A1Cu, 0x150A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A24u;
label_150a24:
    // 0x150a24: 0xc061422  jal         func_185088
    ctx->pc = 0x150A24u;
    SET_GPR_U32(ctx, 31, 0x150A2Cu);
    ctx->pc = 0x150A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A24u;
    // 0x150a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x150A24u, 0x150A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A2Cu;
label_150a2c:
    // 0x150a2c: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x150a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x150a30: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x150a30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150a34: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x150a34u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x150a38: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x150A38u;
    SET_GPR_U32(ctx, 31, 0x150A40u);
    ctx->pc = 0x150A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A38u;
    // 0x150a3c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x150A38u, 0x150A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A40u;
label_150a40:
    // 0x150a40: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x150A40u;
    SET_GPR_U32(ctx, 31, 0x150A48u);
    ctx->pc = 0x150A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A40u;
    // 0x150a44: 0x92440575  lbu         $a0, 0x575($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1397)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x150A40u, 0x150A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A48u;
label_150a48:
    // 0x150a48: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x150A48u;
    {
        const bool branch_taken_0x150a48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x150a48) {
            ctx->pc = 0x150A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150A48u;
            // 0x150a4c: 0x8e4303b0  lw          $v1, 0x3B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150AB8u;
            goto label_150ab8;
        }
    }
    ctx->pc = 0x150A50u;
    // 0x150a50: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x150a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150a54: 0xae400438  sw          $zero, 0x438($s2)
    ctx->pc = 0x150a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1080), GPR_U32(ctx, 0));
    // 0x150a58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x150a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150a5c: 0xae400488  sw          $zero, 0x488($s2)
    ctx->pc = 0x150a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1160), GPR_U32(ctx, 0));
    // 0x150a60: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x150a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x150a64: 0xae4004d8  sw          $zero, 0x4D8($s2)
    ctx->pc = 0x150a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1240), GPR_U32(ctx, 0));
    // 0x150a68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x150a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150a6c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x150a70: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x150a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x150a74: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x150a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x150a78: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x150a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x150a7c: 0x286b4000  slti        $t3, $v1, 0x4000
    ctx->pc = 0x150a7cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x150a80: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x150a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x150a84: 0x24698000  addiu       $t1, $v1, -0x8000
    ctx->pc = 0x150a84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x150a88: 0x288a4000  slti        $t2, $a0, 0x4000
    ctx->pc = 0x150a88u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x150a8c: 0x24878000  addiu       $a3, $a0, -0x8000
    ctx->pc = 0x150a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x150a90: 0x28484000  slti        $t0, $v0, 0x4000
    ctx->pc = 0x150a90u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x150a94: 0x24468000  addiu       $a2, $v0, -0x8000
    ctx->pc = 0x150a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x150a98: 0x12b180a  movz        $v1, $t1, $t3
    ctx->pc = 0x150a98u;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x150a9c: 0xea200a  movz        $a0, $a3, $t2
    ctx->pc = 0x150a9cu;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x150aa0: 0xc8100a  movz        $v0, $a2, $t0
    ctx->pc = 0x150aa0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x150aa4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x150aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x150aa8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x150aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x150aac: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x150aacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x150ab0: 0xae400528  sw          $zero, 0x528($s2)
    ctx->pc = 0x150ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1320), GPR_U32(ctx, 0));
    // 0x150ab4: 0x8e4303b0  lw          $v1, 0x3B0($s2)
    ctx->pc = 0x150ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
label_150ab8:
    // 0x150ab8: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x150ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x150abc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150ABCu;
    {
        const bool branch_taken_0x150abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150ABCu;
        // 0x150ac0: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150abc) {
            ctx->pc = 0x150AD0u;
            goto label_150ad0;
        }
    }
    ctx->pc = 0x150AC4u;
    // 0x150ac4: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x150ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x150ac8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150AC8u;
    {
        const bool branch_taken_0x150ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150AC8u;
        // 0x150acc: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ac8) {
            ctx->pc = 0x150AD8u;
            goto label_150ad8;
        }
    }
    ctx->pc = 0x150AD0u;
label_150ad0:
    // 0x150ad0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x150AD0u;
    {
        const bool branch_taken_0x150ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ad0) {
            ctx->pc = 0x150AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150AD0u;
            // 0x150ad4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150B20u;
            goto label_150b20;
        }
    }
    ctx->pc = 0x150AD8u;
label_150ad8:
    // 0x150ad8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x150ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x150adc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x150adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150ae0: 0xc6420644  lwc1        $f2, 0x644($s2)
    ctx->pc = 0x150ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150ae4: 0xc6430640  lwc1        $f3, 0x640($s2)
    ctx->pc = 0x150ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x150ae8: 0x4601b902  mul.s       $f4, $f23, $f1
    ctx->pc = 0x150ae8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x150aec: 0xc6400648  lwc1        $f0, 0x648($s2)
    ctx->pc = 0x150aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150af0: 0x4601c142  mul.s       $f5, $f24, $f1
    ctx->pc = 0x150af0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x150af4: 0x46171081  sub.s       $f2, $f2, $f23
    ctx->pc = 0x150af4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[23]);
    // 0x150af8: 0x461818c1  sub.s       $f3, $f3, $f24
    ctx->pc = 0x150af8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[24]);
    // 0x150afc: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x150afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x150b00: 0xe6440414  swc1        $f4, 0x414($s2)
    ctx->pc = 0x150b00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1044), bits); }
    // 0x150b04: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x150b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x150b08: 0xe6450620  swc1        $f5, 0x620($s2)
    ctx->pc = 0x150b08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1568), bits); }
    // 0x150b0c: 0xe6420644  swc1        $f2, 0x644($s2)
    ctx->pc = 0x150b0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1604), bits); }
    // 0x150b10: 0xe6430640  swc1        $f3, 0x640($s2)
    ctx->pc = 0x150b10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1600), bits); }
    // 0x150b14: 0xe6400648  swc1        $f0, 0x648($s2)
    ctx->pc = 0x150b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
    // 0x150b18: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x150B18u;
    {
        const bool branch_taken_0x150b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B18u;
        // 0x150b1c: 0xe6410628  swc1        $f1, 0x628($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b18) {
            ctx->pc = 0x150B74u;
            goto label_150b74;
        }
    }
    ctx->pc = 0x150B20u;
label_150b20:
    // 0x150b20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x150b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150b24: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x150b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x150b28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x150b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150b2c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x150b2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x150b30: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x150b30u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150b34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x150b34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x150b38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x150b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150b3c: 0xc7828238  lwc1        $f2, -0x7DC8($gp)
    ctx->pc = 0x150b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150b40: 0xc6400620  lwc1        $f0, 0x620($s2)
    ctx->pc = 0x150b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150b44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x150b44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x150b48: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x150b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150b4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150b4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150b50: 0xe6400620  swc1        $f0, 0x620($s2)
    ctx->pc = 0x150b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1568), bits); }
    // 0x150b54: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x150b54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x150b58: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x150b58u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150b5c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x150b5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x150b60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x150b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150b64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x150b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x150b68: 0xc6400628  lwc1        $f0, 0x628($s2)
    ctx->pc = 0x150b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150b6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150b6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150b70: 0xe6400628  swc1        $f0, 0x628($s2)
    ctx->pc = 0x150b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1576), bits); }
label_150b74:
    // 0x150b74: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x150b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150b78: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x150b78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x150b7c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x150b7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150b80: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x150b80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x150b84: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x150b84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x150b88: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x150b88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x150b8c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x150b8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x150b90: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x150b90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x150b94: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x150b94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x150b98: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x150b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x150b9c: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x150b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x150ba0: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x150ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x150ba4: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x150ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x150ba8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x150ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x150bac: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x150bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x150bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x150BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BB0u;
        // 0x150bb4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150BB8u;
}
