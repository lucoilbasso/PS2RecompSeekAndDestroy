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

// Function: Cmd_BEAM_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x10f248 - 0x10f3b0
void Cmd_BEAM_MAKE_Entry__FP15BsSCDEntControl_0x10f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_BEAM_MAKE_Entry__FP15BsSCDEntControl_0x10f248");
#endif

    switch (ctx->pc) {
        case 0x10f264u: goto label_10f264;
        case 0x10f26cu: goto label_10f26c;
        case 0x10f39cu: goto label_10f39c;
        default: break;
    }

    ctx->pc = 0x10f248u;

    // 0x10f248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10f250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10f254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f258: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x10f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x10f25c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10F25Cu;
    SET_GPR_U32(ctx, 31, 0x10F264u);
    ctx->pc = 0x10F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F25Cu;
    // 0x10f260: 0x8c510044  lw          $s1, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10F25Cu, 0x10F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F264u;
label_10f264:
    // 0x10f264: 0xc0649f6  jal         func_1927D8
    ctx->pc = 0x10F264u;
    SET_GPR_U32(ctx, 31, 0x10F26Cu);
    ctx->pc = 0x10F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F264u;
    // 0x10f268: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1927D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1927D8u, 0x10F264u, 0x10F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F26Cu;
label_10f26c:
    // 0x10f26c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x10f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x10f270: 0x24480190  addiu       $t0, $v0, 0x190
    ctx->pc = 0x10f270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x10f274: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x10f274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x10f278: 0x244a0150  addiu       $t2, $v0, 0x150
    ctx->pc = 0x10f278u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x10f27c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x10f27cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x1EB000u));
    // 0x10f280: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x10f280u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f284: 0xc63bc  dsll32      $t4, $t4, 14
    ctx->pc = 0x10f284u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 14));
    // 0x10f288: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x10f288u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f28c: 0xb5cf8  dsll        $t3, $t3, 19
    ctx->pc = 0x10f28cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 19);
    // 0x10f290: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x10f290u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10f294: 0xfc430190  sd          $v1, 0x190($v0)
    ctx->pc = 0x10f294u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 400), GPR_U64(ctx, 3));
    // 0x10f298: 0x3c0e0026  lui         $t6, 0x26
    ctx->pc = 0x10f298u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)38 << 16));
    // 0x10f29c: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x10f29cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10f2a0: 0xfc430198  sd          $v1, 0x198($v0)
    ctx->pc = 0x10f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 408), GPR_U64(ctx, 3));
    // 0x10f2a4: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x10f2a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10f2a8: 0xfc4401a0  sd          $a0, 0x1A0($v0)
    ctx->pc = 0x10f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 416), GPR_U64(ctx, 4));
    // 0x10f2ac: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x10f2acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x10f2b0: 0xfc4301a8  sd          $v1, 0x1A8($v0)
    ctx->pc = 0x10f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 424), GPR_U64(ctx, 3));
    // 0x10f2b4: 0xdca40020  ld          $a0, 0x20($a1)
    ctx->pc = 0x10f2b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x10f2b8: 0xfc4401b0  sd          $a0, 0x1B0($v0)
    ctx->pc = 0x10f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 432), GPR_U64(ctx, 4));
    // 0x10f2bc: 0xdca30028  ld          $v1, 0x28($a1)
    ctx->pc = 0x10f2bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x10f2c0: 0xfc4301b8  sd          $v1, 0x1B8($v0)
    ctx->pc = 0x10f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 440), GPR_U64(ctx, 3));
    // 0x10f2c4: 0xdca40030  ld          $a0, 0x30($a1)
    ctx->pc = 0x10f2c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x10f2c8: 0xfc4401c0  sd          $a0, 0x1C0($v0)
    ctx->pc = 0x10f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 448), GPR_U64(ctx, 4));
    // 0x10f2cc: 0xdca30038  ld          $v1, 0x38($a1)
    ctx->pc = 0x10f2ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x10f2d0: 0xfc4301c8  sd          $v1, 0x1C8($v0)
    ctx->pc = 0x10f2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 456), GPR_U64(ctx, 3));
    // 0x10f2d4: 0x95040018  lhu         $a0, 0x18($t0)
    ctx->pc = 0x10f2d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x10f2d8: 0xa544000c  sh          $a0, 0xC($t2)
    ctx->pc = 0x10f2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x10f2dc: 0x9503001a  lhu         $v1, 0x1A($t0)
    ctx->pc = 0x10f2dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26)));
    // 0x10f2e0: 0xa543000e  sh          $v1, 0xE($t2)
    ctx->pc = 0x10f2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x10f2e4: 0x95070018  lhu         $a3, 0x18($t0)
    ctx->pc = 0x10f2e4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x10f2e8: 0x95050004  lhu         $a1, 0x4($t0)
    ctx->pc = 0x10f2e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x10f2ec: 0x95090002  lhu         $t1, 0x2($t0)
    ctx->pc = 0x10f2ecu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x10f2f0: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x10f2f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
    // 0x10f2f4: 0x9503001a  lhu         $v1, 0x1A($t0)
    ctx->pc = 0x10f2f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26)));
    // 0x10f2f8: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x10f2f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x10f2fc: 0x9506000c  lhu         $a2, 0xC($t0)
    ctx->pc = 0x10f2fcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x10f300: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x10f300u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
    // 0x10f304: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x10f304u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10f308: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x10f308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x10f30c: 0x634fc  dsll32      $a2, $a2, 19
    ctx->pc = 0x10f30cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 19));
    // 0x10f310: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x10f310u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x10f314: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x10f314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x10f318: 0x95060030  lhu         $a2, 0x30($t0)
    ctx->pc = 0x10f318u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x10f31c: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x10f31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x10f320: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x10f320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x10f324: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x10f324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x10f328: 0x95030008  lhu         $v1, 0x8($t0)
    ctx->pc = 0x10f328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x10f32c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x10f32cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x10f330: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x10f330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10f334: 0x66182d  daddu       $v1, $v1, $a2
    ctx->pc = 0x10f334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
    // 0x10f338: 0xfd040038  sd          $a0, 0x38($t0)
    ctx->pc = 0x10f338u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 4));
    // 0x10f33c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x10f33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x10f340: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10f340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10f344: 0xdd450018  ld          $a1, 0x18($t2)
    ctx->pc = 0x10f344u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x10f348: 0xfd440010  sd          $a0, 0x10($t2)
    ctx->pc = 0x10f348u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 4));
    // 0x10f34c: 0xad2825  or          $a1, $a1, $t5
    ctx->pc = 0x10f34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 13));
    // 0x10f350: 0xfd450018  sd          $a1, 0x18($t2)
    ctx->pc = 0x10f350u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 5));
    // 0x10f354: 0xddc3d610  ld          $v1, -0x29F0($t6)
    ctx->pc = 0x10f354u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 14), 4294956560)));
    // 0x10f358: 0xfc430170  sd          $v1, 0x170($v0)
    ctx->pc = 0x10f358u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 368), GPR_U64(ctx, 3));
    // 0x10f35c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x10f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x10f360: 0xdc64d618  ld          $a0, -0x29E8($v1)
    ctx->pc = 0x10f360u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x25D618u));
    // 0x10f364: 0xfc440178  sd          $a0, 0x178($v0)
    ctx->pc = 0x10f364u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 376), GPR_U64(ctx, 4));
    // 0x10f368: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x10f368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x10f36c: 0xdc64d620  ld          $a0, -0x29E0($v1)
    ctx->pc = 0x10f36cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x25D620u));
    // 0x10f370: 0xfc440180  sd          $a0, 0x180($v0)
    ctx->pc = 0x10f370u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 384), GPR_U64(ctx, 4));
    // 0x10f374: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x10f374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x10f378: 0xdc64d628  ld          $a0, -0x29D8($v1)
    ctx->pc = 0x10f378u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x25D628u));
    // 0x10f37c: 0xfc440188  sd          $a0, 0x188($v0)
    ctx->pc = 0x10f37cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 392), GPR_U64(ctx, 4));
    // 0x10f380: 0x8c4301dc  lw          $v1, 0x1DC($v0)
    ctx->pc = 0x10f380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 476)));
    // 0x10f384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10f388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f38c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10f38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f390: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x10f390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x10f394: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10F394u;
    SET_GPR_U32(ctx, 31, 0x10F39Cu);
    ctx->pc = 0x10F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F394u;
    // 0x10f398: 0xac4301dc  sw          $v1, 0x1DC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 476), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10F394u, 0x10F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F39Cu;
label_10f39c:
    // 0x10f39c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f3a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f3a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3A8u;
        // 0x10f3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F3B0u;
}
