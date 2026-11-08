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

// Function: entry_001bd634
// Address: 0x1bd634 - 0x1bd7bc
void entry_001bd634_0x1bd634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd634_0x1bd634");
#endif

    switch (ctx->pc) {
        case 0x1bd650u: goto label_1bd650;
        case 0x1bd6f8u: goto label_1bd6f8;
        case 0x1bd744u: goto label_1bd744;
        case 0x1bd74cu: goto label_1bd74c;
        case 0x1bd754u: goto label_1bd754;
        case 0x1bd7a4u: goto label_1bd7a4;
        default: break;
    }

    ctx->pc = 0x1bd634u;

    // 0x1bd634: 0x26510108  addiu       $s1, $s2, 0x108
    ctx->pc = 0x1bd634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x1bd638: 0xae720040  sw          $s2, 0x40($s3)
    ctx->pc = 0x1bd638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 18));
    // 0x1bd63c: 0x24c6ef40  addiu       $a2, $a2, -0x10C0
    ctx->pc = 0x1bd63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963008));
    // 0x1bd640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd644: 0x264510c0  addiu       $a1, $s2, 0x10C0
    ctx->pc = 0x1bd644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4288));
    // 0x1bd648: 0xc06f6ca  jal         func_1BDB28
    ctx->pc = 0x1BD648u;
    SET_GPR_U32(ctx, 31, 0x1BD650u);
    ctx->pc = 0x1BD64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD648u;
    // 0x1bd64c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDB28u, 0x1BD648u, 0x1BD650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD650u;
label_1bd650:
    // 0x1bd650: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1bd650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1bd654: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd658: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1bd658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1bd65c: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1bd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1bd660: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1bd660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1bd664: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
    // 0x1bd668: 0x2463eb88  addiu       $v1, $v1, -0x1478
    ctx->pc = 0x1bd668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962056));
    // 0x1bd66c: 0x2508eb98  addiu       $t0, $t0, -0x1468
    ctx->pc = 0x1bd66cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962072));
    // 0x1bd670: 0xfe620010  sd          $v0, 0x10($s3)
    ctx->pc = 0x1bd670u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    // 0x1bd674: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1bd674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bd678: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x1bd678u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x1bd67c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bd67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd680: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x1bd680u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x1bd684: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd688: 0xfe620028  sd          $v0, 0x28($s3)
    ctx->pc = 0x1bd688u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
    // 0x1bd68c: 0x24060600  addiu       $a2, $zero, 0x600
    ctx->pc = 0x1bd68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x1bd690: 0xfe620030  sd          $v0, 0x30($s3)
    ctx->pc = 0x1bd690u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 2));
    // 0x1bd694: 0xfe600038  sd          $zero, 0x38($s3)
    ctx->pc = 0x1bd694u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 0));
    // 0x1bd698: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x1bd698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x1bd69c: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x1bd69cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
    // 0x1bd6a0: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x1bd6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x1bd6a4: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x1bd6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x1bd6a8: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x1bd6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    // 0x1bd6ac: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x1bd6acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x1bd6b0: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x1bd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x1bd6b4: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x1bd6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x1bd6b8: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1bd6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1bd6bc: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x1bd6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x1bd6c0: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x1bd6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x1bd6c4: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x1bd6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x1bd6c8: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x1bd6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x1bd6cc: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x1bd6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x1bd6d0: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x1bd6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
    // 0x1bd6d4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1bd6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1bd6d8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1bd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1bd6dc: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x1bd6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x1bd6e0: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x1bd6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x1bd6e4: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x1bd6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x1bd6e8: 0xfe4200f0  sd          $v0, 0xF0($s2)
    ctx->pc = 0x1bd6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 240), GPR_U64(ctx, 2));
    // 0x1bd6ec: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x1bd6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x1bd6f0: 0xc06f6d8  jal         func_1BDB60
    ctx->pc = 0x1BD6F0u;
    SET_GPR_U32(ctx, 31, 0x1BD6F8u);
    ctx->pc = 0x1BD6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD6F0u;
    // 0x1bd6f4: 0xae480024  sw          $t0, 0x24($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDB60u, 0x1BD6F0u, 0x1BD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD6F8u;
label_1bd6f8:
    // 0x1bd6f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd6fc: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1bd6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x1bd700: 0xae4000fc  sw          $zero, 0xFC($s2)
    ctx->pc = 0x1bd700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
    // 0x1bd704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bd704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd708: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x1bd708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
    // 0x1bd70c: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x1bd70cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x1bd710: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x1bd710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x1bd714: 0xfe400078  sd          $zero, 0x78($s2)
    ctx->pc = 0x1bd714u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 0));
    // 0x1bd718: 0xae500080  sw          $s0, 0x80($s2)
    ctx->pc = 0x1bd718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 16));
    // 0x1bd71c: 0xfe400088  sd          $zero, 0x88($s2)
    ctx->pc = 0x1bd71cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 136), GPR_U64(ctx, 0));
    // 0x1bd720: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x1bd720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    // 0x1bd724: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x1bd724u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    // 0x1bd728: 0xae500094  sw          $s0, 0x94($s2)
    ctx->pc = 0x1bd728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 16));
    // 0x1bd72c: 0xae500098  sw          $s0, 0x98($s2)
    ctx->pc = 0x1bd72cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 16));
    // 0x1bd730: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x1bd730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
    // 0x1bd734: 0xae530858  sw          $s3, 0x858($s2)
    ctx->pc = 0x1bd734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2136), GPR_U32(ctx, 19));
    // 0x1bd738: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x1bd738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x1bd73c: 0xc06f844  jal         func_1BE110
    ctx->pc = 0x1BD73Cu;
    SET_GPR_U32(ctx, 31, 0x1BD744u);
    ctx->pc = 0x1BD740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD73Cu;
    // 0x1bd740: 0xae4300b0  sw          $v1, 0xB0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE110u, 0x1BD73Cu, 0x1BD744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD744u;
