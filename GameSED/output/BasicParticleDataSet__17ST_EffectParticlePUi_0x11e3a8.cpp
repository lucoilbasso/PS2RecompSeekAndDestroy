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

// Function: BasicParticleDataSet__17ST_EffectParticlePUi
// Address: 0x11e3a8 - 0x11e868
void BasicParticleDataSet__17ST_EffectParticlePUi_0x11e3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BasicParticleDataSet__17ST_EffectParticlePUi_0x11e3a8");
#endif

    switch (ctx->pc) {
        case 0x11e3f0u: goto label_11e3f0;
        case 0x11e46cu: goto label_11e46c;
        case 0x11e494u: goto label_11e494;
        case 0x11e4e8u: goto label_11e4e8;
        case 0x11e558u: goto label_11e558;
        case 0x11e5c8u: goto label_11e5c8;
        case 0x11e638u: goto label_11e638;
        case 0x11e688u: goto label_11e688;
        case 0x11e6acu: goto label_11e6ac;
        case 0x11e6f8u: goto label_11e6f8;
        case 0x11e74cu: goto label_11e74c;
        case 0x11e778u: goto label_11e778;
        case 0x11e7b4u: goto label_11e7b4;
        case 0x11e7f8u: goto label_11e7f8;
        default: break;
    }

    ctx->pc = 0x11e3a8u;

    // 0x11e3a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e3ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11e3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x11e3b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11e3b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11e3b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11e3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11e3c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11e3c4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x11e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x11e3c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11e3cc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x11e3ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11e3d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11e3d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11E3D4u;
    {
        const bool branch_taken_0x11e3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3D4u;
        // 0x11e3d8: 0xae320018  sw          $s2, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3d4) {
            ctx->pc = 0x11E424u;
            goto label_11e424;
        }
    }
    ctx->pc = 0x11E3DCu;
    // 0x11e3dc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e3e0: 0x24080041  addiu       $t0, $zero, 0x41
    ctx->pc = 0x11e3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x11e3e4: 0x24475a50  addiu       $a3, $v0, 0x5A50
    ctx->pc = 0x11e3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e3e8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x11e3e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e3ec: 0x0  nop
    ctx->pc = 0x11e3ecu;
    // NOP
label_11e3f0:
    // 0x11e3f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3f4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e3f8: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e3f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e3fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E3FCu;
    {
        const bool branch_taken_0x11e3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3FCu;
        // 0x11e400: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3fc) {
            ctx->pc = 0x11E428u;
            goto label_11e428;
        }
    }
    ctx->pc = 0x11E404u;
    // 0x11e404: 0x10880008  beq         $a0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E404u;
    {
        const bool branch_taken_0x11e404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x11E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E404u;
        // 0x11e408: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e404) {
            ctx->pc = 0x11E428u;
            goto label_11e428;
        }
    }
    ctx->pc = 0x11E40Cu;
    // 0x11e40c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e414: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e418: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11e418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e41c: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E41Cu;
    {
        const bool branch_taken_0x11e41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e41c) {
            ctx->pc = 0x11E420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E41Cu;
            // 0x11e420: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e3f0;
        }
    }
    ctx->pc = 0x11E424u;
label_11e424:
    // 0x11e424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e428:
    // 0x11e428: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11e428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e42c: 0x52000028  beql        $s0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x11E42Cu;
    {
        const bool branch_taken_0x11e42c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e42c) {
            ctx->pc = 0x11E430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E42Cu;
            // 0x11e430: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E4D0u;
            goto label_11e4d0;
        }
    }
    ctx->pc = 0x11E434u;
    // 0x11e434: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11e438: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x11e438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11e43c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x11e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x11e440: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x11e440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11e444: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x11e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11e448: 0xa623001c  sh          $v1, 0x1C($s1)
    ctx->pc = 0x11e448u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x11e44c: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x11e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
    // 0x11e450: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x11e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x11e454: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x11e454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x11e458: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x11e458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e45c: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x11e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x11e460: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x11e460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11e464: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11E464u;
    SET_GPR_U32(ctx, 31, 0x11E46Cu);
    ctx->pc = 0x11E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E464u;
    // 0x11e468: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11E464u, 0x11E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E46Cu;
label_11e46c:
    // 0x11e46c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x11e46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11e470: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x11e470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11e474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11e474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e478: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11e478u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e47c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11e47cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11e480: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11e480u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11e484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e488: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x11e488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x11e48c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11E48Cu;
    SET_GPR_U32(ctx, 31, 0x11E494u);
    ctx->pc = 0x11E490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E48Cu;
    // 0x11e490: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11E48Cu, 0x11E494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E494u;
