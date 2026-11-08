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

// Function: TrackSuspentionTracer__9ApcCqtank
// Address: 0x162620 - 0x1627b8
void TrackSuspentionTracer__9ApcCqtank_0x162620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TrackSuspentionTracer__9ApcCqtank_0x162620");
#endif

    switch (ctx->pc) {
        case 0x162670u: goto label_162670;
        case 0x162678u: goto label_162678;
        case 0x162680u: goto label_162680;
        case 0x162688u: goto label_162688;
        case 0x1626a4u: goto label_1626a4;
        case 0x1626b0u: goto label_1626b0;
        case 0x162744u: goto label_162744;
        case 0x162754u: goto label_162754;
        case 0x162764u: goto label_162764;
        case 0x162774u: goto label_162774;
        case 0x16277cu: goto label_16277c;
        case 0x162784u: goto label_162784;
        case 0x16278cu: goto label_16278c;
        case 0x162794u: goto label_162794;
        default: break;
    }

    ctx->pc = 0x162620u;

    // 0x162620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162628: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x162628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16262c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16262cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162634: 0x265119c0  addiu       $s1, $s2, 0x19C0
    ctx->pc = 0x162634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 6592));
    // 0x162638: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x162638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16263c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16263cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x162640: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x162640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x162644: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x162644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162648: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x162648u;
    {
        const bool branch_taken_0x162648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162648) {
            ctx->pc = 0x16264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162648u;
            // 0x16264c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16279Cu;
            goto label_16279c;
        }
    }
    ctx->pc = 0x162650u;
    // 0x162650: 0x8e421a2c  lw          $v0, 0x1A2C($s2)
    ctx->pc = 0x162650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6700)));
    // 0x162654: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x162654u;
    {
        const bool branch_taken_0x162654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162654) {
            ctx->pc = 0x162658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162654u;
            // 0x162658: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16279Cu;
            goto label_16279c;
        }
    }
    ctx->pc = 0x16265Cu;
    // 0x16265c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x16265cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x162660: 0x3c147000  lui         $s4, 0x7000
    ctx->pc = 0x162660u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)28672 << 16));
    // 0x162664: 0x2453d650  addiu       $s3, $v0, -0x29B0
    ctx->pc = 0x162664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x162668: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x162668u;
    SET_GPR_U32(ctx, 31, 0x162670u);
    ctx->pc = 0x16266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162668u;
    // 0x16266c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x162668u, 0x162670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162670u;
label_162670:
    // 0x162670: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x162670u;
    SET_GPR_U32(ctx, 31, 0x162678u);
    ctx->pc = 0x162674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162670u;
    // 0x162674: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x162670u, 0x162678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162678u;
label_162678:
    // 0x162678: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x162678u;
    SET_GPR_U32(ctx, 31, 0x162680u);
    ctx->pc = 0x16267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162678u;
    // 0x16267c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x162678u, 0x162680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162680u;
label_162680:
    // 0x162680: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x162680u;
    SET_GPR_U32(ctx, 31, 0x162688u);
    ctx->pc = 0x162684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162680u;
    // 0x162684: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x162680u, 0x162688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162688u;
label_162688:
    // 0x162688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x162688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16268c: 0x8e5001b8  lw          $s0, 0x1B8($s2)
    ctx->pc = 0x16268cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x162690: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x162690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x162694: 0xae630094  sw          $v1, 0x94($s3)
    ctx->pc = 0x162694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 3));
    // 0x162698: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x162698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16269c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16269Cu;
    SET_GPR_U32(ctx, 31, 0x1626A4u);
    ctx->pc = 0x1626A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16269Cu;
    // 0x1626a0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16269Cu, 0x1626A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1626A4u;
label_1626a4:
    // 0x1626a4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1626a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1626a8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1626A8u;
    SET_GPR_U32(ctx, 31, 0x1626B0u);
    ctx->pc = 0x1626ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1626A8u;
    // 0x1626ac: 0x118980  sll         $s1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1626A8u, 0x1626B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1626B0u;
