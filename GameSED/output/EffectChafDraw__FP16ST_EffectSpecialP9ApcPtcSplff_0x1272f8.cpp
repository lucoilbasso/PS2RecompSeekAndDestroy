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

// Function: EffectChafDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x1272f8 - 0x1279d0
void EffectChafDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x1272f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectChafDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x1272f8");
#endif

    switch (ctx->pc) {
        case 0x1273b0u: goto label_1273b0;
        case 0x1273b8u: goto label_1273b8;
        case 0x1273dcu: goto label_1273dc;
        case 0x1275ccu: goto label_1275cc;
        case 0x1275e0u: goto label_1275e0;
        case 0x127764u: goto label_127764;
        case 0x127770u: goto label_127770;
        case 0x127790u: goto label_127790;
        case 0x127798u: goto label_127798;
        case 0x1277c0u: goto label_1277c0;
        case 0x127890u: goto label_127890;
        case 0x127898u: goto label_127898;
        case 0x1278b8u: goto label_1278b8;
        case 0x1278c0u: goto label_1278c0;
        case 0x1278e8u: goto label_1278e8;
        case 0x12794cu: goto label_12794c;
        case 0x127974u: goto label_127974;
        case 0x12797cu: goto label_12797c;
        case 0x127990u: goto label_127990;
        default: break;
    }

    ctx->pc = 0x1272f8u;

    // 0x1272f8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1272f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1272fc: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x1272fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x127300: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x127300u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127304: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x127304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x127308: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x127308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x12730c: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x12730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x127310: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x127310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x127314: 0x128001a6  beqz        $s4, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x127314u;
    {
        const bool branch_taken_0x127314 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x127318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127314u;
        // 0x127318: 0xffbf0118  sd          $ra, 0x118($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127314) {
            ctx->pc = 0x1279B0u;
            goto label_1279b0;
        }
    }
    ctx->pc = 0x12731Cu;
    // 0x12731c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x12731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x127320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127324: 0x546201a3  bnel        $v1, $v0, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x127324u;
    {
        const bool branch_taken_0x127324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127324) {
            ctx->pc = 0x127328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127324u;
            // 0x127328: 0xdfb000f0  ld          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1279B4u;
            goto label_1279b4;
        }
    }
    ctx->pc = 0x12732Cu;
    // 0x12732c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x12732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x127330: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x127330u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x127334: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x127334u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x127338: 0xa3a20082  sb          $v0, 0x82($sp)
    ctx->pc = 0x127338u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 130), (uint8_t)GPR_U32(ctx, 2));
    // 0x12733c: 0xa3a20081  sb          $v0, 0x81($sp)
    ctx->pc = 0x12733cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 2));
    // 0x127340: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x127340u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x127344: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x127344u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127348: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x127348u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12734c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12734cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127350: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x127350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x127354: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x127354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x127358: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x127358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12735c: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x12735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x127360: 0x8f8389d8  lw          $v1, -0x7628($gp)
    ctx->pc = 0x127360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x127364: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127368: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x127368u;
    {
        const bool branch_taken_0x127368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127368u;
        // 0x12736c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127368) {
            ctx->pc = 0x127498u;
            goto label_127498;
        }
    }
    ctx->pc = 0x127370u;
    // 0x127370: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x127370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x127374: 0xaf8089d8  sw          $zero, -0x7628($gp)
    ctx->pc = 0x127374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U32(ctx, 0));
    // 0x127378: 0x2451d650  addiu       $s1, $v0, -0x29B0
    ctx->pc = 0x127378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x12737c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12737cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127380: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x127380u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x127384: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127384u;
    {
        const bool branch_taken_0x127384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127384u;
        // 0x127388: 0xaf9189dc  sw          $s1, -0x7624($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127384) {
            ctx->pc = 0x1273A8u;
            goto label_1273a8;
        }
    }
    ctx->pc = 0x12738Cu;
    // 0x12738c: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x12738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x127390: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x127390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x127394: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x127394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x127398: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x127398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12739c: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x12739cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1273a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1273A0u;
    {
        const bool branch_taken_0x1273a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1273A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273A0u;
        // 0x1273a4: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273a0) {
            ctx->pc = 0x1273DCu;
            goto label_1273dc;
        }
    }
    ctx->pc = 0x1273A8u;
