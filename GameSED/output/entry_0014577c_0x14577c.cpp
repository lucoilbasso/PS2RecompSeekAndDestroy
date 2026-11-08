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

// Function: entry_0014577c
// Address: 0x14577c - 0x1459a8
void entry_0014577c_0x14577c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014577c_0x14577c");
#endif

    switch (ctx->pc) {
        case 0x14578cu: goto label_14578c;
        case 0x145794u: goto label_145794;
        case 0x14579cu: goto label_14579c;
        case 0x1458d8u: goto label_1458d8;
        case 0x1458f4u: goto label_1458f4;
        case 0x145910u: goto label_145910;
        case 0x145928u: goto label_145928;
        case 0x145940u: goto label_145940;
        case 0x14595cu: goto label_14595c;
        case 0x14597cu: goto label_14597c;
        default: break;
    }

    ctx->pc = 0x14577cu;

label_14577c:
    // 0x14577c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_145780:
    // 0x145780: 0x8c510028  lw          $s1, 0x28($v0)
    ctx->pc = 0x145780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_145784:
    // 0x145784: 0xc06bd28  jal         func_1AF4A0
label_145788:
    if (ctx->pc == 0x145788u) {
        ctx->pc = 0x145788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145784u;
        // 0x145788: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14578Cu;
        goto label_14578c;
    }
    ctx->pc = 0x145784u;
    SET_GPR_U32(ctx, 31, 0x14578Cu);
    ctx->pc = 0x145788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145784u;
    // 0x145788: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x145784u, 0x14578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14578Cu;
label_14578c:
    // 0x14578c: 0xc06bd20  jal         func_1AF480
label_145790:
    if (ctx->pc == 0x145790u) {
        ctx->pc = 0x145790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14578Cu;
        // 0x145790: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145794u;
        goto label_145794;
    }
    ctx->pc = 0x14578Cu;
    SET_GPR_U32(ctx, 31, 0x145794u);
    ctx->pc = 0x145790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14578Cu;
    // 0x145790: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x14578Cu, 0x145794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145794u;
label_145794:
    // 0x145794: 0xc0649f6  jal         func_1927D8
label_145798:
    if (ctx->pc == 0x145798u) {
        ctx->pc = 0x145798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145794u;
        // 0x145798: 0x8e300028  lw          $s0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14579Cu;
        goto label_14579c;
    }
    ctx->pc = 0x145794u;
    SET_GPR_U32(ctx, 31, 0x14579Cu);
    ctx->pc = 0x145798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145794u;
    // 0x145798: 0x8e300028  lw          $s0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1927D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1927D8u, 0x145794u, 0x14579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14579Cu;
label_14579c:
    // 0x14579c: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x14579cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1457a0:
    // 0x1457a0: 0xb5bbc  dsll32      $t3, $t3, 14
    ctx->pc = 0x1457a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 14));
label_1457a4:
    // 0x1457a4: 0x26100420  addiu       $s0, $s0, 0x420
    ctx->pc = 0x1457a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
label_1457a8:
    // 0x1457a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1457a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1457ac:
    // 0x1457ac: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1457acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_1457b0:
    // 0x1457b0: 0x26260190  addiu       $a2, $s1, 0x190
    ctx->pc = 0x1457b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_1457b4:
    // 0x1457b4: 0x26290150  addiu       $t1, $s1, 0x150
    ctx->pc = 0x1457b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_1457b8:
    // 0x1457b8: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x1457b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1457bc:
    // 0x1457bc: 0xa54f8  dsll        $t2, $t2, 19
    ctx->pc = 0x1457bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 19);
label_1457c0:
    // 0x1457c0: 0xfe220190  sd          $v0, 0x190($s1)
    ctx->pc = 0x1457c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 400), GPR_U64(ctx, 2));
label_1457c4:
    // 0x1457c4: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x1457c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1457c8:
    // 0x1457c8: 0x3c0d0026  lui         $t5, 0x26
    ctx->pc = 0x1457c8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)38 << 16));
label_1457cc:
    // 0x1457cc: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1457ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_1457d0:
    // 0x1457d0: 0xfe220198  sd          $v0, 0x198($s1)
    ctx->pc = 0x1457d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 408), GPR_U64(ctx, 2));
