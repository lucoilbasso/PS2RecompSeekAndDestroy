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

// Function: Cmd_DOWN_LOAD_SHOP_BUY_PARTS_ID_Entry__FP15BsSCDEntControl
// Address: 0x115508 - 0x115740
void Cmd_DOWN_LOAD_SHOP_BUY_PARTS_ID_Entry__FP15BsSCDEntControl_0x115508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DOWN_LOAD_SHOP_BUY_PARTS_ID_Entry__FP15BsSCDEntControl_0x115508");
#endif

    switch (ctx->pc) {
        case 0x11552cu: goto label_11552c;
        case 0x115538u: goto label_115538;
        case 0x115544u: goto label_115544;
        case 0x11554cu: goto label_11554c;
        case 0x115578u: goto label_115578;
        case 0x115590u: goto label_115590;
        case 0x1155a0u: goto label_1155a0;
        case 0x1156a8u: goto label_1156a8;
        case 0x1156acu: goto label_1156ac;
        case 0x1156d0u: goto label_1156d0;
        case 0x1156e0u: goto label_1156e0;
        case 0x11570cu: goto label_11570c;
        default: break;
    }

    ctx->pc = 0x115508u;

    // 0x115508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11550c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11550cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115510: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x115510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x115514: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x115514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x115518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11551c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x115520: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x115520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x115524: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x115524u;
    SET_GPR_U32(ctx, 31, 0x11552Cu);
    ctx->pc = 0x115528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115524u;
    // 0x115528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x115524u, 0x11552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11552Cu;
label_11552c:
    // 0x11552c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11552cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115530: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x115530u;
    SET_GPR_U32(ctx, 31, 0x115538u);
    ctx->pc = 0x115534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115530u;
    // 0x115534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x115530u, 0x115538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115538u;
label_115538:
    // 0x115538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11553c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11553Cu;
    SET_GPR_U32(ctx, 31, 0x115544u);
    ctx->pc = 0x115540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11553Cu;
    // 0x115540: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11553Cu, 0x115544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115544u;
label_115544:
    // 0x115544: 0xc041794  jal         func_105E50
    ctx->pc = 0x115544u;
    SET_GPR_U32(ctx, 31, 0x11554Cu);
    ctx->pc = 0x115548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115544u;
    // 0x115548: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x115544u, 0x11554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11554Cu;
label_11554c:
    // 0x11554c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11554cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115550: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x115550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115554: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x115554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x115558: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115558u;
    {
        const bool branch_taken_0x115558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115558u;
        // 0x11555c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115558) {
            ctx->pc = 0x115568u;
            goto label_115568;
        }
    }
    ctx->pc = 0x115560u;
    // 0x115560: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x115560u;
    {
        const bool branch_taken_0x115560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115560u;
        // 0x115564: 0xac4300b0  sw          $v1, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115560) {
            ctx->pc = 0x115718u;
            goto label_115718;
        }
    }
    ctx->pc = 0x115568u;
label_115568:
    // 0x115568: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x115568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x11556c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x11556cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x115570: 0x12430069  beq         $s2, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x115570u;
    {
        const bool branch_taken_0x115570 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x115574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115570u;
        // 0x115574: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115570) {
            ctx->pc = 0x115718u;
            goto label_115718;
        }
    }
    ctx->pc = 0x115578u;
label_115578:
    // 0x115578: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x115578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x11557c: 0x28202  srl         $s0, $v0, 8
    ctx->pc = 0x11557cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x115580: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x115580u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x115584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115588: 0xc045360  jal         func_114D80
    ctx->pc = 0x115588u;
    SET_GPR_U32(ctx, 31, 0x115590u);
    ctx->pc = 0x11558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115588u;
    // 0x11558c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115588u, 0x115590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115590u;
label_115590:
    // 0x115590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115598: 0xc045360  jal         func_114D80
    ctx->pc = 0x115598u;
    SET_GPR_U32(ctx, 31, 0x1155A0u);
    ctx->pc = 0x11559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115598u;
    // 0x11559c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115598u, 0x1155A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155A0u;