label_1bd744:
    // 0x1bd744: 0xc06f650  jal         func_1BD940
    ctx->pc = 0x1BD744u;
    SET_GPR_U32(ctx, 31, 0x1BD74Cu);
    ctx->pc = 0x1BD748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD744u;
    // 0x1bd748: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD940u, 0x1BD744u, 0x1BD74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD74Cu;
label_1bd74c:
    // 0x1bd74c: 0xc06f664  jal         func_1BD990
    ctx->pc = 0x1BD74Cu;
    SET_GPR_U32(ctx, 31, 0x1BD754u);
    ctx->pc = 0x1BD750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD74Cu;
    // 0x1bd750: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD990u, 0x1BD74Cu, 0x1BD754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD754u;
label_1bd754:
    // 0x1bd754: 0x264301e8  addiu       $v1, $s2, 0x1E8
    ctx->pc = 0x1bd754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 488));
    // 0x1bd758: 0x26420250  addiu       $v0, $s2, 0x250
    ctx->pc = 0x1bd758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    // 0x1bd75c: 0x264502b8  addiu       $a1, $s2, 0x2B8
    ctx->pc = 0x1bd75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 696));
    // 0x1bd760: 0x26460320  addiu       $a2, $s2, 0x320
    ctx->pc = 0x1bd760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
    // 0x1bd764: 0x26470388  addiu       $a3, $s2, 0x388
    ctx->pc = 0x1bd764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 904));
    // 0x1bd768: 0x264803f0  addiu       $t0, $s2, 0x3F0
    ctx->pc = 0x1bd768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
    // 0x1bd76c: 0x26490458  addiu       $t1, $s2, 0x458
    ctx->pc = 0x1bd76cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1112));
    // 0x1bd770: 0x264a04c0  addiu       $t2, $s2, 0x4C0
    ctx->pc = 0x1bd770u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 1216));
    // 0x1bd774: 0x264b0528  addiu       $t3, $s2, 0x528
    ctx->pc = 0x1bd774u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 1320));
    // 0x1bd778: 0xae4301b8  sw          $v1, 0x1B8($s2)
    ctx->pc = 0x1bd778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 3));
    // 0x1bd77c: 0xae4201bc  sw          $v0, 0x1BC($s2)
    ctx->pc = 0x1bd77cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
    // 0x1bd780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd784: 0xae4501c4  sw          $a1, 0x1C4($s2)
    ctx->pc = 0x1bd784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 5));
    // 0x1bd788: 0xae4601c8  sw          $a2, 0x1C8($s2)
    ctx->pc = 0x1bd788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 6));
    // 0x1bd78c: 0xae4701cc  sw          $a3, 0x1CC($s2)
    ctx->pc = 0x1bd78cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 7));
    // 0x1bd790: 0xae4801d4  sw          $t0, 0x1D4($s2)
    ctx->pc = 0x1bd790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 8));
    // 0x1bd794: 0xae4901d8  sw          $t1, 0x1D8($s2)
    ctx->pc = 0x1bd794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 9));
    // 0x1bd798: 0xae4a01dc  sw          $t2, 0x1DC($s2)
    ctx->pc = 0x1bd798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 10));
    // 0x1bd79c: 0xc06f6d0  jal         func_1BDB40
    ctx->pc = 0x1BD79Cu;
    SET_GPR_U32(ctx, 31, 0x1BD7A4u);
    ctx->pc = 0x1BD7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD79Cu;
    // 0x1bd7a0: 0xae4b01e4  sw          $t3, 0x1E4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDB40u, 0x1BD79Cu, 0x1BD7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD7A4u;
label_1bd7a4:
    // 0x1bd7a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1bd7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1bd7a8: 0xae500850  sw          $s0, 0x850($s2)
    ctx->pc = 0x1bd7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2128), GPR_U32(ctx, 16));
    // 0x1bd7ac: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x1bd7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
    // 0x1bd7b0: 0xae400854  sw          $zero, 0x854($s2)
    ctx->pc = 0x1bd7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2132), GPR_U32(ctx, 0));
    // 0x1bd7b4: 0xae42081c  sw          $v0, 0x81C($s2)
    ctx->pc = 0x1bd7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2076), GPR_U32(ctx, 2));
    // 0x1bd7b8: 0xae40084c  sw          $zero, 0x84C($s2)
    ctx->pc = 0x1bd7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2124), GPR_U32(ctx, 0));
    ctx->pc = 0x1bd7bcu;
}
