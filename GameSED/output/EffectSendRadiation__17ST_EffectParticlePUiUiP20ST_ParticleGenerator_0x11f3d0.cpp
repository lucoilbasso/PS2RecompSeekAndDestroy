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

// Function: EffectSendRadiation__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x11f3d0 - 0x11f728
void EffectSendRadiation__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendRadiation__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11f3d0");
#endif

    switch (ctx->pc) {
        case 0x11f498u: goto label_11f498;
        case 0x11f4a0u: goto label_11f4a0;
        case 0x11f4b4u: goto label_11f4b4;
        case 0x11f4ccu: goto label_11f4cc;
        case 0x11f4f8u: goto label_11f4f8;
        case 0x11f50cu: goto label_11f50c;
        case 0x11f530u: goto label_11f530;
        case 0x11f554u: goto label_11f554;
        case 0x11f598u: goto label_11f598;
        default: break;
    }

    ctx->pc = 0x11f3d0u;

    // 0x11f3d0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x11f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x11f3d4: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x11f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x11f3d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11f3d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3dc: 0xe7ba01c8  swc1        $f26, 0x1C8($sp)
    ctx->pc = 0x11f3dcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x11f3e0: 0xe7b901c0  swc1        $f25, 0x1C0($sp)
    ctx->pc = 0x11f3e0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x11f3e4: 0xe7b501a0  swc1        $f21, 0x1A0($sp)
    ctx->pc = 0x11f3e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x11f3e8: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x11f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x11f3ec: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x11f3ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11f3f0: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x11f3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x11f3f4: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x11f3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x11f3f8: 0x4600ae86  mov.s       $f26, $f21
    ctx->pc = 0x11f3f8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[21]);
    // 0x11f3fc: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x11f3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x11f400: 0x4600ae46  mov.s       $f25, $f21
    ctx->pc = 0x11f400u;
    ctx->f[25] = FPU_MOV_S(ctx->f[21]);
    // 0x11f404: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x11f404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x11f408: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x11f408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x11f40c: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x11f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x11f410: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x11f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x11f414: 0xe7b801b8  swc1        $f24, 0x1B8($sp)
    ctx->pc = 0x11f414u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x11f418: 0xe7b701b0  swc1        $f23, 0x1B0($sp)
    ctx->pc = 0x11f418u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x11f41c: 0xe7b601a8  swc1        $f22, 0x1A8($sp)
    ctx->pc = 0x11f41cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x11f420: 0xe7b40198  swc1        $f20, 0x198($sp)
    ctx->pc = 0x11f420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x11f424: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x11f424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f428: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x11f428u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x11f42c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f42cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f430: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f430u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f434: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x11f434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x11f438: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x11f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11f43c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f43cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f440: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f440u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f444: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f444u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f448: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x11f448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x11f44c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x11f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x11f450: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x11f450u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x11f454: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f454u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f458: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f458u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f45c: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x11f45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x11f460: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x11f460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11f464: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f464u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f468: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f468u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f46c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f46cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f470: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x11f470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11f474: 0x8c960018  lw          $s6, 0x18($a0)
    ctx->pc = 0x11f474u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x11f478: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11f478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11f47c: 0x8c950008  lw          $s5, 0x8($a0)
    ctx->pc = 0x11f47cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f480: 0x24514a30  addiu       $s1, $v0, 0x4A30
    ctx->pc = 0x11f480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
    // 0x11f484: 0x8c940010  lw          $s4, 0x10($a0)
    ctx->pc = 0x11f484u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11f488: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11f488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f48c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x11f48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11f490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f494: 0x0  nop
    ctx->pc = 0x11f494u;
    // NOP
label_11f498:
    // 0x11f498: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x11F498u;
    SET_GPR_U32(ctx, 31, 0x11F4A0u);
    ctx->pc = 0x11F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F498u;
    // 0x11f49c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x11F498u, 0x11F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4A0u;
