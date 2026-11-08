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

// Function: SpriteDataSetInit__15ST_EffectSpritePUiP10WImageInfo
// Address: 0x121780 - 0x121be0
void SpriteDataSetInit__15ST_EffectSpritePUiP10WImageInfo_0x121780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpriteDataSetInit__15ST_EffectSpritePUiP10WImageInfo_0x121780");
#endif

    switch (ctx->pc) {
        case 0x1217b4u: goto label_1217b4;
        case 0x1217c0u: goto label_1217c0;
        case 0x1217e4u: goto label_1217e4;
        case 0x1217f4u: goto label_1217f4;
        case 0x121820u: goto label_121820;
        case 0x1218acu: goto label_1218ac;
        case 0x1218d0u: goto label_1218d0;
        case 0x1218f4u: goto label_1218f4;
        case 0x121920u: goto label_121920;
        case 0x121954u: goto label_121954;
        case 0x121968u: goto label_121968;
        case 0x12199cu: goto label_12199c;
        case 0x1219c0u: goto label_1219c0;
        case 0x1219e4u: goto label_1219e4;
        case 0x121ac0u: goto label_121ac0;
        case 0x121ad0u: goto label_121ad0;
        case 0x121b08u: goto label_121b08;
        default: break;
    }

    ctx->pc = 0x121780u;

    // 0x121780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x121780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x121784: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x121784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x121788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x121788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12178c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x121790: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x121790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121794: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x121794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x121798: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x121798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12179c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1217a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1217a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1217a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1217a8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1217a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1217ac: 0xc0478ea  jal         func_11E3A8
    ctx->pc = 0x1217ACu;
    SET_GPR_U32(ctx, 31, 0x1217B4u);
    ctx->pc = 0x1217B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217ACu;
    // 0x1217b0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E3A8u, 0x1217ACu, 0x1217B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217B4u;
label_1217b4:
    // 0x1217b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1217b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217b8: 0xc04844a  jal         func_121128
    ctx->pc = 0x1217B8u;
    SET_GPR_U32(ctx, 31, 0x1217C0u);
    ctx->pc = 0x1217BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217B8u;
    // 0x1217bc: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1217B8u, 0x1217C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217C0u;
label_1217c0:
    // 0x1217c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1217C0u;
    {
        const bool branch_taken_0x1217c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217C0u;
        // 0x1217c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217c0) {
            ctx->pc = 0x1217D8u;
            goto label_1217d8;
        }
    }
    ctx->pc = 0x1217C8u;
    // 0x1217c8: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1217c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1217cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1217CCu;
    {
        const bool branch_taken_0x1217cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217CCu;
        // 0x1217d0: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217cc) {
            ctx->pc = 0x1217F8u;
            goto label_1217f8;
        }
    }
    ctx->pc = 0x1217D4u;
    // 0x1217d4: 0x0  nop
    ctx->pc = 0x1217d4u;
    // NOP
label_1217d8:
    // 0x1217d8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1217d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1217dc: 0xc04844a  jal         func_121128
    ctx->pc = 0x1217DCu;
    SET_GPR_U32(ctx, 31, 0x1217E4u);
    ctx->pc = 0x1217E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217DCu;
    // 0x1217e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1217DCu, 0x1217E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217E4u;
label_1217e4:
    // 0x1217e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1217e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217e8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1217e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1217ec: 0xc04844a  jal         func_121128
    ctx->pc = 0x1217ECu;
    SET_GPR_U32(ctx, 31, 0x1217F4u);
    ctx->pc = 0x1217F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217ECu;
    // 0x1217f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1217ECu, 0x1217F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217F4u;
label_1217f4:
    // 0x1217f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1217f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1217f8:
    // 0x1217f8: 0x128000f0  beqz        $s4, . + 4 + (0xF0 << 2)
    ctx->pc = 0x1217F8u;
    {
        const bool branch_taken_0x1217f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217F8u;
        // 0x1217fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217f8) {
            ctx->pc = 0x121BBCu;
            goto label_121bbc;
        }
    }
    ctx->pc = 0x121800u;
    // 0x121800: 0xae1400d0  sw          $s4, 0xD0($s0)
    ctx->pc = 0x121800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 20));
    // 0x121804: 0x27b40004  addiu       $s4, $sp, 0x4
    ctx->pc = 0x121804u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x121808: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12180c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12180cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121810: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x121810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121814: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x121814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121818: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x121818u;
    SET_GPR_U32(ctx, 31, 0x121820u);
    ctx->pc = 0x12181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121818u;
    // 0x12181c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x121818u, 0x121820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121820u;
