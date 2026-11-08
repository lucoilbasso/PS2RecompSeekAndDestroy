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

// Function: Cmd_TANK_EQU_PARTS_Entry__FP15BsSCDEntControl
// Address: 0x116580 - 0x116774
void Cmd_TANK_EQU_PARTS_Entry__FP15BsSCDEntControl_0x116580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_EQU_PARTS_Entry__FP15BsSCDEntControl_0x116580");
#endif

    switch (ctx->pc) {
        case 0x1165a4u: goto label_1165a4;
        case 0x1165c8u: goto label_1165c8;
        case 0x11660cu: goto label_11660c;
        case 0x11661cu: goto label_11661c;
        case 0x1166d0u: goto label_1166d0;
        case 0x1166d8u: goto label_1166d8;
        case 0x1166f8u: goto label_1166f8;
        case 0x116720u: goto label_116720;
        case 0x116734u: goto label_116734;
        case 0x11675cu: goto label_11675c;
        default: break;
    }

    ctx->pc = 0x116580u;

    // 0x116580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x116584: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116588: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x116588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x11658c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x116590: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x116594: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x116594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x116598: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11659c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11659Cu;
    SET_GPR_U32(ctx, 31, 0x1165A4u);
    ctx->pc = 0x1165A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11659Cu;
    // 0x1165a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11659Cu, 0x1165A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1165A4u;
label_1165a4:
    // 0x1165a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1165a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1165a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1165a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1165ac: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1165acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1165b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1165b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1165b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1165b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1165b8: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1165B8u;
    {
        const bool branch_taken_0x1165b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1165b8) {
            ctx->pc = 0x1165BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1165B8u;
            // 0x1165bc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1165D0u;
            goto label_1165d0;
        }
    }
    ctx->pc = 0x1165C0u;
    // 0x1165c0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1165C0u;
    SET_GPR_U32(ctx, 31, 0x1165C8u);
    ctx->pc = 0x1165C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1165C0u;
    // 0x1165c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1165C0u, 0x1165C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1165C8u;
label_1165c8:
    // 0x1165c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1165c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1165cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1165ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1165d0:
    // 0x1165d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1165d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1165d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1165D4u;
    {
        const bool branch_taken_0x1165d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1165D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165D4u;
        // 0x1165d8: 0x29a03  sra         $s3, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165d4) {
            ctx->pc = 0x1165E8u;
            goto label_1165e8;
        }
    }
    ctx->pc = 0x1165DCu;
    // 0x1165dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1165dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1165e0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1165E0u;
    {
        const bool branch_taken_0x1165e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165E0u;
        // 0x1165e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165e0) {
            ctx->pc = 0x116734u;
            goto label_116734;
        }
    }
    ctx->pc = 0x1165E8u;
label_1165e8:
    // 0x1165e8: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x1165e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1165ec: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x1165ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x1165f0: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x1165f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1165f4: 0x38202  srl         $s0, $v1, 8
    ctx->pc = 0x1165f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1165f8: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1165f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1165fc: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x1165fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x116600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116604: 0xc045360  jal         func_114D80
    ctx->pc = 0x116604u;
    SET_GPR_U32(ctx, 31, 0x11660Cu);
    ctx->pc = 0x116608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116604u;
    // 0x116608: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x116604u, 0x11660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11660Cu;
label_11660c:
    // 0x11660c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116610: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x116610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116614: 0xc045360  jal         func_114D80
    ctx->pc = 0x116614u;
    SET_GPR_U32(ctx, 31, 0x11661Cu);
    ctx->pc = 0x116618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116614u;
    // 0x116618: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x116614u, 0x11661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11661Cu;