label_11e494:
    // 0x11e494: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x11e494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11e498: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x11e498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11e49c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e4a0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11e4a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e4a4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11e4a4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11e4a8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11e4a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11e4ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11e4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e4b0: 0x9224004b  lbu         $a0, 0x4B($s1)
    ctx->pc = 0x11e4b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x11e4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e4b8: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x11e4b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x11e4bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11e4bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e4c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11e4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11e4c4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x11e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x11e4c8: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x11E4C8u;
    {
        const bool branch_taken_0x11e4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4C8u;
        // 0x11e4cc: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4c8) {
            ctx->pc = 0x11E850u;
            goto label_11e850;
        }
    }
    ctx->pc = 0x11E4D0u;
label_11e4d0:
    // 0x11e4d0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E4D0u;
    {
        const bool branch_taken_0x11e4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4D0u;
        // 0x11e4d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4d0) {
            ctx->pc = 0x11E51Cu;
            goto label_11e51c;
        }
    }
    ctx->pc = 0x11E4D8u;
    // 0x11e4d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e4dc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x11e4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11e4e0: 0x24475a50  addiu       $a3, $v0, 0x5A50
    ctx->pc = 0x11e4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e4e4: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x11e4e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_11e4e8:
    // 0x11e4e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e4ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e4f0: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e4f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e4f4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E4F4u;
    {
        const bool branch_taken_0x11e4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4F4u;
        // 0x11e4f8: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4f4) {
            ctx->pc = 0x11E520u;
            goto label_11e520;
        }
    }
    ctx->pc = 0x11E4FCu;
    // 0x11e4fc: 0x10880008  beq         $a0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E4FCu;
    {
        const bool branch_taken_0x11e4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x11E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4FCu;
        // 0x11e500: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4fc) {
            ctx->pc = 0x11E520u;
            goto label_11e520;
        }
    }
    ctx->pc = 0x11E504u;
    // 0x11e504: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e50c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e510: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11e510u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e514: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E514u;
    {
        const bool branch_taken_0x11e514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e514) {
            ctx->pc = 0x11E518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E514u;
            // 0x11e518: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e4e8;
        }
    }
    ctx->pc = 0x11E51Cu;
label_11e51c:
    // 0x11e51c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e520:
    // 0x11e520: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11e520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e524: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E524u;
    {
        const bool branch_taken_0x11e524 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e524) {
            ctx->pc = 0x11E528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E524u;
            // 0x11e528: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E538u;
            goto label_11e538;
        }
    }
    ctx->pc = 0x11E52Cu;
    // 0x11e52c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E52Cu;
    {
        const bool branch_taken_0x11e52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E52Cu;
        // 0x11e530: 0xa620001c  sh          $zero, 0x1C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e52c) {
            ctx->pc = 0x11E53Cu;
            goto label_11e53c;
        }
    }
    ctx->pc = 0x11E534u;
    // 0x11e534: 0x0  nop
    ctx->pc = 0x11e534u;
    // NOP
label_11e538:
    // 0x11e538: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x11e538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
label_11e53c:
    // 0x11e53c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x11e53cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11e540: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E540u;
    {
        const bool branch_taken_0x11e540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E540u;
        // 0x11e544: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e540) {
            ctx->pc = 0x11E58Cu;
            goto label_11e58c;
        }
    }
    ctx->pc = 0x11E548u;
    // 0x11e548: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e54c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x11e54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11e550: 0x24475a50  addiu       $a3, $v0, 0x5A50
    ctx->pc = 0x11e550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e554: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x11e554u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_11e558:
    // 0x11e558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e55c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e560: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e564: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E564u;
    {
        const bool branch_taken_0x11e564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E564u;
        // 0x11e568: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e564) {
            ctx->pc = 0x11E590u;
            goto label_11e590;
        }
    }
    ctx->pc = 0x11E56Cu;
    // 0x11e56c: 0x10880008  beq         $a0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E56Cu;
    {
        const bool branch_taken_0x11e56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x11E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E56Cu;
        // 0x11e570: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e56c) {
            ctx->pc = 0x11E590u;
            goto label_11e590;
        }
    }
    ctx->pc = 0x11E574u;
    // 0x11e574: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e578: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e57c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e580: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11e580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e584: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E584u;
    {
        const bool branch_taken_0x11e584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e584) {
            ctx->pc = 0x11E588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E584u;
            // 0x11e588: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e558;
        }
    }
    ctx->pc = 0x11E58Cu;