label_121820:
    // 0x121820: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x121820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121824: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x121824u;
    {
        const bool branch_taken_0x121824 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121824u;
        // 0x121828: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121824) {
            ctx->pc = 0x12189Cu;
            goto label_12189c;
        }
    }
    ctx->pc = 0x12182Cu;
    // 0x12182c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12182cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121830: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x121830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x121834: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x121834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
    // 0x121838: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x121838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x12183c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121840: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121840u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121844: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121844u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121848: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121848u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12184c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12184cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121850: 0xe6000140  swc1        $f0, 0x140($s0)
    ctx->pc = 0x121850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x121854: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121858: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121858u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12185c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12185cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121860: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121860u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121868: 0xe6000144  swc1        $f0, 0x144($s0)
    ctx->pc = 0x121868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x12186c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x12186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121870: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121870u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121874: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121874u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121878: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121878u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12187c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12187cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121880: 0xe6000148  swc1        $f0, 0x148($s0)
    ctx->pc = 0x121880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x121884: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x121884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121888: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121888u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12188c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12188cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121890: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121890u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121898: 0xe600014c  swc1        $f0, 0x14C($s0)
    ctx->pc = 0x121898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 332), bits); }
label_12189c:
    // 0x12189c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x12189Cu;
    {
        const bool branch_taken_0x12189c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1218A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12189Cu;
        // 0x1218a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12189c) {
            ctx->pc = 0x121910u;
            goto label_121910;
        }
    }
    ctx->pc = 0x1218A4u;
    // 0x1218a4: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1218A4u;
    SET_GPR_U32(ctx, 31, 0x1218ACu);
    ctx->pc = 0x1218A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218A4u;
    // 0x1218a8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1218A4u, 0x1218ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218ACu;
label_1218ac:
    // 0x1218ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1218acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1218b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1218b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1218b4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1218b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1218b8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1218b8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1218bc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1218bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1218c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1218c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1218c4: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1218c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1218c8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1218C8u;
    SET_GPR_U32(ctx, 31, 0x1218D0u);
    ctx->pc = 0x1218CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218C8u;
    // 0x1218cc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1218C8u, 0x1218D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218D0u;
label_1218d0:
    // 0x1218d0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1218d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1218d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1218d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1218d8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1218d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1218dc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1218dcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1218e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1218e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1218e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1218e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1218e8: 0xe6000170  swc1        $f0, 0x170($s0)
    ctx->pc = 0x1218e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
    // 0x1218ec: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1218ECu;
    SET_GPR_U32(ctx, 31, 0x1218F4u);
    ctx->pc = 0x1218F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218ECu;
    // 0x1218f0: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1218ECu, 0x1218F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218F4u;
label_1218f4:
    // 0x1218f4: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x1218f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x1218f8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1218F8u;
    {
        const bool branch_taken_0x1218f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1218f8) {
            ctx->pc = 0x1219B0u;
            goto label_1219b0;
        }
    }
    ctx->pc = 0x121900u;
    // 0x121900: 0xc6000170  lwc1        $f0, 0x170($s0)
    ctx->pc = 0x121900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121904: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x121904u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x121908: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x121908u;
    {
        const bool branch_taken_0x121908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121908u;
        // 0x12190c: 0xe6000170  swc1        $f0, 0x170($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121908) {
            ctx->pc = 0x1219B0u;
            goto label_1219b0;
        }
    }
    ctx->pc = 0x121910u;
label_121910:
    // 0x121910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121914: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x121914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121918: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x121918u;
    SET_GPR_U32(ctx, 31, 0x121920u);
    ctx->pc = 0x12191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121918u;
    // 0x12191c: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x121918u, 0x121920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121920u;