label_1457d4:
    // 0x1457d4: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x1457d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_1457d8:
    // 0x1457d8: 0xfe2301a0  sd          $v1, 0x1A0($s1)
    ctx->pc = 0x1457d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 416), GPR_U64(ctx, 3));
label_1457dc:
    // 0x1457dc: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x1457dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_1457e0:
    // 0x1457e0: 0xfe2201a8  sd          $v0, 0x1A8($s1)
    ctx->pc = 0x1457e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 424), GPR_U64(ctx, 2));
label_1457e4:
    // 0x1457e4: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x1457e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1457e8:
    // 0x1457e8: 0xfe2301b0  sd          $v1, 0x1B0($s1)
    ctx->pc = 0x1457e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 432), GPR_U64(ctx, 3));
label_1457ec:
    // 0x1457ec: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x1457ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
label_1457f0:
    // 0x1457f0: 0xfe2201b8  sd          $v0, 0x1B8($s1)
    ctx->pc = 0x1457f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 440), GPR_U64(ctx, 2));
label_1457f4:
    // 0x1457f4: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x1457f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
label_1457f8:
    // 0x1457f8: 0xfe2301c0  sd          $v1, 0x1C0($s1)
    ctx->pc = 0x1457f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 448), GPR_U64(ctx, 3));
label_1457fc:
    // 0x1457fc: 0xde020038  ld          $v0, 0x38($s0)
    ctx->pc = 0x1457fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 56)));
label_145800:
    // 0x145800: 0xfe2201c8  sd          $v0, 0x1C8($s1)
    ctx->pc = 0x145800u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 456), GPR_U64(ctx, 2));
label_145804:
    // 0x145804: 0x94c30018  lhu         $v1, 0x18($a2)
    ctx->pc = 0x145804u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
label_145808:
    // 0x145808: 0xa523000c  sh          $v1, 0xC($t1)
    ctx->pc = 0x145808u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 12), (uint16_t)GPR_U32(ctx, 3));
label_14580c:
    // 0x14580c: 0x94c2001a  lhu         $v0, 0x1A($a2)
    ctx->pc = 0x14580cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
label_145810:
    // 0x145810: 0xa522000e  sh          $v0, 0xE($t1)
    ctx->pc = 0x145810u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 14), (uint16_t)GPR_U32(ctx, 2));
label_145814:
    // 0x145814: 0x94c70018  lhu         $a3, 0x18($a2)
    ctx->pc = 0x145814u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
label_145818:
    // 0x145818: 0x94c40004  lhu         $a0, 0x4($a2)
    ctx->pc = 0x145818u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_14581c:
    // 0x14581c: 0x94c80002  lhu         $t0, 0x2($a2)
    ctx->pc = 0x14581cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_145820:
    // 0x145820: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x145820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
label_145824:
    // 0x145824: 0x94c2001a  lhu         $v0, 0x1A($a2)
    ctx->pc = 0x145824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
label_145828:
    // 0x145828: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x145828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
label_14582c:
    // 0x14582c: 0x94c5000c  lhu         $a1, 0xC($a2)
    ctx->pc = 0x14582cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
label_145830:
    // 0x145830: 0x843b8  dsll        $t0, $t0, 14
    ctx->pc = 0x145830u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 14);
label_145834:
    // 0x145834: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x145834u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_145838:
    // 0x145838: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x145838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_14583c:
    // 0x14583c: 0x52cfc  dsll32      $a1, $a1, 19
    ctx->pc = 0x14583cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 19));
label_145840:
    // 0x145840: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x145840u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
label_145844:
    // 0x145844: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x145844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_145848:
    // 0x145848: 0x94c50030  lhu         $a1, 0x30($a2)
    ctx->pc = 0x145848u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
label_14584c:
    // 0x14584c: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x14584cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_145850:
    // 0x145850: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x145850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_145854:
    // 0x145854: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x145854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_145858:
    // 0x145858: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x145858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
label_14585c:
    // 0x14585c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x14585cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_145860:
    // 0x145860: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x145860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_145864:
    // 0x145864: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x145864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