label_1273a8:
    // 0x1273a8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1273A8u;
    SET_GPR_U32(ctx, 31, 0x1273B0u);
    ctx->pc = 0x1273ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273A8u;
    // 0x1273ac: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1273A8u, 0x1273B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273B0u;
label_1273b0:
    // 0x1273b0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1273B0u;
    SET_GPR_U32(ctx, 31, 0x1273B8u);
    ctx->pc = 0x1273B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273B0u;
    // 0x1273b4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1273B0u, 0x1273B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273B8u;
label_1273b8:
    // 0x1273b8: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x1273b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1273bc: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1273bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1273c0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1273c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1273c4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1273c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1273c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1273c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1273cc: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x1273ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1273d0: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x1273d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x1273d4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1273D4u;
    SET_GPR_U32(ctx, 31, 0x1273DCu);
    ctx->pc = 0x1273D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273D4u;
    // 0x1273d8: 0xae25008c  sw          $a1, 0x8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1273D4u, 0x1273DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273DCu;
label_1273dc:
    // 0x1273dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1273dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1273e0: 0x278789e4  addiu       $a3, $gp, -0x761C
    ctx->pc = 0x1273e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937060));
    // 0x1273e4: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x1273e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x1273e8: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1273e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1273ec: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1273ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1273f0: 0x35088004  ori         $t0, $t0, 0x8004
    ctx->pc = 0x1273f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32772);
    // 0x1273f4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1273f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1273f8: 0xaf9089e0  sw          $s0, -0x7620($gp)
    ctx->pc = 0x1273f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 16));
    // 0x1273fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1273fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x127400: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x127400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127404: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x127404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127408: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x127408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12740c: 0xaf8389e4  sw          $v1, -0x761C($gp)
    ctx->pc = 0x12740cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 3));
    // 0x127410: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x127410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x127414: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x127414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x127418: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x127418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12741c: 0x3c090007  lui         $t1, 0x7
    ctx->pc = 0x12741cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)7 << 16));
    // 0x127420: 0x3529000d  ori         $t1, $t1, 0xD
    ctx->pc = 0x127420u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13);
    // 0x127424: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x127424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x127428: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x127428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x12742c: 0x240c004e  addiu       $t4, $zero, 0x4E
    ctx->pc = 0x12742cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x127430: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x127430u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x127434: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x127434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x127438: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x127438u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x12743c: 0x24480040  addiu       $t0, $v0, 0x40
    ctx->pc = 0x12743cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x127440: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x127440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x127444: 0x240d0044  addiu       $t5, $zero, 0x44
    ctx->pc = 0x127444u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x127448: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x127448u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x12744c: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x12744cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x127450: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x127450u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x127454: 0x240b0042  addiu       $t3, $zero, 0x42
    ctx->pc = 0x127454u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x127458: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x127458u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12745c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12745cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127460: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x127460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x127464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x127464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127468: 0xdf828c80  ld          $v0, -0x7380($gp)
    ctx->pc = 0x127468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x12746c: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x12746cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x127470: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x127470u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x127474: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x127474u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x127478: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x127478u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x12747c: 0xac6d0000  sw          $t5, 0x0($v1)
    ctx->pc = 0x12747cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 13));
    // 0x127480: 0xac6e0004  sw          $t6, 0x4($v1)
    ctx->pc = 0x127480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 14));
    // 0x127484: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x127484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127488: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x127488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x12748c: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x12748cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x127490: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x127490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x127494: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x127494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_127498:
    // 0x127498: 0x26830120  addiu       $v1, $s4, 0x120
    ctx->pc = 0x127498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x12749c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12749cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1274a0: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1274a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1274a4: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1274a4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1274a8: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1274a8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1274ac: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1274acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1274b0: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1274b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1274b4: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x1274b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1274b8: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x1274b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1274bc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1274bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1274c0: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x1274c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x1274c4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1274c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x1274c8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1274c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x1274cc: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1274ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x1274d0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1274d0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x1274d4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x1274d4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1274d8: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x1274d8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1274dc: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x1274dcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1274e0: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x1274e0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1274e4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1274e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1274e8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1274e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1274ec: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1274ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1274f0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1274f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1274f4: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x1274f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1274f8: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x1274f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1274fc: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x1274fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127500: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x127500u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x127504: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x127504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127508: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x127508u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12750c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12750cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127510: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x127510u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x127514: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x127514u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127518: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x127518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12751c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12751cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127520: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x127520u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x127524: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x127524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x127528: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x127528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12752c: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12752cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x127530: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x127530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x127534: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x127534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x127538: 0x2463ebf0  addiu       $v1, $v1, -0x1410
    ctx->pc = 0x127538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x12753c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12753cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBF0u));
    // 0x127540: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x127540u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC00u));
    // 0x127544: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x127544u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC10u));
    // 0x127548: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x127548u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC20u));
    // 0x12754c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12754cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127550: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x127550u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127554: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x127554u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127558: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x127558u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12755c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12755cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127560: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x127560u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127564: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x127564u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127568: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x127568u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12756c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12756cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127570: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x127570u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127574: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x127574u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127578: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x127578u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12757c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12757cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127580: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x127580u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127584: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x127584u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127588: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x127588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12758c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12758cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127590: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x127590u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127594: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x127594u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x127598: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x127598u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12759c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1275a0: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x1275a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x1275a4: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x1275a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x1275a8: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x1275a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x1275ac: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1275acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1275b0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1275b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1275b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1275b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1275b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275bc: 0x24c65db0  addiu       $a2, $a2, 0x5DB0
    ctx->pc = 0x1275bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23984));
    // 0x1275c0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1275c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1275c4: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x1275C4u;
    SET_GPR_U32(ctx, 31, 0x1275CCu);
    ctx->pc = 0x1275C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275C4u;
    // 0x1275c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x1275C4u, 0x1275CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275CCu;