label_11e58c:
    // 0x11e58c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e590:
    // 0x11e590: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E590u;
    {
        const bool branch_taken_0x11e590 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E590u;
        // 0x11e594: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e590) {
            ctx->pc = 0x11E5A0u;
            goto label_11e5a0;
        }
    }
    ctx->pc = 0x11E598u;
    // 0x11e598: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x11E598u;
    {
        const bool branch_taken_0x11e598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E598u;
        // 0x11e59c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e598) {
            ctx->pc = 0x11E850u;
            goto label_11e850;
        }
    }
    ctx->pc = 0x11E5A0u;
label_11e5a0:
    // 0x11e5a0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x11e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11e5a4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x11e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x11e5a8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x11e5a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11e5ac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11E5ACu;
    {
        const bool branch_taken_0x11e5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5ACu;
        // 0x11e5b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5ac) {
            ctx->pc = 0x11E5FCu;
            goto label_11e5fc;
        }
    }
    ctx->pc = 0x11E5B4u;
    // 0x11e5b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e5b8: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x11e5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11e5bc: 0x24475a50  addiu       $a3, $v0, 0x5A50
    ctx->pc = 0x11e5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e5c0: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x11e5c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e5c4: 0x0  nop
    ctx->pc = 0x11e5c4u;
    // NOP
label_11e5c8:
    // 0x11e5c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5cc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e5d0: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e5d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e5d4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E5D4u;
    {
        const bool branch_taken_0x11e5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5D4u;
        // 0x11e5d8: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5d4) {
            ctx->pc = 0x11E600u;
            goto label_11e600;
        }
    }
    ctx->pc = 0x11E5DCu;
    // 0x11e5dc: 0x10880008  beq         $a0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E5DCu;
    {
        const bool branch_taken_0x11e5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x11E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5DCu;
        // 0x11e5e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5dc) {
            ctx->pc = 0x11E600u;
            goto label_11e600;
        }
    }
    ctx->pc = 0x11E5E4u;
    // 0x11e5e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e5e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e5ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e5f0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11e5f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e5f4: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E5F4u;
    {
        const bool branch_taken_0x11e5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e5f4) {
            ctx->pc = 0x11E5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E5F4u;
            // 0x11e5f8: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e5c8;
        }
    }
    ctx->pc = 0x11E5FCu;
label_11e5fc:
    // 0x11e5fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e600:
    // 0x11e600: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E600u;
    {
        const bool branch_taken_0x11e600 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E600u;
        // 0x11e604: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e600) {
            ctx->pc = 0x11E610u;
            goto label_11e610;
        }
    }
    ctx->pc = 0x11E608u;
    // 0x11e608: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11E608u;
    {
        const bool branch_taken_0x11e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E608u;
        // 0x11e60c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e608) {
            ctx->pc = 0x11E614u;
            goto label_11e614;
        }
    }
    ctx->pc = 0x11E610u;
label_11e610:
    // 0x11e610: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x11e610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_11e614:
    // 0x11e614: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x11e614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x11e618: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x11e618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11e61c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11E61Cu;
    {
        const bool branch_taken_0x11e61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E61Cu;
        // 0x11e620: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e61c) {
            ctx->pc = 0x11E66Cu;
            goto label_11e66c;
        }
    }
    ctx->pc = 0x11E624u;
    // 0x11e624: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e628: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x11e628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11e62c: 0x24465a50  addiu       $a2, $v0, 0x5A50
    ctx->pc = 0x11e62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e630: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x11e630u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e634: 0x0  nop
    ctx->pc = 0x11e634u;
    // NOP
label_11e638:
    // 0x11e638: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11e638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e63c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e640: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e644: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E644u;
    {
        const bool branch_taken_0x11e644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E644u;
        // 0x11e648: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e644) {
            ctx->pc = 0x11E670u;
            goto label_11e670;
        }
    }
    ctx->pc = 0x11E64Cu;
    // 0x11e64c: 0x10870008  beq         $a0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E64Cu;
    {
        const bool branch_taken_0x11e64c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x11E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E64Cu;
        // 0x11e650: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e64c) {
            ctx->pc = 0x11E670u;
            goto label_11e670;
        }
    }
    ctx->pc = 0x11E654u;
    // 0x11e654: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e65c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e660: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11e660u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e664: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E664u;
    {
        const bool branch_taken_0x11e664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e664) {
            ctx->pc = 0x11E668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E664u;
            // 0x11e668: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e638;
        }
    }
    ctx->pc = 0x11E66Cu;
