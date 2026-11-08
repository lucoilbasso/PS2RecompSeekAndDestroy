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

// Function: sceReadlink
// Address: 0x1b5478 - 0x1b5640
void sceReadlink_0x1b5478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceReadlink_0x1b5478");
#endif

    switch (ctx->pc) {
        case 0x1b54bcu: goto label_1b54bc;
        case 0x1b54d4u: goto label_1b54d4;
        case 0x1b5500u: goto label_1b5500;
        case 0x1b5564u: goto label_1b5564;
        case 0x1b5580u: goto label_1b5580;
        case 0x1b55bcu: goto label_1b55bc;
        case 0x1b55ccu: goto label_1b55cc;
        case 0x1b55d4u: goto label_1b55d4;
        case 0x1b55e8u: goto label_1b55e8;
        case 0x1b55f8u: goto label_1b55f8;
        case 0x1b5608u: goto label_1b5608;
        case 0x1b5610u: goto label_1b5610;
        default: break;
    }

    ctx->pc = 0x1b5478u;

    // 0x1b5478: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b5478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1b547c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b5480: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b5480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b5484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5488: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b5488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b548c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b548cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5490: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1b5490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1b5494: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b5494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5498: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b5498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b549c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1b549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1b54a0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1b54a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1b54a4: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x1b54a4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x1b54a8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b54a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b54ac: 0x26f29a80  addiu       $s2, $s7, -0x6580
    ctx->pc = 0x1b54acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b54b0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b54b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b54b4: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B54B4u;
    SET_GPR_U32(ctx, 31, 0x1B54BCu);
    ctx->pc = 0x1B54B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54B4u;
    // 0x1b54b8: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B54B4u, 0x1B54BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54BCu;
label_1b54bc:
    // 0x1b54bc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b54c0: 0x8c62aa04  lw          $v0, -0x55FC($v1)
    ctx->pc = 0x1b54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b54c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B54C4u;
    {
        const bool branch_taken_0x1b54c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b54c4) {
            ctx->pc = 0x1B54C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B54C4u;
            // 0x1b54c8: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B54D8u;
            goto label_1b54d8;
        }
    }
    ctx->pc = 0x1B54CCu;
    // 0x1b54cc: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B54CCu;
    SET_GPR_U32(ctx, 31, 0x1B54D4u);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B54CCu, 0x1B54D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54D4u;
label_1b54d4:
    // 0x1b54d4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b54d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b54d8:
    // 0x1b54d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b54d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54dc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b54dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b54e0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B54E0u;
    {
        const bool branch_taken_0x1b54e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54E0u;
        // 0x1b54e4: 0xa2420014  sb          $v0, 0x14($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54e0) {
            ctx->pc = 0x1B552Cu;
            goto label_1b552c;
        }
    }
    ctx->pc = 0x1B54E8u;
    // 0x1b54e8: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x1b54e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b54ec: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b54ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b54f0: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b54f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b54f4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b54f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b54f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b54f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b54fc: 0x0  nop
    ctx->pc = 0x1b54fcu;
    // NOP
label_1b5500:
    // 0x1b5500: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b5500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b5504: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B5504u;
    {
        const bool branch_taken_0x1b5504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5504u;
        // 0x1b5508: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5504) {
            ctx->pc = 0x1B553Cu;
            goto label_1b553c;
        }
    }
    ctx->pc = 0x1B550Cu;
    // 0x1b550c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1b550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1b5510: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b5510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5514: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1b5514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5518: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b5518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b551c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B551Cu;
    {
        const bool branch_taken_0x1b551c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b551c) {
            ctx->pc = 0x1B5520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B551Cu;
            // 0x1b5520: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5500;
        }
    }
    ctx->pc = 0x1B5524u;
    // 0x1b5524: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5524u;
    {
        const bool branch_taken_0x1b5524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5524u;
        // 0x1b5528: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5524) {
            ctx->pc = 0x1B5540u;
            goto label_1b5540;
        }
    }
    ctx->pc = 0x1B552Cu;
label_1b552c:
    // 0x1b552c: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x1b552cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b5530: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b5530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5534: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b5534u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b5538: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b5538u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_1b553c:
    // 0x1b553c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b553cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1b5540:
    // 0x1b5540: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5540u;
    {
        const bool branch_taken_0x1b5540 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5540) {
            ctx->pc = 0x1B5544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5540u;
            // 0x1b5544: 0xa2400413  sb          $zero, 0x413($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5548u;
            goto label_1b5548;
        }
    }
    ctx->pc = 0x1B5548u;