label_1275cc:
    // 0x1275cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1275ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275d0: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x1275d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x1275d4: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x1275d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
    // 0x1275d8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1275d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1275dc: 0x0  nop
    ctx->pc = 0x1275dcu;
    // NOP
label_1275e0:
    // 0x1275e0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1275e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1275e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1275e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1275e8: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x1275e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x1275ec: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x1275ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x1275f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1275F0u;
    {
        const bool branch_taken_0x1275f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1275f0) {
            ctx->pc = 0x1275F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1275F0u;
            // 0x1275f4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127610u;
            goto label_127610;
        }
    }
    ctx->pc = 0x1275F8u;
    // 0x1275f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1275f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1275fc: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x1275fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x127600: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x127600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x127604: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x127604u;
    {
        const bool branch_taken_0x127604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127604) {
            ctx->pc = 0x127608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127604u;
            // 0x127608: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127618u;
            goto label_127618;
        }
    }
    ctx->pc = 0x12760Cu;
    // 0x12760c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_127610:
    // 0x127610: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x127610u;
    {
        const bool branch_taken_0x127610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127610u;
        // 0x127614: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127610) {
            ctx->pc = 0x127630u;
            goto label_127630;
        }
    }
    ctx->pc = 0x127618u;
label_127618:
    // 0x127618: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x127618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x12761c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x12761cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x127620: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127620u;
    {
        const bool branch_taken_0x127620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127620u;
        // 0x127624: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127620) {
            ctx->pc = 0x127634u;
            goto label_127634;
        }
    }
    ctx->pc = 0x127628u;
    // 0x127628: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x127628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12762c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_127630:
    // 0x127630: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x127630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_127634:
    // 0x127634: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x127634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x127638: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x127638u;
    {
        const bool branch_taken_0x127638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127638) {
            ctx->pc = 0x12763Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127638u;
            // 0x12763c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1275E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1275e0;
        }
    }
    ctx->pc = 0x127640u;
    // 0x127640: 0x5640006f  bnel        $s2, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x127640u;
    {
        const bool branch_taken_0x127640 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x127640) {
            ctx->pc = 0x127644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127640u;
            // 0x127644: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127800u;
            goto label_127800;
        }
    }
    ctx->pc = 0x127648u;
    // 0x127648: 0x278589e4  addiu       $a1, $gp, -0x761C
    ctx->pc = 0x127648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937060));
    // 0x12764c: 0x3c064002  lui         $a2, 0x4002
    ctx->pc = 0x12764cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16386 << 16));
    // 0x127650: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x127650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x127654: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x127654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x127658: 0x34c68001  ori         $a2, $a2, 0x8001
    ctx->pc = 0x127658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32769);
    // 0x12765c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x12765cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127660: 0x24074444  addiu       $a3, $zero, 0x4444
    ctx->pc = 0x127660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17476));
    // 0x127664: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x127664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127668: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x127668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12766c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x12766cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x127670: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x127670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x127674: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x127674u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x127678: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x127678u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x12767c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12767cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x127680: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x127680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127684: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x127684u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x127688: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x127688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12768c: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x12768cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127690: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x127690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127694: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x127694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x127698: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x127698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x12769c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x12769cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x1276a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1276a4: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x1276a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1276a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1276a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1276acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1276b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1276b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1276b4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1276b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1276b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1276b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1276bc: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x1276bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1276c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1276c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1276c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1276c8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1276c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1276cc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1276ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1276d0: 0x8f8589d8  lw          $a1, -0x7628($gp)
    ctx->pc = 0x1276d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x1276d4: 0x28a20029  slti        $v0, $a1, 0x29
    ctx->pc = 0x1276d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1276d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1276D8u;
    {
        const bool branch_taken_0x1276d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276D8u;
        // 0x1276dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276d8) {
            ctx->pc = 0x127704u;
            goto label_127704;
        }
    }
    ctx->pc = 0x1276E0u;
    // 0x1276e0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x1276e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1276e4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1276E4u;
    {
        const bool branch_taken_0x1276e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E4u;
        // 0x1276e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276e4) {
            ctx->pc = 0x127704u;
            goto label_127704;
        }
    }
    ctx->pc = 0x1276ECu;
    // 0x1276ec: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x1276ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x1276f0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1276F0u;
    {
        const bool branch_taken_0x1276f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1276F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276F0u;
        // 0x1276f4: 0x8f9089e0  lw          $s0, -0x7620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276f0) {
            ctx->pc = 0x127708u;
            goto label_127708;
        }
    }
    ctx->pc = 0x1276F8u;
    // 0x1276f8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1276f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1276fc: 0x104800ab  beq         $v0, $t0, . + 4 + (0xAB << 2)
    ctx->pc = 0x1276FCu;
    {
        const bool branch_taken_0x1276fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x127700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276FCu;
        // 0x127700: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276fc) {
            ctx->pc = 0x1279ACu;
            goto label_1279ac;
        }
    }
    ctx->pc = 0x127704u;