label_11661c:
    // 0x11661c: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x11661cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x116620: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x116620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x116624: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x116624u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
    // 0x116628: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x116628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x11662c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x11662Cu;
    {
        const bool branch_taken_0x11662c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11662Cu;
        // 0x116630: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11662c) {
            ctx->pc = 0x1166A4u;
            goto label_1166a4;
        }
    }
    ctx->pc = 0x116634u;
    // 0x116634: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x116634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x116638: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x116638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x11663c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116640: 0x8c634590  lw          $v1, 0x4590($v1)
    ctx->pc = 0x116640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17808)));
    // 0x116644: 0x600008  jr          $v1
    ctx->pc = 0x116644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116650u: goto label_116650;
            case 0x116658u: goto label_116658;
            case 0x116660u: goto label_116660;
            case 0x116668u: goto label_116668;
            case 0x116670u: goto label_116670;
            case 0x116678u: goto label_116678;
            case 0x116680u: goto label_116680;
            case 0x116688u: goto label_116688;
            case 0x116690u: goto label_116690;
            case 0x116698u: goto label_116698;
            case 0x1166A0u: goto label_1166a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116644u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11664Cu;
    // 0x11664c: 0x0  nop
    ctx->pc = 0x11664cu;
    // NOP
label_116650:
    // 0x116650: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x116650u;
    {
        const bool branch_taken_0x116650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116650u;
        // 0x116654: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116650) {
            ctx->pc = 0x1166A4u;
            goto label_1166a4;
        }
    }
    ctx->pc = 0x116658u;
label_116658:
    // 0x116658: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x116658u;
    {
        const bool branch_taken_0x116658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116658u;
        // 0x11665c: 0x2623004c  addiu       $v1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116658) {
            ctx->pc = 0x1166A4u;
            goto label_1166a4;
        }
    }
    ctx->pc = 0x116660u;
label_116660:
    // 0x116660: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x116660u;
    {
        const bool branch_taken_0x116660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116660u;
        // 0x116664: 0x2623007c  addiu       $v1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116660) {
            ctx->pc = 0x1166A4u;
            goto label_1166a4;
        }
    }
    ctx->pc = 0x116668u;
label_116668:
    // 0x116668: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x116668u;
    {
        const bool branch_taken_0x116668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116668u;
        // 0x11666c: 0x262300c0  addiu       $v1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116668) {
            ctx->pc = 0x1166A4u;
            goto label_1166a4;
        }
    }
    ctx->pc = 0x116670u;
label_116670:
    // 0x116670: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x116670u;
    {
        const bool branch_taken_0x116670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116670u;
        // 0x116674: 0x262300e8  addiu       $v1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116670) {
            ctx->pc = 0x1166A4u;
            goto label_1166a4;
        }
    }
    ctx->pc = 0x116678u;
label_116678:
    // 0x116678: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x116678u;
    {
        const bool branch_taken_0x116678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116678u;
        // 0x11667c: 0x2623011c  addiu       $v1, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116678) {
            ctx->pc = 0x1166A4u;
            goto label_1166a4;
        }
    }
    ctx->pc = 0x116680u;
label_116680:
    // 0x116680: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x116680u;
    {
        const bool branch_taken_0x116680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116680u;
        // 0x116684: 0x2623014c  addiu       $v1, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116680) {
            ctx->pc = 0x1166A4u;
            goto label_1166a4;
        }
    }
    ctx->pc = 0x116688u;
label_116688:
    // 0x116688: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116688u;
    {
        const bool branch_taken_0x116688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116688u;
        // 0x11668c: 0x2623015c  addiu       $v1, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116688) {
            ctx->pc = 0x1166A4u;
            goto label_1166a4;
        }
    }
    ctx->pc = 0x116690u;
label_116690:
    // 0x116690: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116690u;
    {
        const bool branch_taken_0x116690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116690u;
        // 0x116694: 0x26230180  addiu       $v1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116690) {
            ctx->pc = 0x1166A4u;
            goto label_1166a4;
        }
    }
    ctx->pc = 0x116698u;
label_116698:
    // 0x116698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116698u;
    {
        const bool branch_taken_0x116698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116698u;
        // 0x11669c: 0x262301a0  addiu       $v1, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116698) {
            ctx->pc = 0x1166A4u;
            goto label_1166a4;
        }
    }
    ctx->pc = 0x1166A0u;