label_11e66c:
    // 0x11e66c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11e66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e670:
    // 0x11e670: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x11E670u;
    {
        const bool branch_taken_0x11e670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e670) {
            ctx->pc = 0x11E674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E670u;
            // 0x11e674: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E6E0u;
            goto label_11e6e0;
        }
    }
    ctx->pc = 0x11E678u;
    // 0x11e678: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11e67c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x11e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x11e680: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11E680u;
    SET_GPR_U32(ctx, 31, 0x11E688u);
    ctx->pc = 0x11E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E680u;
    // 0x11e684: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11E680u, 0x11E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E688u;
label_11e688:
    // 0x11e688: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11e68c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e690: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11e690u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e694: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11e694u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11e698: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11e698u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11e69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e6a0: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x11e6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x11e6a4: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11E6A4u;
    SET_GPR_U32(ctx, 31, 0x11E6ACu);
    ctx->pc = 0x11E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6A4u;
    // 0x11e6a8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11E6A4u, 0x11E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6ACu;
label_11e6ac:
    // 0x11e6ac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x11e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11e6b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e6b4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11e6b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e6b8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11e6b8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11e6bc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11e6bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11e6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e6c4: 0x9224004b  lbu         $a0, 0x4B($s1)
    ctx->pc = 0x11e6c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x11e6c8: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x11e6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x11e6cc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x11e6ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e6d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11e6d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11e6d4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x11e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x11e6d8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x11E6D8u;
    {
        const bool branch_taken_0x11e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6D8u;
        // 0x11e6dc: 0xe621004c  swc1        $f1, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6d8) {
            ctx->pc = 0x11E7D4u;
            goto label_11e7d4;
        }
    }
    ctx->pc = 0x11E6E0u;
label_11e6e0:
    // 0x11e6e0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E6E0u;
    {
        const bool branch_taken_0x11e6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6E0u;
        // 0x11e6e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6e0) {
            ctx->pc = 0x11E72Cu;
            goto label_11e72c;
        }
    }
    ctx->pc = 0x11E6E8u;
    // 0x11e6e8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e6ec: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x11e6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11e6f0: 0x24475a50  addiu       $a3, $v0, 0x5A50
    ctx->pc = 0x11e6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e6f4: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x11e6f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_11e6f8:
    // 0x11e6f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6fc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e700: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e700u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e704: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E704u;
    {
        const bool branch_taken_0x11e704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E704u;
        // 0x11e708: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e704) {
            ctx->pc = 0x11E730u;
            goto label_11e730;
        }
    }
    ctx->pc = 0x11E70Cu;
    // 0x11e70c: 0x10880008  beq         $a0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E70Cu;
    {
        const bool branch_taken_0x11e70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x11E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E70Cu;
        // 0x11e710: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e70c) {
            ctx->pc = 0x11E730u;
            goto label_11e730;
        }
    }
    ctx->pc = 0x11E714u;
    // 0x11e714: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e718: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e71c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e720: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11e720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e724: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E724u;
    {
        const bool branch_taken_0x11e724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e724) {
            ctx->pc = 0x11E728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E724u;
            // 0x11e728: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e6f8;
        }
    }
    ctx->pc = 0x11E72Cu;
label_11e72c:
    // 0x11e72c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e730:
    // 0x11e730: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x11E730u;
    {
        const bool branch_taken_0x11e730 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E730u;
        // 0x11e734: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e730) {
            ctx->pc = 0x11E760u;
            goto label_11e760;
        }
    }
    ctx->pc = 0x11E738u;
    // 0x11e738: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e73c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x11e73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x11e740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11e740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e744: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x11E744u;
    SET_GPR_U32(ctx, 31, 0x11E74Cu);
    ctx->pc = 0x11E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E744u;
    // 0x11e748: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x11E744u, 0x11E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E74Cu;
label_11e74c:
    // 0x11e74c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e750: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x11e750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x11e754: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11E754u;
    {
        const bool branch_taken_0x11e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E754u;
        // 0x11e758: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e754) {
            ctx->pc = 0x11E77Cu;
            goto label_11e77c;
        }
    }
    ctx->pc = 0x11E75Cu;
    // 0x11e75c: 0x0  nop
    ctx->pc = 0x11e75cu;
    // NOP