label_127704:
    // 0x127704: 0x8f9089e0  lw          $s0, -0x7620($gp)
    ctx->pc = 0x127704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
label_127708:
    // 0x127708: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x127708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x12770c: 0x8f8389e4  lw          $v1, -0x761C($gp)
    ctx->pc = 0x12770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x127710: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x127710u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x127714: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x127714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127718: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x127718u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12771c: 0x8f9189dc  lw          $s1, -0x7624($gp)
    ctx->pc = 0x12771cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x127720: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x127720u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127724: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x127728: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x127728u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12772c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x127730: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x127730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x127734: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x127734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x127738: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x127738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12773c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12773cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x127740: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x127740u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x127744: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x127744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127748: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x127748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x12774c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x127750: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x127750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127754: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x127754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x127758: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x127758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12775c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12775Cu;
    SET_GPR_U32(ctx, 31, 0x127764u);
    ctx->pc = 0x127760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12775Cu;
    // 0x127760: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12775Cu, 0x127764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127764u;
label_127764:
    // 0x127764: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x127764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x127768: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x127768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x12776c: 0x0  nop
    ctx->pc = 0x12776cu;
    // NOP
label_127770:
    // 0x127770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127774: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x127774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x127778: 0x0  nop
    ctx->pc = 0x127778u;
    // NOP
    // 0x12777c: 0x0  nop
    ctx->pc = 0x12777cu;
    // NOP
    // 0x127780: 0x0  nop
    ctx->pc = 0x127780u;
    // NOP
    // 0x127784: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127784u;
    {
        const bool branch_taken_0x127784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127784) {
            ctx->pc = 0x127770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127770;
        }
    }
    ctx->pc = 0x12778Cu;
    // 0x12778c: 0x0  nop
    ctx->pc = 0x12778cu;
    // NOP