label_1155a0:
    // 0x1155a0: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x1155a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1155a4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1155A4u;
    {
        const bool branch_taken_0x1155a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1155A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155A4u;
        // 0x1155a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155a4) {
            ctx->pc = 0x115674u;
            goto label_115674;
        }
    }
    ctx->pc = 0x1155ACu;
    // 0x1155ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1155acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1155b0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1155b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1155b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1155b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1155b8: 0x8c634470  lw          $v1, 0x4470($v1)
    ctx->pc = 0x1155b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17520)));
    // 0x1155bc: 0x600008  jr          $v1
    ctx->pc = 0x1155BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1155C8u: goto label_1155c8;
            case 0x1155D8u: goto label_1155d8;
            case 0x1155E8u: goto label_1155e8;
            case 0x1155F8u: goto label_1155f8;
            case 0x115608u: goto label_115608;
            case 0x115618u: goto label_115618;
            case 0x115628u: goto label_115628;
            case 0x115638u: goto label_115638;
            case 0x115648u: goto label_115648;
            case 0x115658u: goto label_115658;
            case 0x115668u: goto label_115668;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1155BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1155C4u;
    // 0x1155c4: 0x0  nop
    ctx->pc = 0x1155c4u;
    // NOP
label_1155c8:
    // 0x1155c8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1155c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1155cc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1155CCu;
    {
        const bool branch_taken_0x1155cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1155D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155CCu;
        // 0x1155d0: 0x2445d190  addiu       $a1, $v0, -0x2E70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155cc) {
            ctx->pc = 0x115674u;
            goto label_115674;
        }
    }
    ctx->pc = 0x1155D4u;
    // 0x1155d4: 0x0  nop
    ctx->pc = 0x1155d4u;
    // NOP
label_1155d8:
    // 0x1155d8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1155d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1155dc: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x1155dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x1155e0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1155E0u;
    {
        const bool branch_taken_0x1155e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1155E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155E0u;
        // 0x1155e4: 0x2445004c  addiu       $a1, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155e0) {
            ctx->pc = 0x115674u;
            goto label_115674;
        }
    }
    ctx->pc = 0x1155E8u;
label_1155e8:
    // 0x1155e8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1155e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1155ec: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x1155ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x1155f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1155F0u;
    {
        const bool branch_taken_0x1155f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1155F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155F0u;
        // 0x1155f4: 0x2445007c  addiu       $a1, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155f0) {
            ctx->pc = 0x115674u;
            goto label_115674;
        }
    }
    ctx->pc = 0x1155F8u;
label_1155f8:
    // 0x1155f8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1155f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1155fc: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x1155fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115600: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x115600u;
    {
        const bool branch_taken_0x115600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115600u;
        // 0x115604: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115600) {
            ctx->pc = 0x115674u;
            goto label_115674;
        }
    }
    ctx->pc = 0x115608u;
label_115608:
    // 0x115608: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11560c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115610: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x115610u;
    {
        const bool branch_taken_0x115610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115610u;
        // 0x115614: 0x244500e8  addiu       $a1, $v0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115610) {
            ctx->pc = 0x115674u;
            goto label_115674;
        }
    }
    ctx->pc = 0x115618u;
label_115618:
    // 0x115618: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11561c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115620: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115620u;
    {
        const bool branch_taken_0x115620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115620u;
        // 0x115624: 0x2445011c  addiu       $a1, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115620) {
            ctx->pc = 0x115674u;
            goto label_115674;
        }
    }
    ctx->pc = 0x115628u;
label_115628:
    // 0x115628: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11562c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115630: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115630u;
    {
        const bool branch_taken_0x115630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115630u;
        // 0x115634: 0x2445014c  addiu       $a1, $v0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115630) {
            ctx->pc = 0x115674u;
            goto label_115674;
        }
    }
    ctx->pc = 0x115638u;
label_115638:
    // 0x115638: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11563c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115640: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x115640u;
    {
        const bool branch_taken_0x115640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115640u;
        // 0x115644: 0x2445015c  addiu       $a1, $v0, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115640) {
            ctx->pc = 0x115674u;
            goto label_115674;
        }
    }
    ctx->pc = 0x115648u;