label_11f4a0:
    // 0x11f4a0: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x11f4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11f4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4ac: 0xc06ef68  jal         func_1BBDA0
    ctx->pc = 0x11F4ACu;
    SET_GPR_U32(ctx, 31, 0x11F4B4u);
    ctx->pc = 0x11F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4ACu;
    // 0x11f4b0: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBDA0u, 0x11F4ACu, 0x11F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4B4u;
label_11f4b4:
    // 0x11f4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4b8: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x11f4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11f4bc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x11f4bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x11f4c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4c4: 0xc06efbc  jal         func_1BBEF0
    ctx->pc = 0x11F4C4u;
    SET_GPR_U32(ctx, 31, 0x11F4CCu);
    ctx->pc = 0x11F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4C4u;
    // 0x11f4c8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEF0u, 0x11F4C4u, 0x11F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4CCu;
label_11f4cc:
    // 0x11f4cc: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x11f4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x11f4d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x11F4D0u;
    {
        const bool branch_taken_0x11f4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4D0u;
        // 0x11f4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4d0) {
            ctx->pc = 0x11F498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f498;
        }
    }
    ctx->pc = 0x11F4D8u;
    // 0x11f4d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11f4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4dc: 0x12600080  beqz        $s3, . + 4 + (0x80 << 2)
    ctx->pc = 0x11F4DCu;
    {
        const bool branch_taken_0x11f4dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4DCu;
        // 0x11f4e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4dc) {
            ctx->pc = 0x11F6E0u;
            goto label_11f6e0;
        }
    }
    ctx->pc = 0x11F4E4u;
    // 0x11f4e4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f4e8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x11f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x11f4ec: 0x24570790  addiu       $s7, $v0, 0x790
    ctx->pc = 0x11f4ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x11f4f0: 0x247249e0  addiu       $s2, $v1, 0x49E0
    ctx->pc = 0x11f4f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 18912));
    // 0x11f4f4: 0x0  nop
    ctx->pc = 0x11f4f4u;
    // NOP
label_11f4f8:
    // 0x11f4f8: 0x3a220005  xori        $v0, $s1, 0x5
    ctx->pc = 0x11f4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)5);
    // 0x11f4fc: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F4FCu;
    {
        const bool branch_taken_0x11f4fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4FCu;
        // 0x11f500: 0x2880a  movz        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4fc) {
            ctx->pc = 0x11F520u;
            goto label_11f520;
        }
    }
    ctx->pc = 0x11F504u;
    // 0x11f504: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F504u;
    SET_GPR_U32(ctx, 31, 0x11F50Cu);
    ctx->pc = 0x11F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F504u;
    // 0x11f508: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F504u, 0x11F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F50Cu;
label_11f50c:
    // 0x11f50c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f50cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f510: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f510u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f514: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f514u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f518: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f518u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f51c: 0x4482c800  mtc1        $v0, $f25
    ctx->pc = 0x11f51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_11f520:
    // 0x11f520: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F520u;
    {
        const bool branch_taken_0x11f520 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f520) {
            ctx->pc = 0x11F544u;
            goto label_11f544;
        }
    }
    ctx->pc = 0x11F528u;
    // 0x11f528: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F528u;
    SET_GPR_U32(ctx, 31, 0x11F530u);
    ctx->pc = 0x11F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F528u;
    // 0x11f52c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F528u, 0x11F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F530u;
label_11f530:
    // 0x11f530: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f534: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f534u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f538: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f538u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f53c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f53cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f540: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x11f540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_11f544:
    // 0x11f544: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F544u;
    {
        const bool branch_taken_0x11f544 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F544u;
        // 0x11f548: 0x213102b  sltu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f544) {
            ctx->pc = 0x11F56Cu;
            goto label_11f56c;
        }
    }
    ctx->pc = 0x11F54Cu;
    // 0x11f54c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F54Cu;
    SET_GPR_U32(ctx, 31, 0x11F554u);
    ctx->pc = 0x11F550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F54Cu;
    // 0x11f550: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F54Cu, 0x11F554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F554u;