label_1b5548:
    // 0x1b5548: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x1b5548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1b554c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b554cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5550: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x1b5550u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1b5554: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x1b5554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
    // 0x1b5558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b5558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b555c: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B555Cu;
    SET_GPR_U32(ctx, 31, 0x1B5564u);
    ctx->pc = 0x1B5560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B555Cu;
    // 0x1b5560: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B555Cu, 0x1B5564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5564u;
label_1b5564:
    // 0x1b5564: 0x2690a6c0  addiu       $s0, $s4, -0x5940
    ctx->pc = 0x1b5564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    // 0x1b5568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b556c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b556cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b5570: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b5570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b5574: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b5574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b5578: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B5578u;
    SET_GPR_U32(ctx, 31, 0x1B5580u);
    ctx->pc = 0x1B557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5578u;
    // 0x1b557c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B5578u, 0x1B5580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5580u;
label_1b5580:
    // 0x1b5580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5584: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b5584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b5588: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b5588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b558c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b558cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b5590: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b5590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b5594: 0x26c4b180  addiu       $a0, $s6, -0x4E80
    ctx->pc = 0x1b5594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947200));
    // 0x1b5598: 0x26e79a80  addiu       $a3, $s7, -0x6580
    ctx->pc = 0x1b5598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b559c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1b559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b55a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b55a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b55a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b55a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55a8: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1b55a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1b55ac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b55acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55b0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b55b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b55b4: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B55B4u;
    SET_GPR_U32(ctx, 31, 0x1B55BCu);
    ctx->pc = 0x1B55B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55B4u;
    // 0x1b55b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B55B4u, 0x1B55BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55BCu;
label_1b55bc:
    // 0x1b55bc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B55BCu;
    {
        const bool branch_taken_0x1b55bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55BCu;
        // 0x1b55c0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55bc) {
            ctx->pc = 0x1B55DCu;
            goto label_1b55dc;
        }
    }
    ctx->pc = 0x1B55C4u;
    // 0x1b55c4: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B55C4u;
    SET_GPR_U32(ctx, 31, 0x1B55CCu);
    ctx->pc = 0x1B55C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55C4u;
    // 0x1b55c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B55C4u, 0x1B55CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55CCu;
label_1b55cc:
    // 0x1b55cc: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B55CCu;
    SET_GPR_U32(ctx, 31, 0x1B55D4u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B55CCu, 0x1B55D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55D4u;
label_1b55d4:
    // 0x1b55d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B55D4u;
    {
        const bool branch_taken_0x1b55d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55D4u;
        // 0x1b55d8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55d4) {
            ctx->pc = 0x1B5614u;
            goto label_1b5614;
        }
    }
    ctx->pc = 0x1B55DCu;
label_1b55dc:
    // 0x1b55dc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b55dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b55e0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B55E0u;
    SET_GPR_U32(ctx, 31, 0x1B55E8u);
    ctx->pc = 0x1B55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55E0u;
    // 0x1b55e4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B55E0u, 0x1B55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55E8u;
label_1b55e8:
    // 0x1b55e8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B55E8u;
    {
        const bool branch_taken_0x1b55e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b55e8) {
            ctx->pc = 0x1B5600u;
            goto label_1b5600;
        }
    }
    ctx->pc = 0x1B55F0u;
    // 0x1b55f0: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B55F0u;
    SET_GPR_U32(ctx, 31, 0x1B55F8u);
    ctx->pc = 0x1B55F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55F0u;
    // 0x1b55f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B55F0u, 0x1B55F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55F8u;
label_1b55f8:
    // 0x1b55f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B55F8u;
    {
        const bool branch_taken_0x1b55f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55F8u;
        // 0x1b55fc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55f8) {
            ctx->pc = 0x1B5614u;
            goto label_1b5614;
        }
    }
    ctx->pc = 0x1B5600u;
label_1b5600:
    // 0x1b5600: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B5600u;
    SET_GPR_U32(ctx, 31, 0x1B5608u);
    ctx->pc = 0x1B5604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5600u;
    // 0x1b5604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B5600u, 0x1B5608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5608u;
label_1b5608:
    // 0x1b5608: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B5608u;
    SET_GPR_U32(ctx, 31, 0x1B5610u);
    ctx->pc = 0x1B560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5608u;
    // 0x1b560c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B5608u, 0x1B5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5610u;
label_1b5610:
    // 0x1b5610: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b5610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5614:
    // 0x1b5614: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1b5614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b5618: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1b5618u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b561c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b561cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5620: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b5620u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b5624: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b5624u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b5628: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b5628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b562c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b562cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5630: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b5630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5634: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b5634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5638: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5638u;
        // 0x1b563c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5640u;
}
