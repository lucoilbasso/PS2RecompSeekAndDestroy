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

// Function: WSequenceJobExec__FP10WcSequence
// Address: 0x199380 - 0x1994c0
void WSequenceJobExec__FP10WcSequence_0x199380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSequenceJobExec__FP10WcSequence_0x199380");
#endif

    switch (ctx->pc) {
        case 0x199380u: goto label_199380;
        case 0x199384u: goto label_199384;
        case 0x199388u: goto label_199388;
        case 0x19938cu: goto label_19938c;
        case 0x199390u: goto label_199390;
        case 0x199394u: goto label_199394;
        case 0x199398u: goto label_199398;
        case 0x19939cu: goto label_19939c;
        case 0x1993a0u: goto label_1993a0;
        case 0x1993a4u: goto label_1993a4;
        case 0x1993a8u: goto label_1993a8;
        case 0x1993acu: goto label_1993ac;
        case 0x1993b0u: goto label_1993b0;
        case 0x1993b4u: goto label_1993b4;
        case 0x1993b8u: goto label_1993b8;
        case 0x1993bcu: goto label_1993bc;
        case 0x1993c0u: goto label_1993c0;
        case 0x1993c4u: goto label_1993c4;
        case 0x1993c8u: goto label_1993c8;
        case 0x1993ccu: goto label_1993cc;
        case 0x1993d0u: goto label_1993d0;
        case 0x1993d4u: goto label_1993d4;
        case 0x1993d8u: goto label_1993d8;
        case 0x1993dcu: goto label_1993dc;
        case 0x1993e0u: goto label_1993e0;
        case 0x1993e4u: goto label_1993e4;
        case 0x1993e8u: goto label_1993e8;
        case 0x1993ecu: goto label_1993ec;
        case 0x1993f0u: goto label_1993f0;
        case 0x1993f4u: goto label_1993f4;
        case 0x1993f8u: goto label_1993f8;
        case 0x1993fcu: goto label_1993fc;
        case 0x199400u: goto label_199400;
        case 0x199404u: goto label_199404;
        case 0x199408u: goto label_199408;
        case 0x19940cu: goto label_19940c;
        case 0x199410u: goto label_199410;
        case 0x199414u: goto label_199414;
        case 0x199418u: goto label_199418;
        case 0x19941cu: goto label_19941c;
        case 0x199420u: goto label_199420;
        case 0x199424u: goto label_199424;
        case 0x199428u: goto label_199428;
        case 0x19942cu: goto label_19942c;
        case 0x199430u: goto label_199430;
        case 0x199434u: goto label_199434;
        case 0x199438u: goto label_199438;
        case 0x19943cu: goto label_19943c;
        case 0x199440u: goto label_199440;
        case 0x199444u: goto label_199444;
        case 0x199448u: goto label_199448;
        case 0x19944cu: goto label_19944c;
        case 0x199450u: goto label_199450;
        case 0x199454u: goto label_199454;
        case 0x199458u: goto label_199458;
        case 0x19945cu: goto label_19945c;
        case 0x199460u: goto label_199460;
        case 0x199464u: goto label_199464;
        case 0x199468u: goto label_199468;
        case 0x19946cu: goto label_19946c;
        case 0x199470u: goto label_199470;
        case 0x199474u: goto label_199474;
        case 0x199478u: goto label_199478;
        case 0x19947cu: goto label_19947c;
        case 0x199480u: goto label_199480;
        case 0x199484u: goto label_199484;
        case 0x199488u: goto label_199488;
        case 0x19948cu: goto label_19948c;
        case 0x199490u: goto label_199490;
        case 0x199494u: goto label_199494;
        case 0x199498u: goto label_199498;
        case 0x19949cu: goto label_19949c;
        case 0x1994a0u: goto label_1994a0;
        case 0x1994a4u: goto label_1994a4;
        case 0x1994a8u: goto label_1994a8;
        case 0x1994acu: goto label_1994ac;
        case 0x1994b0u: goto label_1994b0;
        case 0x1994b4u: goto label_1994b4;
        case 0x1994b8u: goto label_1994b8;
        case 0x1994bcu: goto label_1994bc;
        default: break;
    }

    ctx->pc = 0x199380u;