label_11f554:
    // 0x11f554: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f554u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f558: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f558u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f55c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f55cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f560: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f560u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f564: 0x4482d000  mtc1        $v0, $f26
    ctx->pc = 0x11f564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x11f568: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x11f568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_11f56c:
    // 0x11f56c: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x11F56Cu;
    {
        const bool branch_taken_0x11f56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F56Cu;
        // 0x11f570: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f56c) {
            ctx->pc = 0x11F6D4u;
            goto label_11f6d4;
        }
    }
    ctx->pc = 0x11F574u;
    // 0x11f574: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x11f574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x11f578: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x11f578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11f57c: 0xc787807c  lwc1        $f7, -0x7F84($gp)
    ctx->pc = 0x11f57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11f580: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x11f580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11f584: 0x773021  addu        $a2, $v1, $s7
    ctx->pc = 0x11f584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x11f588: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x11f588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f58c: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x11f58cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11f590: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x11f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11f594: 0x0  nop
    ctx->pc = 0x11f594u;
    // NOP
label_11f598:
    // 0x11f598: 0x50800046  beql        $a0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x11F598u;
    {
        const bool branch_taken_0x11f598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f598) {
            ctx->pc = 0x11F59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F598u;
            // 0x11f59c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F6B4u;
            goto label_11f6b4;
        }
    }
    ctx->pc = 0x11F5A0u;
    // 0x11f5a0: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F5A0u;
    {
        const bool branch_taken_0x11f5a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f5a0) {
            ctx->pc = 0x11F5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F5A0u;
            // 0x11f5a4: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F5B8u;
            goto label_11f5b8;
        }
    }
    ctx->pc = 0x11F5A8u;
    // 0x11f5a8: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x11f5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f5ac: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x11f5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x11f5b0: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x11f5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x11f5b4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x11f5b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_11f5b8:
    // 0x11f5b8: 0x461ab080  add.s       $f2, $f22, $f26
    ctx->pc = 0x11f5b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[26]);
    // 0x11f5bc: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x11f5bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11f5c0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x11f5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x11f5c4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x11f5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x11f5c8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x11f5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f5cc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x11f5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f5d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11f5d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11f5d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11f5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11f5d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11f5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11f5dc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11f5dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11f5e0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x11f5e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11f5e4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x11f5e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f5e8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x11f5e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f5ec: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x11f5ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f5f0: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x11f5f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x11f5f4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x11f5f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f5f8: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x11f5f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f5fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x11f5fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x11f600: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x11f600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f604: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x11f604u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11f608: 0x4618c8c0  add.s       $f3, $f25, $f24
    ctx->pc = 0x11f608u;
    ctx->f[3] = FPU_ADD_S(ctx->f[25], ctx->f[24]);
    // 0x11f60c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x11f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f610: 0xc4820080  lwc1        $f2, 0x80($a0)
    ctx->pc = 0x11f610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f614: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x11f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x11f618: 0xc4840058  lwc1        $f4, 0x58($a0)
    ctx->pc = 0x11f618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11f61c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x11f61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f620: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x11f620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x11f624: 0xc4850084  lwc1        $f5, 0x84($a0)
    ctx->pc = 0x11f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11f628: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x11f628u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11f62c: 0xc4860088  lwc1        $f6, 0x88($a0)
    ctx->pc = 0x11f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11f630: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11f630u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11f634: 0xe4820080  swc1        $f2, 0x80($a0)
    ctx->pc = 0x11f634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x11f638: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x11f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f63c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x11f63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11f640: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x11f640u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x11f644: 0xe4850084  swc1        $f5, 0x84($a0)
    ctx->pc = 0x11f644u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x11f648: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11f648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f64c: 0xe4840058  swc1        $f4, 0x58($a0)
    ctx->pc = 0x11f64cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x11f650: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x11f650u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11f654: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x11f654u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x11f658: 0xe4860088  swc1        $f6, 0x88($a0)
    ctx->pc = 0x11f658u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x11f65c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x11f65cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11f660: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x11f660u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11f664: 0xd9050010  lqc2        $vf5, 0x10($t0)
    ctx->pc = 0x11f664u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x11f668: 0xd9060020  lqc2        $vf6, 0x20($t0)
    ctx->pc = 0x11f668u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x11f66c: 0xd9070030  lqc2        $vf7, 0x30($t0)
    ctx->pc = 0x11f66cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x11f670: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x11f670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f674: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11f674u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f678: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x11f678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11f67c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x11f67cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x11f680: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x11f680u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11f684: 0x4617a880  add.s       $f2, $f21, $f23
    ctx->pc = 0x11f684u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x11f688: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x11f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11f68c: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x11f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f690: 0xc4830070  lwc1        $f3, 0x70($a0)
    ctx->pc = 0x11f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11f694: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x11f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f698: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11f698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11f69c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11f69cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11f6a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11f6a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11f6a4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x11f6a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11f6a8: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x11f6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x11f6ac: 0xe4830070  swc1        $f3, 0x70($a0)
    ctx->pc = 0x11f6acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x11f6b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11f6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11f6b4:
    // 0x11f6b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11f6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11f6b8: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x11f6b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x11f6bc: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x11f6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x11f6c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x11f6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11f6c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F6C4u;
    {
        const bool branch_taken_0x11f6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6C4u;
        // 0x11f6c8: 0x2d230005  sltiu       $v1, $t1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6c4) {
            ctx->pc = 0x11F6D8u;
            goto label_11f6d8;
        }
    }
    ctx->pc = 0x11F6CCu;
    // 0x11f6cc: 0x5460ffb2  bnel        $v1, $zero, . + 4 + (-0x4E << 2)
    ctx->pc = 0x11F6CCu;
    {
        const bool branch_taken_0x11f6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f6cc) {
            ctx->pc = 0x11F6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F6CCu;
            // 0x11f6d0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f598;
        }
    }
    ctx->pc = 0x11F6D4u;