label_127790:
    // 0x127790: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x127790u;
    SET_GPR_U32(ctx, 31, 0x127798u);
    ctx->pc = 0x127794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127790u;
    // 0x127794: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x127790u, 0x127798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127798u;
label_127798:
    // 0x127798: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x127798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12779c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12779Cu;
    {
        const bool branch_taken_0x12779c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1277A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12779Cu;
        // 0x1277a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12779c) {
            ctx->pc = 0x127790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127790;
        }
    }
    ctx->pc = 0x1277A4u;
    // 0x1277a4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1277a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1277a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1277a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1277ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1277ACu;
    {
        const bool branch_taken_0x1277ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1277B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277ACu;
        // 0x1277b0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277ac) {
            ctx->pc = 0x1277C0u;
            goto label_1277c0;
        }
    }
    ctx->pc = 0x1277B4u;
    // 0x1277b4: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x1277b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x1277b8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1277B8u;
    SET_GPR_U32(ctx, 31, 0x1277C0u);
    ctx->pc = 0x1277BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277B8u;
    // 0x1277bc: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1277B8u, 0x1277C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277C0u;
label_1277c0:
    // 0x1277c0: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1277c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1277c4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1277c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1277c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1277c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1277cc: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1277ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1277d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1277d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1277d4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1277d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1277d8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1277d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1277dc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1277dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1277e0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1277e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1277e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1277e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1277e8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1277e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x1277ec: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1277ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1277f0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1277f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1277f4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1277F4u;
    {
        const bool branch_taken_0x1277f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277F4u;
        // 0x1277f8: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277f4) {
            ctx->pc = 0x127920u;
            goto label_127920;
        }
    }
    ctx->pc = 0x1277FCu;
    // 0x1277fc: 0x0  nop
    ctx->pc = 0x1277fcu;
    // NOP
label_127800:
    // 0x127800: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127800u;
    {
        const bool branch_taken_0x127800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127800u;
        // 0x127804: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127800) {
            ctx->pc = 0x127824u;
            goto label_127824;
        }
    }
    ctx->pc = 0x127808u;
    // 0x127808: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x127808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x12780c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12780Cu;
    {
        const bool branch_taken_0x12780c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x127810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12780Cu;
        // 0x127810: 0x8f8289d8  lw          $v0, -0x7628($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12780c) {
            ctx->pc = 0x127828u;
            goto label_127828;
        }
    }
    ctx->pc = 0x127814u;
    // 0x127814: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x127814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x127818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12781c: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x12781Cu;
    {
        const bool branch_taken_0x12781c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x127820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12781Cu;
        // 0x127820: 0xdfb000f0  ld          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12781c) {
            ctx->pc = 0x1279B4u;
            goto label_1279b4;
        }
    }
    ctx->pc = 0x127824u;