label_145868:
    // 0x145868: 0xfcc30038  sd          $v1, 0x38($a2)
    ctx->pc = 0x145868u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 3));
label_14586c:
    // 0x14586c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x14586cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
label_145870:
    // 0x145870: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x145870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_145874:
    // 0x145874: 0xdd240018  ld          $a0, 0x18($t1)
    ctx->pc = 0x145874u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 24)));
label_145878:
    // 0x145878: 0xfd230010  sd          $v1, 0x10($t1)
    ctx->pc = 0x145878u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 3));
label_14587c:
    // 0x14587c: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x14587cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
label_145880:
    // 0x145880: 0xfd240018  sd          $a0, 0x18($t1)
    ctx->pc = 0x145880u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 4));
label_145884:
    // 0x145884: 0xdda2d610  ld          $v0, -0x29F0($t5)
    ctx->pc = 0x145884u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 13), 4294956560)));
label_145888:
    // 0x145888: 0xfe220170  sd          $v0, 0x170($s1)
    ctx->pc = 0x145888u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 368), GPR_U64(ctx, 2));
label_14588c:
    // 0x14588c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x14588cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_145890:
    // 0x145890: 0xdc43d618  ld          $v1, -0x29E8($v0)
    ctx->pc = 0x145890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294956568)));
label_145894:
    // 0x145894: 0xfe230178  sd          $v1, 0x178($s1)
    ctx->pc = 0x145894u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 376), GPR_U64(ctx, 3));
label_145898:
    // 0x145898: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x145898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_14589c:
    // 0x14589c: 0xdc43d620  ld          $v1, -0x29E0($v0)
    ctx->pc = 0x14589cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294956576)));
label_1458a0:
    // 0x1458a0: 0xfe230180  sd          $v1, 0x180($s1)
    ctx->pc = 0x1458a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 384), GPR_U64(ctx, 3));
label_1458a4:
    // 0x1458a4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1458a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_1458a8:
    // 0x1458a8: 0xdc43d628  ld          $v1, -0x29D8($v0)
    ctx->pc = 0x1458a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294956584)));
label_1458ac:
    // 0x1458ac: 0xfe230188  sd          $v1, 0x188($s1)
    ctx->pc = 0x1458acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 392), GPR_U64(ctx, 3));
label_1458b0:
    // 0x1458b0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1458b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1458b4:
    // 0x1458b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1458b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1458b8:
    // 0x1458b8: 0x8e2201dc  lw          $v0, 0x1DC($s1)
    ctx->pc = 0x1458b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_1458bc:
    // 0x1458bc: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1458bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1458c0:
    // 0x1458c0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1458c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1458c4:
    // 0x1458c4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1458c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1458c8:
    // 0x1458c8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1458c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1458cc:
    // 0x1458cc: 0xae2201dc  sw          $v0, 0x1DC($s1)
    ctx->pc = 0x1458ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 2));
label_1458d0:
    // 0x1458d0: 0xc0f809  jalr        $a2
label_1458d4:
    if (ctx->pc == 0x1458D4u) {
        ctx->pc = 0x1458D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1458D0u;
        // 0x1458d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1458D8u;
        goto label_1458d8;
    }
    ctx->pc = 0x1458D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1458D8u);
        ctx->pc = 0x1458D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1458D0u;
        // 0x1458d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1458D0u, 0x1458D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1458D8u;
label_1458d8:
    // 0x1458d8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1458d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1458dc:
    // 0x1458dc: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1458dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1458e0:
    // 0x1458e0: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x1458e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_1458e4:
    // 0x1458e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1458e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1458e8:
    // 0x1458e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1458e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1458ec:
    // 0x1458ec: 0x60f809  jalr        $v1
label_1458f0:
    if (ctx->pc == 0x1458F0u) {
        ctx->pc = 0x1458F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1458ECu;
        // 0x1458f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1458F4u;
        goto label_1458f4;
    }
    ctx->pc = 0x1458ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1458F4u);
        ctx->pc = 0x1458F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1458ECu;
        // 0x1458f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1458ECu, 0x1458F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1458F4u;