label_11f6d4:
    // 0x11f6d4: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x11f6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_11f6d8:
    // 0x11f6d8: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x11F6D8u;
    {
        const bool branch_taken_0x11f6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6D8u;
        // 0x11f6dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6d8) {
            ctx->pc = 0x11F4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f4f8;
        }
    }
    ctx->pc = 0x11F6E0u;
label_11f6e0:
    // 0x11f6e0: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x11f6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x11f6e4: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x11f6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x11f6e8: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x11f6e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x11f6ec: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x11f6ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x11f6f0: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x11f6f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x11f6f4: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x11f6f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x11f6f8: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x11f6f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x11f6fc: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x11f6fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x11f700: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x11f700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x11f704: 0xc7ba01c8  lwc1        $f26, 0x1C8($sp)
    ctx->pc = 0x11f704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x11f708: 0xc7b901c0  lwc1        $f25, 0x1C0($sp)
    ctx->pc = 0x11f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x11f70c: 0xc7b801b8  lwc1        $f24, 0x1B8($sp)
    ctx->pc = 0x11f70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x11f710: 0xc7b701b0  lwc1        $f23, 0x1B0($sp)
    ctx->pc = 0x11f710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x11f714: 0xc7b601a8  lwc1        $f22, 0x1A8($sp)
    ctx->pc = 0x11f714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11f718: 0xc7b501a0  lwc1        $f21, 0x1A0($sp)
    ctx->pc = 0x11f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11f71c: 0xc7b40198  lwc1        $f20, 0x198($sp)
    ctx->pc = 0x11f71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f720: 0x3e00008  jr          $ra
    ctx->pc = 0x11F720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F720u;
        // 0x11f724: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F728u;
}