label_1166a0:
    // 0x1166a0: 0x262301c0  addiu       $v1, $s1, 0x1C0
    ctx->pc = 0x1166a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_1166a4:
    // 0x1166a4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1166a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1166a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1166a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1166ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1166acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1166b0: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1166B0u;
    {
        const bool branch_taken_0x1166b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1166b0) {
            ctx->pc = 0x1166B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1166B0u;
            // 0x1166b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1166D8u;
            goto label_1166d8;
        }
    }
    ctx->pc = 0x1166B8u;
    // 0x1166b8: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1166b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1166bc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1166bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1166c0: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x1166c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x1166c4: 0x24a5d1a8  addiu       $a1, $a1, -0x2E58
    ctx->pc = 0x1166c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955432));
    // 0x1166c8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1166C8u;
    SET_GPR_U32(ctx, 31, 0x1166D0u);
    ctx->pc = 0x1166CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166C8u;
    // 0x1166cc: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1166C8u, 0x1166D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166D0u;
label_1166d0:
    // 0x1166d0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1166D0u;
    {
        const bool branch_taken_0x1166d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1166D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166D0u;
        // 0x1166d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166d0) {
            ctx->pc = 0x11675Cu;
            goto label_11675c;
        }
    }
    ctx->pc = 0x1166D8u;
label_1166d8:
    // 0x1166d8: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x1166d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x1166dc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1166dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1166e0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1166e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1166e4: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1166e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1166e8: 0x2470c540  addiu       $s0, $v1, -0x3AC0
    ctx->pc = 0x1166e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x1166ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1166ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1166f0: 0xc0458fc  jal         func_1163F0
    ctx->pc = 0x1166F0u;
    SET_GPR_U32(ctx, 31, 0x1166F8u);
    ctx->pc = 0x1166F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166F0u;
    // 0x1166f4: 0x8c440fe8  lw          $a0, 0xFE8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1163F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1163F0u, 0x1166F0u, 0x1166F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166F8u;
label_1166f8:
    // 0x1166f8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1166F8u;
    {
        const bool branch_taken_0x1166f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1166FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166F8u;
        // 0x1166fc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166f8) {
            ctx->pc = 0x116738u;
            goto label_116738;
        }
    }
    ctx->pc = 0x116700u;
    // 0x116700: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x116700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116704: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x116704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x116708: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x116708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11670c: 0x24844560  addiu       $a0, $a0, 0x4560
    ctx->pc = 0x11670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17760));
    // 0x116710: 0xb11818  mult        $v1, $a1, $s1
    ctx->pc = 0x116710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x116714: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x116714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x116718: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x116718u;
    SET_GPR_U32(ctx, 31, 0x116720u);
    ctx->pc = 0x11671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116718u;
    // 0x11671c: 0x8c460fe8  lw          $a2, 0xFE8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x116718u, 0x116720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116720u;
label_116720:
    // 0x116720: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x116720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x116724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116728: 0x24a5d1a8  addiu       $a1, $a1, -0x2E58
    ctx->pc = 0x116728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955432));
    // 0x11672c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11672Cu;
    SET_GPR_U32(ctx, 31, 0x116734u);
    ctx->pc = 0x116730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11672Cu;
    // 0x116730: 0x2406002e  addiu       $a2, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11672Cu, 0x116734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116734u;
label_116734:
    // 0x116734: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x116734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_116738:
    // 0x116738: 0x24031268  addiu       $v1, $zero, 0x1268
    ctx->pc = 0x116738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4712));
    // 0x11673c: 0x97a40004  lhu         $a0, 0x4($sp)
    ctx->pc = 0x11673cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x116740: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x116740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x116744: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x116744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x116748: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x116748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11674c: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x116750: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x116750u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x116754: 0xa424d530  sh          $a0, -0x2AD0($at)
    ctx->pc = 0x116754u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956336), (uint16_t)GPR_U32(ctx, 4));
    // 0x116758: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11675c:
    // 0x11675c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11675cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116760: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116764: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x116764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116768: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11676c: 0x3e00008  jr          $ra
    ctx->pc = 0x11676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11676Cu;
        // 0x116770: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116774u;
}
