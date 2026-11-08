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

// Function: LineDataSetInit__13ST_EffectLinePUiP10WImageInfo
// Address: 0x12c720 - 0x12cb40
void LineDataSetInit__13ST_EffectLinePUiP10WImageInfo_0x12c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LineDataSetInit__13ST_EffectLinePUiP10WImageInfo_0x12c720");
#endif

    switch (ctx->pc) {
        case 0x12c74cu: goto label_12c74c;
        case 0x12c764u: goto label_12c764;
        case 0x12c808u: goto label_12c808;
        case 0x12c82cu: goto label_12c82c;
        case 0x12c850u: goto label_12c850;
        case 0x12c874u: goto label_12c874;
        case 0x12c8f4u: goto label_12c8f4;
        case 0x12c974u: goto label_12c974;
        case 0x12c988u: goto label_12c988;
        case 0x12c9acu: goto label_12c9ac;
        case 0x12c9d0u: goto label_12c9d0;
        case 0x12c9f4u: goto label_12c9f4;
        case 0x12ca5cu: goto label_12ca5c;
        case 0x12cab4u: goto label_12cab4;
        case 0x12cac4u: goto label_12cac4;
        case 0x12caf4u: goto label_12caf4;
        default: break;
    }

    ctx->pc = 0x12c720u;

    // 0x12c720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12c724: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12c728: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12c728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c72c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12c72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12c730: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12c730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c734: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12c738: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12c738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c73c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12c73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12c740: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12c740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12c744: 0xc0478ea  jal         func_11E3A8
    ctx->pc = 0x12C744u;
    SET_GPR_U32(ctx, 31, 0x12C74Cu);
    ctx->pc = 0x12C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C744u;
    // 0x12c748: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E3A8u, 0x12C744u, 0x12C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C74Cu;
label_12c74c:
    // 0x12c74c: 0x120000f4  beqz        $s0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x12C74Cu;
    {
        const bool branch_taken_0x12c74c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C74Cu;
        // 0x12c750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c74c) {
            ctx->pc = 0x12CB20u;
            goto label_12cb20;
        }
    }
    ctx->pc = 0x12C754u;
    // 0x12c754: 0xae300104  sw          $s0, 0x104($s1)
    ctx->pc = 0x12c754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 16));
    // 0x12c758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c75c: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C75Cu;
    SET_GPR_U32(ctx, 31, 0x12C764u);
    ctx->pc = 0x12C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C75Cu;
    // 0x12c760: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C75Cu, 0x12C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C764u;
label_12c764:
    // 0x12c764: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x12C764u;
    {
        const bool branch_taken_0x12c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C764u;
        // 0x12c768: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c764) {
            ctx->pc = 0x12C8D8u;
            goto label_12c8d8;
        }
    }
    ctx->pc = 0x12C76Cu;
    // 0x12c76c: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x12c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x12c770: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c774: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12c774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12c778: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12C778u;
    {
        const bool branch_taken_0x12c778 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c778) {
            ctx->pc = 0x12C77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C778u;
            // 0x12c77c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C7A0u;
            goto label_12c7a0;
        }
    }
    ctx->pc = 0x12C780u;
    // 0x12c780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c788: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x12c788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x12c78c: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x12c78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x12c790: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x12c790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
    // 0x12c794: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12C794u;
    {
        const bool branch_taken_0x12c794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C794u;
        // 0x12c798: 0xe6200110  swc1        $f0, 0x110($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c794) {
            ctx->pc = 0x12C7FCu;
            goto label_12c7fc;
        }
    }
    ctx->pc = 0x12C79Cu;
    // 0x12c79c: 0x0  nop
    ctx->pc = 0x12c79cu;
    // NOP
label_12c7a0:
    // 0x12c7a0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c7a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c7a4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c7a4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c7a8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c7a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c7ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c7b0: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x12c7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x12c7b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12c7b8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c7b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c7bc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c7bcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c7c0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c7c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c7c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c7c8: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x12c7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x12c7cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x12c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12c7d0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c7d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c7d4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c7d4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c7d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c7d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c7e0: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x12c7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x12c7e4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12c7e8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c7e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c7ec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c7ecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c7f0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c7f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c7f8: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x12c7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
label_12c7fc:
    // 0x12c7fc: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x12c7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12c800: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C800u;
    SET_GPR_U32(ctx, 31, 0x12C808u);
    ctx->pc = 0x12C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C800u;
    // 0x12c804: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C800u, 0x12C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C808u;
label_12c808:
    // 0x12c808: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12c808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12c80c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c810: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c810u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c814: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c814u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c818: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c818u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c81c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c820: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x12c820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x12c824: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C824u;
    SET_GPR_U32(ctx, 31, 0x12C82Cu);
    ctx->pc = 0x12C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C824u;
    // 0x12c828: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C824u, 0x12C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C82Cu;