label_115648:
    // 0x115648: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11564c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115650: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115650u;
    {
        const bool branch_taken_0x115650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115650u;
        // 0x115654: 0x24450180  addiu       $a1, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115650) {
            ctx->pc = 0x115674u;
            goto label_115674;
        }
    }
    ctx->pc = 0x115658u;
label_115658:
    // 0x115658: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11565c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11565cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115660: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115660u;
    {
        const bool branch_taken_0x115660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115660u;
        // 0x115664: 0x244501a0  addiu       $a1, $v0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115660) {
            ctx->pc = 0x115674u;
            goto label_115674;
        }
    }
    ctx->pc = 0x115668u;
label_115668:
    // 0x115668: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11566c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115670: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x115670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_115674:
    // 0x115674: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x115674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x115678: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x115678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11567c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115680: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x115680u;
    {
        const bool branch_taken_0x115680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115680) {
            ctx->pc = 0x115684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115680u;
            // 0x115684: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11570Cu;
            goto label_11570c;
        }
    }
    ctx->pc = 0x115688u;
    // 0x115688: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11568c: 0x56420007  bnel        $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11568Cu;
    {
        const bool branch_taken_0x11568c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x11568c) {
            ctx->pc = 0x115690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11568Cu;
            // 0x115690: 0x128a03  sra         $s1, $s2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1156ACu;
            goto label_1156ac;
        }
    }
    ctx->pc = 0x115694u;
    // 0x115694: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x115694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x115698: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x115698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11569c: 0x24a54390  addiu       $a1, $a1, 0x4390
    ctx->pc = 0x11569cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    // 0x1156a0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1156A0u;
    SET_GPR_U32(ctx, 31, 0x1156A8u);
    ctx->pc = 0x1156A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156A0u;
    // 0x1156a4: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1156A0u, 0x1156A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156A8u;
label_1156a8:
    // 0x1156a8: 0x128a03  sra         $s1, $s2, 8
    ctx->pc = 0x1156a8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 8));
label_1156ac:
    // 0x1156ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1156acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156b0: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1156b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1156b4: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x1156b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1156b8: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1156b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1156bc: 0x2421c0c0  addiu       $at, $at, -0x3F40
    ctx->pc = 0x1156bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951104));
    // 0x1156c0: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x1156c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x1156c4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1156c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1156c8: 0xc041882  jal         func_106208
    ctx->pc = 0x1156C8u;
    SET_GPR_U32(ctx, 31, 0x1156D0u);
    ctx->pc = 0x1156CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156C8u;
    // 0x1156cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1156C8u, 0x1156D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156D0u;
label_1156d0:
    // 0x1156d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1156d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1156d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1156d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1156d8: 0xc041882  jal         func_106208
    ctx->pc = 0x1156D8u;
    SET_GPR_U32(ctx, 31, 0x1156E0u);
    ctx->pc = 0x1156DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156D8u;
    // 0x1156dc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1156D8u, 0x1156E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156E0u;
label_1156e0:
    // 0x1156e0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1156e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1156e4: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1156E4u;
    {
        const bool branch_taken_0x1156e4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1156e4) {
            ctx->pc = 0x1156E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1156E4u;
            // 0x1156e8: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11570Cu;
            goto label_11570c;
        }
    }
    ctx->pc = 0x1156ECu;
    // 0x1156ec: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x1156ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
    // 0x1156f0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1156f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1156f4: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1156f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1156f8: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x1156f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x1156fc: 0x8c620400  lw          $v0, 0x400($v1)
    ctx->pc = 0x1156fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2400B0u));
    // 0x115700: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x115704: 0xac620400  sw          $v0, 0x400($v1)
    ctx->pc = 0x115704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x115708: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x115708u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_11570c:
    // 0x11570c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115710: 0x1642ff99  bne         $s2, $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x115710u;
    {
        const bool branch_taken_0x115710 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x115714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115710u;
        // 0x115714: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115710) {
            ctx->pc = 0x115578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115578;
        }
    }
    ctx->pc = 0x115718u;
label_115718:
    // 0x115718: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11571c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11571cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115720: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x115720u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x115724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115728: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x115728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11572c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11572cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x115730: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x115730u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115734: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x115734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x115738: 0x3e00008  jr          $ra
    ctx->pc = 0x115738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115738u;
        // 0x11573c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115740u;
}