label_199380:
    // 0x199380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x199380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_199384:
    // 0x199384: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x199384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_199388:
    // 0x199388: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x199388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_19938c:
    // 0x19938c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19938cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199390:
    // 0x199390: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x199390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_199394:
    // 0x199394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_199398:
    // 0x199398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19939c:
    // 0x19939c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1993a0:
    // 0x1993a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1993a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1993a4:
    // 0x1993a4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1993a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1993a8:
    // 0x1993a8: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1993a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1993ac:
    // 0x1993ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1993acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1993b0:
    // 0x1993b0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1993b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1993b4:
    // 0x1993b4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1993b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1993b8:
    // 0x1993b8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1993bc:
    // 0x1993bc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1993bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1993c0:
    // 0x1993c0: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x1993c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1993c4:
    // 0x1993c4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1993c8:
    if (ctx->pc == 0x1993C8u) {
        ctx->pc = 0x1993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993C4u;
        // 0x1993c8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993CCu;
        goto label_1993cc;
    }
    ctx->pc = 0x1993C4u;
    {
        const bool branch_taken_0x1993c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993C4u;
        // 0x1993c8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1993c4) {
            ctx->pc = 0x199498u;
            goto label_199498;
        }
    }
    ctx->pc = 0x1993CCu;
label_1993cc:
    // 0x1993cc: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1993ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1993d0:
    // 0x1993d0: 0x26720004  addiu       $s2, $s3, 0x4
    ctx->pc = 0x1993d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1993d4:
    // 0x1993d4: 0x2c560002  sltiu       $s6, $v0, 0x2
    ctx->pc = 0x1993d4u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1993d8:
    // 0x1993d8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1993d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1993dc:
    // 0x1993dc: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1993dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_1993e0:
    // 0x1993e0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1993e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1993e4:
    // 0x1993e4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1993e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1993e8:
    // 0x1993e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1993e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1993ec:
    // 0x1993ec: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1993ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_1993f0:
    // 0x1993f0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1993f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1993f4:
    // 0x1993f4: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
label_1993f8:
    if (ctx->pc == 0x1993F8u) {
        ctx->pc = 0x1993FCu;
        goto label_1993fc;
    }
    ctx->pc = 0x1993F4u;
    {
        const bool branch_taken_0x1993f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993f4) {
            ctx->pc = 0x199488u;
            goto label_199488;
        }
    }
    ctx->pc = 0x1993FCu;
label_1993fc:
    // 0x1993fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1993fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199400:
    // 0x199400: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x199400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_199404:
    // 0x199404: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_199408:
    if (ctx->pc == 0x199408u) {
        ctx->pc = 0x199408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199404u;
        // 0x199408: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19940Cu;
        goto label_19940c;
    }
    ctx->pc = 0x199404u;
    {
        const bool branch_taken_0x199404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199404u;
        // 0x199408: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199404) {
            ctx->pc = 0x199414u;
            goto label_199414;
        }
    }
    ctx->pc = 0x19940Cu;
label_19940c:
    // 0x19940c: 0x16a0001e  bnez        $s5, . + 4 + (0x1E << 2)
label_199410:
    if (ctx->pc == 0x199410u) {
        ctx->pc = 0x199414u;
        goto label_199414;
    }
    ctx->pc = 0x19940Cu;
    {
        const bool branch_taken_0x19940c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x19940c) {
            ctx->pc = 0x199488u;
            goto label_199488;
        }
    }
    ctx->pc = 0x199414u;
label_199414:
    // 0x199414: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_199418:
    if (ctx->pc == 0x199418u) {
        ctx->pc = 0x199418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199414u;
        // 0x199418: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19941Cu;
        goto label_19941c;
    }
    ctx->pc = 0x199414u;
    {
        const bool branch_taken_0x199414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199414u;
        // 0x199418: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199414) {
            ctx->pc = 0x199424u;
            goto label_199424;
        }
    }
    ctx->pc = 0x19941Cu;
label_19941c:
    // 0x19941c: 0x16c0001a  bnez        $s6, . + 4 + (0x1A << 2)
label_199420:
    if (ctx->pc == 0x199420u) {
        ctx->pc = 0x199424u;
        goto label_199424;
    }
    ctx->pc = 0x19941Cu;
    {
        const bool branch_taken_0x19941c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x19941c) {
            ctx->pc = 0x199488u;
            goto label_199488;
        }
    }
    ctx->pc = 0x199424u;
label_199424:
    // 0x199424: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x199424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199428:
    // 0x199428: 0xc05dd1a  jal         func_177468
label_19942c:
    if (ctx->pc == 0x19942Cu) {
        ctx->pc = 0x19942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199428u;
        // 0x19942c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199430u;
        goto label_199430;
    }
    ctx->pc = 0x199428u;
    SET_GPR_U32(ctx, 31, 0x199430u);
    ctx->pc = 0x19942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199428u;
    // 0x19942c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177468u, 0x199428u, 0x199430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199430u;
label_199430:
    // 0x199430: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x199430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199434:
    // 0x199434: 0x0  nop
    ctx->pc = 0x199434u;
    // NOP