label_12c82c:
    // 0x12c82c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12c830: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c834: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c838: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c838u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c83c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c83cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c844: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x12c844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x12c848: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C848u;
    SET_GPR_U32(ctx, 31, 0x12C850u);
    ctx->pc = 0x12C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C848u;
    // 0x12c84c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C848u, 0x12C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C850u;
label_12c850:
    // 0x12c850: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12c850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12c854: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c858: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c858u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c85c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c85cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c860: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c860u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c868: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x12c868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x12c86c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C86Cu;
    SET_GPR_U32(ctx, 31, 0x12C874u);
    ctx->pc = 0x12C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C86Cu;
    // 0x12c870: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C86Cu, 0x12C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C874u;
label_12c874:
    // 0x12c874: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x12c874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12c878: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c87c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c87cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c880: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c880u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c884: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c884u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c88c: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x12c88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x12c890: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x12c890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x12c894: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c894u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c898: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c898u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c89c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c89cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c8a4: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x12c8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x12c8a8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x12c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12c8ac: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c8acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c8b0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c8b0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c8b4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c8b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c8bc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x12c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12c8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c8c4: 0xe6200138  swc1        $f0, 0x138($s1)
    ctx->pc = 0x12c8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x12c8c8: 0xae240120  sw          $a0, 0x120($s1)
    ctx->pc = 0x12c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 4));
    // 0x12c8cc: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x12C8CCu;
    {
        const bool branch_taken_0x12c8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8CCu;
        // 0x12c8d0: 0xae2000cc  sw          $zero, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8cc) {
            ctx->pc = 0x12CB20u;
            goto label_12cb20;
        }
    }
    ctx->pc = 0x12C8D4u;
    // 0x12c8d4: 0x0  nop
    ctx->pc = 0x12c8d4u;
    // NOP
label_12c8d8:
    // 0x12c8d8: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x12c8d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x12c8dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12c8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12c8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12c8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8e8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12c8e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12c8ec: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x12C8ECu;
    SET_GPR_U32(ctx, 31, 0x12C8F4u);
    ctx->pc = 0x12C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8ECu;
    // 0x12c8f0: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x12C8ECu, 0x12C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8F4u;
label_12c8f4:
    // 0x12c8f4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12c8f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c8f8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x12C8F8u;
    {
        const bool branch_taken_0x12c8f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8F8u;
        // 0x12c8fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8f8) {
            ctx->pc = 0x12C96Cu;
            goto label_12c96c;
        }
    }
    ctx->pc = 0x12C900u;
    // 0x12c900: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12c900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c904: 0xae2400c8  sw          $a0, 0xC8($s1)
    ctx->pc = 0x12c904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 4));
    // 0x12c908: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12c90c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c90cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c910: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c910u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c914: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c914u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c91c: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x12c91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x12c920: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12c924: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c924u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c928: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c928u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c92c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c92cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c934: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x12c934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x12c938: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x12c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12c93c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c93cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c940: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c940u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c944: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c944u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c94c: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x12c94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x12c950: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12c954: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c954u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c958: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c958u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c95c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c95cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c964: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x12c964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x12c968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c96c:
    // 0x12c96c: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C96Cu;
    SET_GPR_U32(ctx, 31, 0x12C974u);
    ctx->pc = 0x12C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C96Cu;
    // 0x12c970: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C96Cu, 0x12C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C974u;
label_12c974:
    // 0x12c974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12c974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c978: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x12C978u;
    {
        const bool branch_taken_0x12c978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C978u;
        // 0x12c97c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c978) {
            ctx->pc = 0x12CA48u;
            goto label_12ca48;
        }
    }
    ctx->pc = 0x12C980u;
    // 0x12c980: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C980u;
    SET_GPR_U32(ctx, 31, 0x12C988u);
    ctx->pc = 0x12C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C980u;
    // 0x12c984: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C980u, 0x12C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C988u;
label_12c988:
    // 0x12c988: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12c988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12c98c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c990: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c990u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c994: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c994u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c998: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c998u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c9a0: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x12c9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x12c9a4: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C9A4u;
    SET_GPR_U32(ctx, 31, 0x12C9ACu);
    ctx->pc = 0x12C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9A4u;
    // 0x12c9a8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C9A4u, 0x12C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9ACu;
label_12c9ac:
    // 0x12c9ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12c9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12c9b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c9b4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c9b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c9b8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c9b8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c9bc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c9bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c9c4: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x12c9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x12c9c8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C9C8u;
    SET_GPR_U32(ctx, 31, 0x12C9D0u);
    ctx->pc = 0x12C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9C8u;
    // 0x12c9cc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C9C8u, 0x12C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9D0u;
label_12c9d0:
    // 0x12c9d0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12c9d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c9d8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c9d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c9dc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c9dcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c9e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c9e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c9e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c9e8: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x12c9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x12c9ec: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C9ECu;
    SET_GPR_U32(ctx, 31, 0x12C9F4u);
    ctx->pc = 0x12C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9ECu;
    // 0x12c9f0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C9ECu, 0x12C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9F4u;