label_127824:
    // 0x127824: 0x8f8289d8  lw          $v0, -0x7628($gp)
    ctx->pc = 0x127824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
label_127828:
    // 0x127828: 0x18400043  blez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x127828u;
    {
        const bool branch_taken_0x127828 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127828u;
        // 0x12782c: 0x8f9089dc  lw          $s0, -0x7624($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127828) {
            ctx->pc = 0x127938u;
            goto label_127938;
        }
    }
    ctx->pc = 0x127830u;
    // 0x127830: 0x8f9089e0  lw          $s0, -0x7620($gp)
    ctx->pc = 0x127830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x127834: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x127834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x127838: 0x8f8389e4  lw          $v1, -0x761C($gp)
    ctx->pc = 0x127838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x12783c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12783cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x127840: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x127840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127844: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x127844u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x127848: 0x8f9189dc  lw          $s1, -0x7624($gp)
    ctx->pc = 0x127848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x12784c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12784cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127850: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x127850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x127854: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x127854u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x127858: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x127858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12785c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x12785cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x127860: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x127860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x127864: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x127864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x127868: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x127868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12786c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12786cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x127870: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x127870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127874: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x127874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x127878: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x127878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12787c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127880: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x127880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x127884: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x127884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x127888: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x127888u;
    SET_GPR_U32(ctx, 31, 0x127890u);
    ctx->pc = 0x12788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127888u;
    // 0x12788c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x127888u, 0x127890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127890u;
label_127890:
    // 0x127890: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x127890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x127894: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x127894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_127898:
    // 0x127898: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12789c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1278a0: 0x0  nop
    ctx->pc = 0x1278a0u;
    // NOP
    // 0x1278a4: 0x0  nop
    ctx->pc = 0x1278a4u;
    // NOP
    // 0x1278a8: 0x0  nop
    ctx->pc = 0x1278a8u;
    // NOP
    // 0x1278ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1278ACu;
    {
        const bool branch_taken_0x1278ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1278ac) {
            ctx->pc = 0x127898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127898;
        }
    }
    ctx->pc = 0x1278B4u;
    // 0x1278b4: 0x0  nop
    ctx->pc = 0x1278b4u;
    // NOP
label_1278b8:
    // 0x1278b8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1278B8u;
    SET_GPR_U32(ctx, 31, 0x1278C0u);
    ctx->pc = 0x1278BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278B8u;
    // 0x1278bc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1278B8u, 0x1278C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278C0u;
label_1278c0:
    // 0x1278c0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x1278c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x1278c4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1278C4u;
    {
        const bool branch_taken_0x1278c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1278C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278C4u;
        // 0x1278c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278c4) {
            ctx->pc = 0x1278B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1278b8;
        }
    }
    ctx->pc = 0x1278CCu;
    // 0x1278cc: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1278ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1278d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1278d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1278d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1278D4u;
    {
        const bool branch_taken_0x1278d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1278D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278D4u;
        // 0x1278d8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278d4) {
            ctx->pc = 0x1278E8u;
            goto label_1278e8;
        }
    }
    ctx->pc = 0x1278DCu;
    // 0x1278dc: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x1278dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x1278e0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1278E0u;
    SET_GPR_U32(ctx, 31, 0x1278E8u);
    ctx->pc = 0x1278E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278E0u;
    // 0x1278e4: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1278E0u, 0x1278E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278E8u;