label_199438:
    // 0x199438: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x199438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_19943c:
    // 0x19943c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_199440:
    // 0x199440: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_199444:
    if (ctx->pc == 0x199444u) {
        ctx->pc = 0x199444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199440u;
        // 0x199444: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199448u;
        goto label_199448;
    }
    ctx->pc = 0x199440u;
    {
        const bool branch_taken_0x199440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199440u;
        // 0x199444: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199440) {
            ctx->pc = 0x199470u;
            goto label_199470;
        }
    }
    ctx->pc = 0x199448u;
label_199448:
    // 0x199448: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x199448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19944c:
    // 0x19944c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_199450:
    if (ctx->pc == 0x199450u) {
        ctx->pc = 0x199450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19944Cu;
        // 0x199450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199454u;
        goto label_199454;
    }
    ctx->pc = 0x19944Cu;
    {
        const bool branch_taken_0x19944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19944Cu;
        // 0x199450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19944c) {
            ctx->pc = 0x199468u;
            goto label_199468;
        }
    }
    ctx->pc = 0x199454u;
label_199454:
    // 0x199454: 0x40f809  jalr        $v0
label_199458:
    if (ctx->pc == 0x199458u) {
        ctx->pc = 0x199458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199454u;
        // 0x199458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19945Cu;
        goto label_19945c;
    }
    ctx->pc = 0x199454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19945Cu);
        ctx->pc = 0x199458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199454u;
        // 0x199458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199454u, 0x19945Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19945Cu;
label_19945c:
    // 0x19945c: 0x10000005  b           . + 4 + (0x5 << 2)
label_199460:
    if (ctx->pc == 0x199460u) {
        ctx->pc = 0x199460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19945Cu;
        // 0x199460: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199464u;
        goto label_199464;
    }
    ctx->pc = 0x19945Cu;
    {
        const bool branch_taken_0x19945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19945Cu;
        // 0x199460: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19945c) {
            ctx->pc = 0x199474u;
            goto label_199474;
        }
    }
    ctx->pc = 0x199464u;
label_199464:
    // 0x199464: 0x0  nop
    ctx->pc = 0x199464u;
    // NOP
label_199468:
    // 0x199468: 0xc0685ca  jal         func_1A1728
label_19946c:
    if (ctx->pc == 0x19946Cu) {
        ctx->pc = 0x19946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199468u;
        // 0x19946c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199470u;
        goto label_199470;
    }
    ctx->pc = 0x199468u;
    SET_GPR_U32(ctx, 31, 0x199470u);
    ctx->pc = 0x19946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199468u;
    // 0x19946c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1728u, 0x199468u, 0x199470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199470u;
label_199470:
    // 0x199470: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x199470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_199474:
    // 0x199474: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x199474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_199478:
    // 0x199478: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
label_19947c:
    if (ctx->pc == 0x19947Cu) {
        ctx->pc = 0x19947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199478u;
        // 0x19947c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199480u;
        goto label_199480;
    }
    ctx->pc = 0x199478u;
    {
        const bool branch_taken_0x199478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x199478) {
            ctx->pc = 0x19947Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199478u;
            // 0x19947c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199438;
        }
    }
    ctx->pc = 0x199480u;
label_199480:
    // 0x199480: 0xc05dd1c  jal         func_177470
label_199484:
    if (ctx->pc == 0x199484u) {
        ctx->pc = 0x199488u;
        goto label_199488;
    }
    ctx->pc = 0x199480u;
    SET_GPR_U32(ctx, 31, 0x199488u);
    ctx->pc = 0x177470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177470u, 0x199480u, 0x199488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199488u;
label_199488:
    // 0x199488: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x199488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_19948c:
    // 0x19948c: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x19948cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_199490:
    // 0x199490: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_199494:
    if (ctx->pc == 0x199494u) {
        ctx->pc = 0x199498u;
        goto label_199498;
    }
    ctx->pc = 0x199490u;
    {
        const bool branch_taken_0x199490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199490) {
            ctx->pc = 0x1993D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1993d8;
        }
    }
    ctx->pc = 0x199498u;
label_199498:
    // 0x199498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19949c:
    // 0x19949c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19949cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1994a0:
    // 0x1994a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1994a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1994a4:
    // 0x1994a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1994a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1994a8:
    // 0x1994a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1994a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1994ac:
    // 0x1994ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1994acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1994b0:
    // 0x1994b0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1994b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1994b4:
    // 0x1994b4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1994b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1994b8:
    // 0x1994b8: 0x3e00008  jr          $ra
label_1994bc:
    if (ctx->pc == 0x1994BCu) {
        ctx->pc = 0x1994BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994B8u;
        // 0x1994bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994C0u;
        goto label_fallthrough_0x1994b8;
    }
    ctx->pc = 0x1994B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1994BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994B8u;
        // 0x1994bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1994B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1994b8:
    ctx->pc = 0x1994C0u;
}