label_12c9f4:
    // 0x12c9f4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x12c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12c9f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c9fc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c9fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12ca00: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12ca00u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ca04: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12ca04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ca08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12ca08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ca0c: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x12ca0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x12ca10: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x12ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x12ca14: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12ca14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12ca18: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12ca18u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ca1c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12ca1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ca20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12ca20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ca24: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x12ca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x12ca28: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x12ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12ca2c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12ca2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12ca30: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12ca30u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ca34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12ca34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ca38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12ca38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ca3c: 0xe6200138  swc1        $f0, 0x138($s1)
    ctx->pc = 0x12ca3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x12ca40: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x12CA40u;
    {
        const bool branch_taken_0x12ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA40u;
        // 0x12ca44: 0xae2000cc  sw          $zero, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca40) {
            ctx->pc = 0x12CAE8u;
            goto label_12cae8;
        }
    }
    ctx->pc = 0x12CA48u;
label_12ca48:
    // 0x12ca48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12ca48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12ca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12ca50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca54: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x12CA54u;
    SET_GPR_U32(ctx, 31, 0x12CA5Cu);
    ctx->pc = 0x12CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA54u;
    // 0x12ca58: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x12CA54u, 0x12CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA5Cu;
label_12ca5c:
    // 0x12ca5c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12ca5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ca60: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x12CA60u;
    {
        const bool branch_taken_0x12ca60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA60u;
        // 0x12ca64: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca60) {
            ctx->pc = 0x12CAA8u;
            goto label_12caa8;
        }
    }
    ctx->pc = 0x12CA68u;
    // 0x12ca68: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ca6c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x12ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12ca70: 0xae2400cc  sw          $a0, 0xCC($s1)
    ctx->pc = 0x12ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 4));
    // 0x12ca74: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x12ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x12ca78: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12ca7c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12ca7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12ca80: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12ca80u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ca84: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12ca84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ca88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12ca88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ca8c: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x12ca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x12ca90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12ca94: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12ca94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12ca98: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12ca98u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ca9c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12ca9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12caa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12caa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12caa4: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x12caa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
label_12caa8:
    // 0x12caa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12caa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caac: 0xc04844a  jal         func_121128
    ctx->pc = 0x12CAACu;
    SET_GPR_U32(ctx, 31, 0x12CAB4u);
    ctx->pc = 0x12CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAACu;
    // 0x12cab0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12CAACu, 0x12CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAB4u;
label_12cab4:
    // 0x12cab4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12CAB4u;
    {
        const bool branch_taken_0x12cab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAB4u;
        // 0x12cab8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cab4) {
            ctx->pc = 0x12CAE8u;
            goto label_12cae8;
        }
    }
    ctx->pc = 0x12CABCu;
    // 0x12cabc: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12CABCu;
    SET_GPR_U32(ctx, 31, 0x12CAC4u);
    ctx->pc = 0x12CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CABCu;
    // 0x12cac0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12CABCu, 0x12CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAC4u;
label_12cac4:
    // 0x12cac4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12cac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cac8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12cac8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12cacc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12caccu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12cad0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12cad0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12cad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cad8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12cad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12cadc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12cadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12cae0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12cae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12cae4: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x12cae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
label_12cae8:
    // 0x12cae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12cae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caec: 0xc04844a  jal         func_121128
    ctx->pc = 0x12CAECu;
    SET_GPR_U32(ctx, 31, 0x12CAF4u);
    ctx->pc = 0x12CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAECu;
    // 0x12caf0: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12CAECu, 0x12CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAF4u;
label_12caf4:
    // 0x12caf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12caf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caf8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CAF8u;
    {
        const bool branch_taken_0x12caf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAF8u;
        // 0x12cafc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12caf8) {
            ctx->pc = 0x12CB08u;
            goto label_12cb08;
        }
    }
    ctx->pc = 0x12CB00u;
    // 0x12cb00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12CB00u;
    {
        const bool branch_taken_0x12cb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB00u;
        // 0x12cb04: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb00) {
            ctx->pc = 0x12CB1Cu;
            goto label_12cb1c;
        }
    }
    ctx->pc = 0x12CB08u;
label_12cb08:
    // 0x12cb08: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x12cb08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12cb0c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x12cb0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12cb10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x12cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x12cb14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12cb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12cb18: 0xae230120  sw          $v1, 0x120($s1)
    ctx->pc = 0x12cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 3));
label_12cb1c:
    // 0x12cb1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cb20:
    // 0x12cb20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12cb20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cb24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12cb24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cb28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12cb28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cb2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12cb2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cb30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12cb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12cb34: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x12cb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12cb38: 0x3e00008  jr          $ra
    ctx->pc = 0x12CB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB38u;
        // 0x12cb3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CB40u;
}
