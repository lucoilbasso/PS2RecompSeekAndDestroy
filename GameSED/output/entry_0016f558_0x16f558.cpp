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

// Function: entry_0016f558
// Address: 0x16f558 - 0x16f6cc
void entry_0016f558_0x16f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f558_0x16f558");
#endif

    switch (ctx->pc) {
        case 0x16f574u: goto label_16f574;
        case 0x16f57cu: goto label_16f57c;
        case 0x16f584u: goto label_16f584;
        case 0x16f58cu: goto label_16f58c;
        case 0x16f59cu: goto label_16f59c;
        case 0x16f5acu: goto label_16f5ac;
        case 0x16f5b8u: goto label_16f5b8;
        case 0x16f5ccu: goto label_16f5cc;
        case 0x16f5d8u: goto label_16f5d8;
        case 0x16f5fcu: goto label_16f5fc;
        case 0x16f61cu: goto label_16f61c;
        case 0x16f644u: goto label_16f644;
        case 0x16f64cu: goto label_16f64c;
        case 0x16f658u: goto label_16f658;
        case 0x16f664u: goto label_16f664;
        case 0x16f670u: goto label_16f670;
        case 0x16f67cu: goto label_16f67c;
        case 0x16f688u: goto label_16f688;
        case 0x16f690u: goto label_16f690;
        case 0x16f698u: goto label_16f698;
        case 0x16f6a4u: goto label_16f6a4;
        case 0x16f6acu: goto label_16f6ac;
        default: break;
    }

    ctx->pc = 0x16f558u;

    // 0x16f558: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x16f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x16f55c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16f560: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x16f560u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16f564: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x16f564u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f568: 0xffa30068  sd          $v1, 0x68($sp)
    ctx->pc = 0x16f568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 3));
    // 0x16f56c: 0xc06b342  jal         func_1ACD08
    ctx->pc = 0x16F56Cu;
    SET_GPR_U32(ctx, 31, 0x16F574u);
    ctx->pc = 0x16F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F56Cu;
    // 0x16f570: 0xffa40060  sd          $a0, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACD08u, 0x16F56Cu, 0x16F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F574u;
label_16f574:
    // 0x16f574: 0xc06b244  jal         func_1AC910
    ctx->pc = 0x16F574u;
    SET_GPR_U32(ctx, 31, 0x16F57Cu);
    ctx->pc = 0x1AC910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC910u, 0x16F574u, 0x16F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F57Cu;
label_16f57c:
    // 0x16f57c: 0xc06a91e  jal         func_1AA478
    ctx->pc = 0x16F57Cu;
    SET_GPR_U32(ctx, 31, 0x16F584u);
    ctx->pc = 0x1AA478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA478u, 0x16F57Cu, 0x16F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F584u;
label_16f584:
    // 0x16f584: 0xc06b08c  jal         func_1AC230
    ctx->pc = 0x16F584u;
    SET_GPR_U32(ctx, 31, 0x16F58Cu);
    ctx->pc = 0x16F588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F584u;
    // 0x16f588: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC230u, 0x16F584u, 0x16F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F58Cu;
label_16f58c:
    // 0x16f58c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x16f58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x16f590: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f594: 0xc06bad2  jal         func_1AEB48
    ctx->pc = 0x16F594u;
    SET_GPR_U32(ctx, 31, 0x16F59Cu);
    ctx->pc = 0x16F598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F594u;
    // 0x16f598: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB48u, 0x16F594u, 0x16F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F59Cu;
label_16f59c:
    // 0x16f59c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x16f59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x16f5a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16f5a4: 0xc06bad2  jal         func_1AEB48
    ctx->pc = 0x16F5A4u;
    SET_GPR_U32(ctx, 31, 0x16F5ACu);
    ctx->pc = 0x16F5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F5A4u;
    // 0x16f5a8: 0x34a50180  ori         $a1, $a1, 0x180 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB48u, 0x16F5A4u, 0x16F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5ACu;
label_16f5ac:
    // 0x16f5ac: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x16f5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16f5b0: 0xc06b13a  jal         func_1AC4E8
    ctx->pc = 0x16F5B0u;
    SET_GPR_U32(ctx, 31, 0x16F5B8u);
    ctx->pc = 0x16F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F5B0u;
    // 0x16f5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC4E8u, 0x16F5B0u, 0x16F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5B8u;
label_16f5b8:
    // 0x16f5b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f5c0: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x16f5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    // 0x16f5c4: 0xc06b0c4  jal         func_1AC310
    ctx->pc = 0x16F5C4u;
    SET_GPR_U32(ctx, 31, 0x16F5CCu);
    ctx->pc = 0x16F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F5C4u;
    // 0x16f5c8: 0xa7a30046  sh          $v1, 0x46($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 70), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC310u, 0x16F5C4u, 0x16F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5CCu;
label_16f5cc:
    // 0x16f5cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f5d0: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x16F5D0u;
    SET_GPR_U32(ctx, 31, 0x16F5D8u);
    ctx->pc = 0x16F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F5D0u;
    // 0x16f5d4: 0x2610ba10  addiu       $s0, $s0, -0x45F0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x16F5D0u, 0x16F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5D8u;
label_16f5d8:
    // 0x16f5d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f5dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16f5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f5e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f5e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16f5e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16f5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f5ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16f5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f5f0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x16f5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16f5f4: 0xc06a8b6  jal         func_1AA2D8
    ctx->pc = 0x16F5F4u;
    SET_GPR_U32(ctx, 31, 0x16F5FCu);
    ctx->pc = 0x16F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F5F4u;
    // 0x16f5f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA2D8u, 0x16F5F4u, 0x16F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5FCu;