label_121920:
    // 0x121920: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x121920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121924: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x121924u;
    {
        const bool branch_taken_0x121924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121924u;
        // 0x121928: 0xe60000ec  swc1        $f0, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121924) {
            ctx->pc = 0x121948u;
            goto label_121948;
        }
    }
    ctx->pc = 0x12192Cu;
    // 0x12192c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121930: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x121930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x121934: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x121934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12193c: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x12193cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x121940: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x121940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x121944: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x121944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_121948:
    // 0x121948: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x121948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12194c: 0xc04844a  jal         func_121128
    ctx->pc = 0x12194Cu;
    SET_GPR_U32(ctx, 31, 0x121954u);
    ctx->pc = 0x121950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12194Cu;
    // 0x121950: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12194Cu, 0x121954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121954u;
label_121954:
    // 0x121954: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x121954u;
    {
        const bool branch_taken_0x121954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121954u;
        // 0x121958: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121954) {
            ctx->pc = 0x1219B0u;
            goto label_1219b0;
        }
    }
    ctx->pc = 0x12195Cu;
    // 0x12195c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x121960: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x121960u;
    SET_GPR_U32(ctx, 31, 0x121968u);
    ctx->pc = 0x121964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121960u;
    // 0x121964: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x121960u, 0x121968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121968u;
label_121968:
    // 0x121968: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x121968u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12196c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12196cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121970: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121970u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121974: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121974u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12197c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121980: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121988: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x121988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12198c: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12198Cu;
    {
        const bool branch_taken_0x12198c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x121990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12198Cu;
        // 0x121990: 0xe60000f0  swc1        $f0, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12198c) {
            ctx->pc = 0x1219B0u;
            goto label_1219b0;
        }
    }
    ctx->pc = 0x121994u;
    // 0x121994: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x121994u;
    SET_GPR_U32(ctx, 31, 0x12199Cu);
    ctx->pc = 0x121998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121994u;
    // 0x121998: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x121994u, 0x12199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12199Cu;
label_12199c:
    // 0x12199c: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12199Cu;
    {
        const bool branch_taken_0x12199c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x12199c) {
            ctx->pc = 0x1219B0u;
            goto label_1219b0;
        }
    }
    ctx->pc = 0x1219A4u;
    // 0x1219a4: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x1219a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1219a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1219a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1219ac: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1219acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
label_1219b0:
    // 0x1219b0: 0x52400041  beql        $s2, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x1219B0u;
    {
        const bool branch_taken_0x1219b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1219b0) {
            ctx->pc = 0x1219B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1219B0u;
            // 0x1219b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121AB8u;
            goto label_121ab8;
        }
    }
    ctx->pc = 0x1219B8u;
    // 0x1219b8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1219B8u;
    SET_GPR_U32(ctx, 31, 0x1219C0u);
    ctx->pc = 0x1219BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219B8u;
    // 0x1219bc: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1219B8u, 0x1219C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219C0u;
label_1219c0:
    // 0x1219c0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1219c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1219c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1219c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1219c8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1219c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1219cc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1219ccu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1219d0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1219d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1219d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1219d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1219d8: 0xe6000160  swc1        $f0, 0x160($s0)
    ctx->pc = 0x1219d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
    // 0x1219dc: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1219DCu;
    SET_GPR_U32(ctx, 31, 0x1219E4u);
    ctx->pc = 0x1219E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219DCu;
    // 0x1219e0: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1219DCu, 0x1219E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219E4u;
label_1219e4:
    // 0x1219e4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1219e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1219e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1219e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1219ec: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1219ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1219f0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1219f0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1219f4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1219f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1219f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1219f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1219fc: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x1219fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x121a00: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x121a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x121a04: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121a04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121a08: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121a08u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121a0c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121a0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121a14: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x121a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121a18: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x121a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x121a1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121a20: 0xe6000168  swc1        $f0, 0x168($s0)
    ctx->pc = 0x121a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
    // 0x121a24: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121a24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x121a28: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x121a28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x121a2c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x121a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121a30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x121A30u;
    {
        const bool branch_taken_0x121a30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A30u;
        // 0x121a34: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a30) {
            ctx->pc = 0x121A4Cu;
            goto label_121a4c;
        }
    }
    ctx->pc = 0x121A38u;
    // 0x121a38: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x121a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x121a3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x121a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x121a40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121a40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x121a44: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x121a44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x121a48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x121a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_121a4c:
    // 0x121a4c: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x121a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121a50: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x121a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x121a54: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x121a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x121a58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121a60: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x121a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x121a64: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x121a64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x121a68: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x121a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121a6c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x121a6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121a70: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x121a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x121a74: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121a74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x121a78: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x121a78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x121a7c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x121A7Cu;
    {
        const bool branch_taken_0x121a7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A7Cu;
        // 0x121a80: 0x24622000  addiu       $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a7c) {
            ctx->pc = 0x121A9Cu;
            goto label_121a9c;
        }
    }
    ctx->pc = 0x121A84u;
    // 0x121a84: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x121a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x121a88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x121a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x121a8c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121a8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x121a90: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x121a90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x121a94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x121a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x121a98: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x121a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