label_11e760:
    // 0x11e760: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x11e760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11e764: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e768: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x11e768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x11e76c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x11e76cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11e770: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x11E770u;
    SET_GPR_U32(ctx, 31, 0x11E778u);
    ctx->pc = 0x11E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E770u;
    // 0x11e774: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x11E770u, 0x11E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E778u;
label_11e778:
    // 0x11e778: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x11e778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_11e77c:
    // 0x11e77c: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x11e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e780: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e788: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x11E788u;
    {
        const bool branch_taken_0x11e788 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E788u;
        // 0x11e78c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e788) {
            ctx->pc = 0x11E798u;
            goto label_11e798;
        }
    }
    ctx->pc = 0x11E790u;
    // 0x11e790: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x11E790u;
    {
        const bool branch_taken_0x11e790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E790u;
        // 0x11e794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e790) {
            ctx->pc = 0x11E850u;
            goto label_11e850;
        }
    }
    ctx->pc = 0x11E798u;
label_11e798:
    // 0x11e798: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11e79c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x11e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11e7a0: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x11e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x11e7a4: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E7A4u;
    {
        const bool branch_taken_0x11e7a4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x11E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7A4u;
        // 0x11e7a8: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7a4) {
            ctx->pc = 0x11E7D4u;
            goto label_11e7d4;
        }
    }
    ctx->pc = 0x11E7ACu;
    // 0x11e7ac: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11E7ACu;
    SET_GPR_U32(ctx, 31, 0x11E7B4u);
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11E7ACu, 0x11E7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7B4u;
label_11e7b4:
    // 0x11e7b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11e7b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7b8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11e7b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e7bc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11e7bcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11e7c0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11e7c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11e7c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11e7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e7c8: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x11e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e7cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11e7ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11e7d0: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x11e7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_11e7d4:
    // 0x11e7d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11e7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e7dc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e7e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11E7E0u;
    {
        const bool branch_taken_0x11e7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7E0u;
        // 0x11e7e4: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7e0) {
            ctx->pc = 0x11E830u;
            goto label_11e830;
        }
    }
    ctx->pc = 0x11E7E8u;
    // 0x11e7e8: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x11e7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11e7ec: 0x24465a50  addiu       $a2, $v0, 0x5A50
    ctx->pc = 0x11e7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e7f0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x11e7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e7f4: 0x0  nop
    ctx->pc = 0x11e7f4u;
    // NOP
label_11e7f8:
    // 0x11e7f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11e7f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7fc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e800: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e800u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e804: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11E804u;
    {
        const bool branch_taken_0x11e804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E804u;
        // 0x11e808: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e804) {
            ctx->pc = 0x11E834u;
            goto label_11e834;
        }
    }
    ctx->pc = 0x11E80Cu;
    // 0x11e80c: 0x10880009  beq         $a0, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E80Cu;
    {
        const bool branch_taken_0x11e80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x11E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E80Cu;
        // 0x11e810: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e80c) {
            ctx->pc = 0x11E834u;
            goto label_11e834;
        }
    }
    ctx->pc = 0x11E814u;
    // 0x11e814: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e818: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e81c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e820: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e824: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e828: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11E828u;
    {
        const bool branch_taken_0x11e828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E828u;
        // 0x11e82c: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e828) {
            ctx->pc = 0x11E7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e7f8;
        }
    }
    ctx->pc = 0x11E830u;
label_11e830:
    // 0x11e830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11e830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e834:
    // 0x11e834: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E834u;
    {
        const bool branch_taken_0x11e834 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E834u;
        // 0x11e838: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e834) {
            ctx->pc = 0x11E848u;
            goto label_11e848;
        }
    }
    ctx->pc = 0x11E83Cu;
    // 0x11e83c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x11e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x11e840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11E840u;
    {
        const bool branch_taken_0x11e840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E840u;
        // 0x11e844: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e840) {
            ctx->pc = 0x11E84Cu;
            goto label_11e84c;
        }
    }
    ctx->pc = 0x11E848u;
label_11e848:
    // 0x11e848: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x11e848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_11e84c:
    // 0x11e84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e850:
    // 0x11e850: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11e850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e854: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11e854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11e858: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11e858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e85c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11e85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11e860: 0x3e00008  jr          $ra
    ctx->pc = 0x11E860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E860u;
        // 0x11e864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E868u;
}