label_1278e8:
    // 0x1278e8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1278e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1278ec: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1278ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1278f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1278f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1278f4: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1278f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1278f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1278f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1278fc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1278fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x127900: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x127900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x127904: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x127904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127908: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x127908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x12790c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12790cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x127910: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x127910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x127914: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x127914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x127918: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x127918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x12791c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x12791cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_127920:
    // 0x127920: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x127920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x127924: 0xaf8789d8  sw          $a3, -0x7628($gp)
    ctx->pc = 0x127924u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U32(ctx, 7));
    // 0x127928: 0xaf8089e4  sw          $zero, -0x761C($gp)
    ctx->pc = 0x127928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 0));
    // 0x12792c: 0xaf8089dc  sw          $zero, -0x7624($gp)
    ctx->pc = 0x12792cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 0));
    // 0x127930: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x127930u;
    {
        const bool branch_taken_0x127930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127930u;
        // 0x127934: 0xaf8089e0  sw          $zero, -0x7620($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127930) {
            ctx->pc = 0x1279B0u;
            goto label_1279b0;
        }
    }
    ctx->pc = 0x127938u;
label_127938:
    // 0x127938: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x127938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x12793c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12793Cu;
    {
        const bool branch_taken_0x12793c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12793Cu;
        // 0x127940: 0x8f9189e0  lw          $s1, -0x7620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12793c) {
            ctx->pc = 0x127988u;
            goto label_127988;
        }
    }
    ctx->pc = 0x127944u;
    // 0x127944: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x127944u;
    SET_GPR_U32(ctx, 31, 0x12794Cu);
    ctx->pc = 0x127948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127944u;
    // 0x127948: 0x8e040088  lw          $a0, 0x88($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x127944u, 0x12794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12794Cu;
label_12794c:
    // 0x12794c: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x12794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x127950: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x127950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x127954: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x127954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x127958: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x127958u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12795c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x12795cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x127960: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x127960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x127964: 0xae11008c  sw          $s1, 0x8C($s0)
    ctx->pc = 0x127964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 17));
    // 0x127968: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x127968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
    // 0x12796c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12796Cu;
    SET_GPR_U32(ctx, 31, 0x127974u);
    ctx->pc = 0x127970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12796Cu;
    // 0x127970: 0x8e040088  lw          $a0, 0x88($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12796Cu, 0x127974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127974u;
label_127974:
    // 0x127974: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x127974u;
    SET_GPR_U32(ctx, 31, 0x12797Cu);
    ctx->pc = 0x127978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127974u;
    // 0x127978: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x127974u, 0x12797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12797Cu;
label_12797c:
    // 0x12797c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12797Cu;
    {
        const bool branch_taken_0x12797c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12797Cu;
        // 0x127980: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12797c) {
            ctx->pc = 0x1279ACu;
            goto label_1279ac;
        }
    }
    ctx->pc = 0x127984u;
    // 0x127984: 0x0  nop
    ctx->pc = 0x127984u;
    // NOP
label_127988:
    // 0x127988: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x127988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12798c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12798cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_127990:
    // 0x127990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127994: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x127994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x127998: 0x0  nop
    ctx->pc = 0x127998u;
    // NOP
    // 0x12799c: 0x0  nop
    ctx->pc = 0x12799cu;
    // NOP
    // 0x1279a0: 0x0  nop
    ctx->pc = 0x1279a0u;
    // NOP
    // 0x1279a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1279A4u;
    {
        const bool branch_taken_0x1279a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1279A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279A4u;
        // 0x1279a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279a4) {
            ctx->pc = 0x127990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127990;
        }
    }
    ctx->pc = 0x1279ACu;
label_1279ac:
    // 0x1279ac: 0xaf8289d8  sw          $v0, -0x7628($gp)
    ctx->pc = 0x1279acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U32(ctx, 2));
label_1279b0:
    // 0x1279b0: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x1279b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1279b4:
    // 0x1279b4: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x1279b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1279b8: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x1279b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1279bc: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x1279bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1279c0: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x1279c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1279c4: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x1279c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1279c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1279C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1279CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279C8u;
        // 0x1279cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1279C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1279D0u;
}