label_121a9c:
    // 0x121a9c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x121a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x121aa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121aa4: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x121aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x121aa8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x121aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x121aac: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x121aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121ab0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x121AB0u;
    {
        const bool branch_taken_0x121ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AB0u;
        // 0x121ab4: 0xe6000124  swc1        $f0, 0x124($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ab0) {
            ctx->pc = 0x121B9Cu;
            goto label_121b9c;
        }
    }
    ctx->pc = 0x121AB8u;
label_121ab8:
    // 0x121ab8: 0xc04844a  jal         func_121128
    ctx->pc = 0x121AB8u;
    SET_GPR_U32(ctx, 31, 0x121AC0u);
    ctx->pc = 0x121ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AB8u;
    // 0x121abc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x121AB8u, 0x121AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AC0u;
label_121ac0:
    // 0x121ac0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x121AC0u;
    {
        const bool branch_taken_0x121ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AC0u;
        // 0x121ac4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ac0) {
            ctx->pc = 0x121AF4u;
            goto label_121af4;
        }
    }
    ctx->pc = 0x121AC8u;
    // 0x121ac8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x121AC8u;
    SET_GPR_U32(ctx, 31, 0x121AD0u);
    ctx->pc = 0x121ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AC8u;
    // 0x121acc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x121AC8u, 0x121AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AD0u;
label_121ad0:
    // 0x121ad0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x121ad0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ad4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121ad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121ad8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121ad8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121adc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121adcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121ae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121ae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121aec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x121aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x121af0: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x121af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_121af4:
    // 0x121af4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x121af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121af8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121afc: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x121afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x121b00: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x121B00u;
    SET_GPR_U32(ctx, 31, 0x121B08u);
    ctx->pc = 0x121B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B00u;
    // 0x121b04: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x121B00u, 0x121B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B08u;
label_121b08:
    // 0x121b08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x121b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121b0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x121b0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121b10: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x121B10u;
    {
        const bool branch_taken_0x121b10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B10u;
        // 0x121b14: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b10) {
            ctx->pc = 0x121B9Cu;
            goto label_121b9c;
        }
    }
    ctx->pc = 0x121B18u;
    // 0x121b18: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x121b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121b1c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x121b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x121b20: 0xae0400f4  sw          $a0, 0xF4($s0)
    ctx->pc = 0x121b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 4));
    // 0x121b24: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x121b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x121b28: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x121b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121b2c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121b2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121b30: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121b30u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121b34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121b34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121b3c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x121b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x121b40: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121b44: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121b44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121b48: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121b48u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121b4c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121b4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121b54: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x121b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x121b58: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x121b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x121b5c: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x121b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x121b60: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x121b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x121b64: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x121b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x121b68: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x121b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x121b6c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x121b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x121b70: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x121b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x121b74: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x121b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x121b78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x121b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x121b7c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x121b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x121b80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x121b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x121b84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121b88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x121b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121b8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x121b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x121b90: 0xe6010120  swc1        $f1, 0x120($s0)
    ctx->pc = 0x121b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x121b94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x121b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121b98: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x121b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_121b9c:
    // 0x121b9c: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x121b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121ba4: 0xc6020100  lwc1        $f2, 0x100($s0)
    ctx->pc = 0x121ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x121ba8: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x121ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121bac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x121bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x121bb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x121bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x121bb4: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x121bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x121bb8: 0xe6010114  swc1        $f1, 0x114($s0)
    ctx->pc = 0x121bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_121bbc:
    // 0x121bbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x121bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121bc0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x121bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121bc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x121bc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121bc8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x121bc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x121bcc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x121bccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121bd0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x121bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x121bd4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x121bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x121bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x121BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BD8u;
        // 0x121bdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121BE0u;
}