label_1458f4:
    // 0x1458f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1458f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1458f8:
    // 0x1458f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1458f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1458fc:
    // 0x1458fc: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x1458fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_145900:
    // 0x145900: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x145900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_145904:
    // 0x145904: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_145908:
    // 0x145908: 0x60f809  jalr        $v1
label_14590c:
    if (ctx->pc == 0x14590Cu) {
        ctx->pc = 0x14590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145908u;
        // 0x14590c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145910u;
        goto label_145910;
    }
    ctx->pc = 0x145908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x145910u);
        ctx->pc = 0x14590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145908u;
        // 0x14590c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145908u, 0x145910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145910u;
label_145910:
    // 0x145910: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x145910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_145914:
    // 0x145914: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x145914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_145918:
    // 0x145918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14591c:
    // 0x14591c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14591cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_145920:
    // 0x145920: 0xc064584  jal         func_191610
label_145924:
    if (ctx->pc == 0x145924u) {
        ctx->pc = 0x145924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145920u;
        // 0x145924: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145928u;
        goto label_145928;
    }
    ctx->pc = 0x145920u;
    SET_GPR_U32(ctx, 31, 0x145928u);
    ctx->pc = 0x145924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145920u;
    // 0x145924: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191610u, 0x145920u, 0x145928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145928u;
label_145928:
    // 0x145928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14592c:
    // 0x14592c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14592cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_145930:
    // 0x145930: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x145930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_145934:
    // 0x145934: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x145934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_145938:
    // 0x145938: 0xc064584  jal         func_191610
label_14593c:
    if (ctx->pc == 0x14593Cu) {
        ctx->pc = 0x14593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145938u;
        // 0x14593c: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x145940u;
        goto label_145940;
    }
    ctx->pc = 0x145938u;
    SET_GPR_U32(ctx, 31, 0x145940u);
    ctx->pc = 0x14593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145938u;
    // 0x14593c: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191610u, 0x145938u, 0x145940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145940u;
label_145940:
    // 0x145940: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x145940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_145944:
    // 0x145944: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x145944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_145948:
    // 0x145948: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x145948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_14594c:
    // 0x14594c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x14594cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_145950:
    // 0x145950: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x145950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_145954:
    // 0x145954: 0xc0f809  jalr        $a2
label_145958:
    if (ctx->pc == 0x145958u) {
        ctx->pc = 0x145958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145954u;
        // 0x145958: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14595Cu;
        goto label_14595c;
    }
    ctx->pc = 0x145954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x14595Cu);
        ctx->pc = 0x145958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145954u;
        // 0x145958: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145954u, 0x14595Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14595Cu;
label_14595c:
    // 0x14595c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_145960:
    // 0x145960: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x145960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_145964:
    // 0x145964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145968:
    // 0x145968: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x145968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_14596c:
    // 0x14596c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14596cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_145970:
    // 0x145970: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_145974:
    // 0x145974: 0x60f809  jalr        $v1
label_145978:
    if (ctx->pc == 0x145978u) {
        ctx->pc = 0x145978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145974u;
        // 0x145978: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14597Cu;
        goto label_14597c;
    }
    ctx->pc = 0x145974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14597Cu);
        ctx->pc = 0x145978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145974u;
        // 0x145978: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145974u, 0x14597Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14597Cu;
label_14597c:
    // 0x14597c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14597cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_145980:
    // 0x145980: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x145980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_145984:
    // 0x145984: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x145984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_145988:
    // 0x145988: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x145988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14598c:
    // 0x14598c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14598cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_145990:
    // 0x145990: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x145990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_145994:
    // 0x145994: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x145994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_145998:
    // 0x145998: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x145998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_14599c:
    // 0x14599c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x14599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1459a0:
    // 0x1459a0: 0x3e00008  jr          $ra
label_1459a4:
    if (ctx->pc == 0x1459A4u) {
        ctx->pc = 0x1459A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459A0u;
        // 0x1459a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1459A8u;
        goto label_fallthrough_0x1459a0;
    }
    ctx->pc = 0x1459A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1459A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459A0u;
        // 0x1459a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1459A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1459a0:
    ctx->pc = 0x1459A8u;
}