label_16f5fc:
    // 0x16f5fc: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x16f5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x16f600: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x16f600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x16f604: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x16f604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f608: 0x24090031  addiu       $t1, $zero, 0x31
    ctx->pc = 0x16f608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x16f60c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x16f60cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f614: 0xc06aab4  jal         func_1AAAD0
    ctx->pc = 0x16F614u;
    SET_GPR_U32(ctx, 31, 0x16F61Cu);
    ctx->pc = 0x16F618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F614u;
    // 0x16f618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAAD0u, 0x16F614u, 0x16F61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F61Cu;
label_16f61c:
    // 0x16f61c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x16f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x16f620: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x16f620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x16f624: 0xa20201f1  sb          $v0, 0x1F1($s0)
    ctx->pc = 0x16f624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 497), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f628: 0xa20301f2  sb          $v1, 0x1F2($s0)
    ctx->pc = 0x16f628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 498), (uint8_t)GPR_U32(ctx, 3));
    // 0x16f62c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f630: 0xa2030102  sb          $v1, 0x102($s0)
    ctx->pc = 0x16f630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 3));
    // 0x16f634: 0xa2020100  sb          $v0, 0x100($s0)
    ctx->pc = 0x16f634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f638: 0xa2020101  sb          $v0, 0x101($s0)
    ctx->pc = 0x16f638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 257), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f63c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x16F63Cu;
    SET_GPR_U32(ctx, 31, 0x16F644u);
    ctx->pc = 0x16F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F63Cu;
    // 0x16f640: 0xa20201f0  sb          $v0, 0x1F0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 496), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x16F63Cu, 0x16F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F644u;
label_16f644:
    // 0x16f644: 0xc06bad6  jal         func_1AEB58
    ctx->pc = 0x16F644u;
    SET_GPR_U32(ctx, 31, 0x16F64Cu);
    ctx->pc = 0x16F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F644u;
    // 0x16f648: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB58u, 0x16F644u, 0x16F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F64Cu;
label_16f64c:
    // 0x16f64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f650: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x16F650u;
    SET_GPR_U32(ctx, 31, 0x16F658u);
    ctx->pc = 0x16F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F650u;
    // 0x16f654: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x16F650u, 0x16F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F658u;
label_16f658:
    // 0x16f658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f65c: 0xc06bb5e  jal         func_1AED78
    ctx->pc = 0x16F65Cu;
    SET_GPR_U32(ctx, 31, 0x16F664u);
    ctx->pc = 0x16F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F65Cu;
    // 0x16f660: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED78u, 0x16F65Cu, 0x16F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F664u;
label_16f664:
    // 0x16f664: 0x7ba50060  lq          $a1, 0x60($sp)
    ctx->pc = 0x16f664u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f668: 0xc06bb80  jal         func_1AEE00
    ctx->pc = 0x16F668u;
    SET_GPR_U32(ctx, 31, 0x16F670u);
    ctx->pc = 0x16F66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F668u;
    // 0x16f66c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE00u, 0x16F668u, 0x16F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F670u;
label_16f670:
    // 0x16f670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f674: 0xc06ac5e  jal         func_1AB178
    ctx->pc = 0x16F674u;
    SET_GPR_U32(ctx, 31, 0x16F67Cu);
    ctx->pc = 0x16F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F674u;
    // 0x16f678: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB178u, 0x16F674u, 0x16F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F67Cu;
label_16f67c:
    // 0x16f67c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f680: 0xc06bbb0  jal         func_1AEEC0
    ctx->pc = 0x16F680u;
    SET_GPR_U32(ctx, 31, 0x16F688u);
    ctx->pc = 0x16F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F680u;
    // 0x16f684: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEEC0u, 0x16F680u, 0x16F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F688u;
label_16f688:
    // 0x16f688: 0xc06bb86  jal         func_1AEE18
    ctx->pc = 0x16F688u;
    SET_GPR_U32(ctx, 31, 0x16F690u);
    ctx->pc = 0x16F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F688u;
    // 0x16f68c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE18u, 0x16F688u, 0x16F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F690u;
label_16f690:
    // 0x16f690: 0xc06bb74  jal         func_1AEDD0
    ctx->pc = 0x16F690u;
    SET_GPR_U32(ctx, 31, 0x16F698u);
    ctx->pc = 0x16F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F690u;
    // 0x16f694: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEDD0u, 0x16F690u, 0x16F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F698u;
label_16f698:
    // 0x16f698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f69c: 0xc06bb48  jal         func_1AED20
    ctx->pc = 0x16F69Cu;
    SET_GPR_U32(ctx, 31, 0x16F6A4u);
    ctx->pc = 0x16F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F69Cu;
    // 0x16f6a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED20u, 0x16F69Cu, 0x16F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6A4u;
label_16f6a4:
    // 0x16f6a4: 0xc06bada  jal         func_1AEB68
    ctx->pc = 0x16F6A4u;
    SET_GPR_U32(ctx, 31, 0x16F6ACu);
    ctx->pc = 0x16F6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6A4u;
    // 0x16f6a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB68u, 0x16F6A4u, 0x16F6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6ACu;
label_16f6ac:
    // 0x16f6ac: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x16f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x16f6b0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x16f6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16f6b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16f6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16f6b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16f6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6c0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x16f6c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x16f6c4: 0xc06b14e  jal         func_1AC538
    ctx->pc = 0x16F6C4u;
    SET_GPR_U32(ctx, 31, 0x16F6CCu);
    ctx->pc = 0x16F6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6C4u;
    // 0x16f6c8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC538u, 0x16F6C4u, 0x16F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6CCu;
}