label_1626b0:
    // 0x1626b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1626b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626b4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1626b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1626b8: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x1626b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x1626bc: 0x8e430c08  lw          $v1, 0xC08($s2)
    ctx->pc = 0x1626bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3080)));
    // 0x1626c0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1626c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626c4: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x1626c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1626c8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1626c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1626cc: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1626CCu;
    {
        const bool branch_taken_0x1626cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1626D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626CCu;
        // 0x1626d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626cc) {
            ctx->pc = 0x1626DCu;
            goto label_1626dc;
        }
    }
    ctx->pc = 0x1626D4u;
    // 0x1626d4: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x1626d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1626d8: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1626d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1626dc:
    // 0x1626dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1626dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1626e0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1626e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1626e4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1626e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1626e8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1626e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1626ec: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1626ecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1626f0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1626f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1626f4: 0xf9240000  sqc2        $vf4, 0x0($t1)
    ctx->pc = 0x1626f4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1626f8: 0xf9250010  sqc2        $vf5, 0x10($t1)
    ctx->pc = 0x1626f8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1626fc: 0xf9260020  sqc2        $vf6, 0x20($t1)
    ctx->pc = 0x1626fcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x162700: 0xf9270030  sqc2        $vf7, 0x30($t1)
    ctx->pc = 0x162700u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x162704: 0x25240040  addiu       $a0, $t1, 0x40
    ctx->pc = 0x162704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x162708: 0x25031a30  addiu       $v1, $t0, 0x1A30
    ctx->pc = 0x162708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6704));
    // 0x16270c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16270cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162710: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x162710u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x162714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162718: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x162718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16271c: 0x26451a40  addiu       $a1, $s2, 0x1A40
    ctx->pc = 0x16271cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6720));
    // 0x162720: 0x8d0719cc  lw          $a3, 0x19CC($t0)
    ctx->pc = 0x162720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6604)));
    // 0x162724: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x162724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162728: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x162728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16272c: 0x269000a0  addiu       $s0, $s4, 0xA0
    ctx->pc = 0x16272cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x162730: 0x8d0219c4  lw          $v0, 0x19C4($t0)
    ctx->pc = 0x162730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6596)));
    // 0x162734: 0xad230090  sw          $v1, 0x90($t1)
    ctx->pc = 0x162734u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 144), GPR_U32(ctx, 3));
    // 0x162738: 0xad220080  sw          $v0, 0x80($t1)
    ctx->pc = 0x162738u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 2));
    // 0x16273c: 0xc05888a  jal         func_162228
    ctx->pc = 0x16273Cu;
    SET_GPR_U32(ctx, 31, 0x162744u);
    ctx->pc = 0x162740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16273Cu;
    // 0x162740: 0xad270084  sw          $a3, 0x84($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162228u, 0x16273Cu, 0x162744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162744u;
label_162744:
    // 0x162744: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x162744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x162748: 0x8e4419d4  lw          $a0, 0x19D4($s2)
    ctx->pc = 0x162748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6612)));
    // 0x16274c: 0xc05fe70  jal         func_17F9C0
    ctx->pc = 0x16274Cu;
    SET_GPR_U32(ctx, 31, 0x162754u);
    ctx->pc = 0x162750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16274Cu;
    // 0x162750: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9C0u, 0x16274Cu, 0x162754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162754u;
label_162754:
    // 0x162754: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x162754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162758: 0x26451a50  addiu       $a1, $s2, 0x1A50
    ctx->pc = 0x162758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6736));
    // 0x16275c: 0xc05888a  jal         func_162228
    ctx->pc = 0x16275Cu;
    SET_GPR_U32(ctx, 31, 0x162764u);
    ctx->pc = 0x162760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16275Cu;
    // 0x162760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162228u, 0x16275Cu, 0x162764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162764u;
label_162764:
    // 0x162764: 0x8e4419d8  lw          $a0, 0x19D8($s2)
    ctx->pc = 0x162764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6616)));
    // 0x162768: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x162768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16276c: 0xc05fe70  jal         func_17F9C0
    ctx->pc = 0x16276Cu;
    SET_GPR_U32(ctx, 31, 0x162774u);
    ctx->pc = 0x162770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16276Cu;
    // 0x162770: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9C0u, 0x16276Cu, 0x162774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162774u;
label_162774:
    // 0x162774: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x162774u;
    SET_GPR_U32(ctx, 31, 0x16277Cu);
    ctx->pc = 0x162778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162774u;
    // 0x162778: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x162774u, 0x16277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16277Cu;
label_16277c:
    // 0x16277c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16277Cu;
    SET_GPR_U32(ctx, 31, 0x162784u);
    ctx->pc = 0x162780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16277Cu;
    // 0x162780: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16277Cu, 0x162784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162784u;
label_162784:
    // 0x162784: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x162784u;
    SET_GPR_U32(ctx, 31, 0x16278Cu);
    ctx->pc = 0x162788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162784u;
    // 0x162788: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x162784u, 0x16278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16278Cu;
label_16278c:
    // 0x16278c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16278Cu;
    SET_GPR_U32(ctx, 31, 0x162794u);
    ctx->pc = 0x162790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16278Cu;
    // 0x162790: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16278Cu, 0x162794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162794u;
label_162794:
    // 0x162794: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x162794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x162798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16279c:
    // 0x16279c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16279cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1627a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1627a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1627a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1627a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1627a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1627a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1627ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1627acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1627b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1627B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1627B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627B0u;
        // 0x1627b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1627B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1627B8u;
}
