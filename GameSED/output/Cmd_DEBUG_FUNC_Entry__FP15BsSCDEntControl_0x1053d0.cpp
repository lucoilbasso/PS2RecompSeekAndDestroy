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

// Function: Cmd_DEBUG_FUNC_Entry__FP15BsSCDEntControl
// Address: 0x1053d0 - 0x1057b0
void Cmd_DEBUG_FUNC_Entry__FP15BsSCDEntControl_0x1053d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DEBUG_FUNC_Entry__FP15BsSCDEntControl_0x1053d0");
#endif

    switch (ctx->pc) {
        case 0x1053e8u: goto label_1053e8;
        case 0x105418u: goto label_105418;
        case 0x10543cu: goto label_10543c;
        case 0x105448u: goto label_105448;
        case 0x105474u: goto label_105474;
        case 0x105480u: goto label_105480;
        case 0x1054a0u: goto label_1054a0;
        case 0x1054b0u: goto label_1054b0;
        case 0x1054b8u: goto label_1054b8;
        case 0x1054c0u: goto label_1054c0;
        case 0x1054e8u: goto label_1054e8;
        case 0x105510u: goto label_105510;
        case 0x105530u: goto label_105530;
        case 0x105578u: goto label_105578;
        case 0x105598u: goto label_105598;
        case 0x1055b8u: goto label_1055b8;
        case 0x1055c8u: goto label_1055c8;
        case 0x1055dcu: goto label_1055dc;
        case 0x10561cu: goto label_10561c;
        case 0x105624u: goto label_105624;
        case 0x105638u: goto label_105638;
        case 0x105664u: goto label_105664;
        case 0x105680u: goto label_105680;
        case 0x105690u: goto label_105690;
        case 0x1056a0u: goto label_1056a0;
        case 0x1056b0u: goto label_1056b0;
        case 0x1056b8u: goto label_1056b8;
        case 0x1056d0u: goto label_1056d0;
        case 0x1056e0u: goto label_1056e0;
        case 0x1056f0u: goto label_1056f0;
        default: break;
    }

    ctx->pc = 0x1053d0u;

    // 0x1053d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1053d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1053d4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1053d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1053d8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1053d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1053dc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1053dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1053e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1053E0u;
    SET_GPR_U32(ctx, 31, 0x1053E8u);
    ctx->pc = 0x1053E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1053E0u;
    // 0x1053e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1053E0u, 0x1053E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1053E8u;
label_1053e8:
    // 0x1053e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1053e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053ec: 0x2c620064  sltiu       $v0, $v1, 0x64
    ctx->pc = 0x1053ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x1053f0: 0x504000eb  beql        $v0, $zero, . + 4 + (0xEB << 2)
    ctx->pc = 0x1053F0u;
    {
        const bool branch_taken_0x1053f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1053f0) {
            ctx->pc = 0x1053F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1053F0u;
            // 0x1053f4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x1053F8u;
    // 0x1053f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1053f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1053fc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1053fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x105400: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x105400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105404: 0x8c633910  lw          $v1, 0x3910($v1)
    ctx->pc = 0x105404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14608)));
    // 0x105408: 0x600008  jr          $v1
    ctx->pc = 0x105408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105410u: goto label_105410;
            case 0x105420u: goto label_105420;
            case 0x105458u: goto label_105458;
            case 0x105498u: goto label_105498;
            case 0x1054C8u: goto label_1054c8;
            case 0x1054E0u: goto label_1054e0;
            case 0x1054F0u: goto label_1054f0;
            case 0x105558u: goto label_105558;
            case 0x1055F8u: goto label_1055f8;
            case 0x105630u: goto label_105630;
            case 0x105670u: goto label_105670;
            case 0x105698u: goto label_105698;
            case 0x1056E8u: goto label_1056e8;
            case 0x105720u: goto label_105720;
            case 0x10579Cu: goto label_10579c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105408u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x105410u;
label_105410:
    // 0x105410: 0xc05be9e  jal         func_16FA78
    ctx->pc = 0x105410u;
    SET_GPR_U32(ctx, 31, 0x105418u);
    ctx->pc = 0x16FA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FA78u, 0x105410u, 0x105418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105418u;
label_105418:
    // 0x105418: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x105418u;
    {
        const bool branch_taken_0x105418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105418u;
        // 0x10541c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105418) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x105420u;
label_105420:
    // 0x105420: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x105420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x105424: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x105424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x105428: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10542c: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10542Cu;
    {
        const bool branch_taken_0x10542c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10542c) {
            ctx->pc = 0x105430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10542Cu;
            // 0x105430: 0x8f8288c8  lw          $v0, -0x7738($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105448u;
            goto label_105448;
        }
    }
    ctx->pc = 0x105434u;
    // 0x105434: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x105434u;
    SET_GPR_U32(ctx, 31, 0x10543Cu);
    ctx->pc = 0x105438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105434u;
    // 0x105438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x105434u, 0x10543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10543Cu;
label_10543c:
    // 0x10543c: 0x8f8388c8  lw          $v1, -0x7738($gp)
    ctx->pc = 0x10543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936776)));
    // 0x105440: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x105440u;
    {
        const bool branch_taken_0x105440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105440u;
        // 0x105444: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105440) {
            ctx->pc = 0x10579Cu;
            goto label_10579c;
        }
    }
    ctx->pc = 0x105448u;
label_105448:
    // 0x105448: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x105448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10544c: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x10544Cu;
    {
        const bool branch_taken_0x10544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10544Cu;
        // 0x105450: 0xaf8288c8  sw          $v0, -0x7738($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10544c) {
            ctx->pc = 0x10579Cu;
            goto label_10579c;
        }
    }
    ctx->pc = 0x105454u;
    // 0x105454: 0x0  nop
    ctx->pc = 0x105454u;
    // NOP
label_105458:
    // 0x105458: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x105458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10545c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10545cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x105460: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105464: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105464u;
    {
        const bool branch_taken_0x105464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x105464) {
            ctx->pc = 0x105468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105464u;
            // 0x105468: 0x8f8288cc  lw          $v0, -0x7734($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105480u;
            goto label_105480;
        }
    }
    ctx->pc = 0x10546Cu;
    // 0x10546c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x10546Cu;
    SET_GPR_U32(ctx, 31, 0x105474u);
    ctx->pc = 0x105470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10546Cu;
    // 0x105470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x10546Cu, 0x105474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105474u;
label_105474:
    // 0x105474: 0x8f8388cc  lw          $v1, -0x7734($gp)
    ctx->pc = 0x105474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
    // 0x105478: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x105478u;
    {
        const bool branch_taken_0x105478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105478u;
        // 0x10547c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105478) {
            ctx->pc = 0x10579Cu;
            goto label_10579c;
        }
    }
    ctx->pc = 0x105480u;
label_105480:
    // 0x105480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105484: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x105484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x105488: 0x146000c4  bnez        $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x105488u;
    {
        const bool branch_taken_0x105488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105488u;
        // 0x10548c: 0xaf8288cc  sw          $v0, -0x7734($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105488) {
            ctx->pc = 0x10579Cu;
            goto label_10579c;
        }
    }
    ctx->pc = 0x105490u;
    // 0x105490: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x105490u;
    {
        const bool branch_taken_0x105490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105490u;
        // 0x105494: 0xaf8088cc  sw          $zero, -0x7734($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105490) {
            ctx->pc = 0x10579Cu;
            goto label_10579c;
        }
    }
    ctx->pc = 0x105498u;
label_105498:
    // 0x105498: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x105498u;
    SET_GPR_U32(ctx, 31, 0x1054A0u);
    ctx->pc = 0x10549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105498u;
    // 0x10549c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x105498u, 0x1054A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054A0u;
label_1054a0:
    // 0x1054a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1054A0u;
    {
        const bool branch_taken_0x1054a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1054a0) {
            ctx->pc = 0x1054B8u;
            goto label_1054b8;
        }
    }
    ctx->pc = 0x1054A8u;
    // 0x1054a8: 0xc05beb6  jal         func_16FAD8
    ctx->pc = 0x1054A8u;
    SET_GPR_U32(ctx, 31, 0x1054B0u);
    ctx->pc = 0x16FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAD8u, 0x1054A8u, 0x1054B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054B0u;
label_1054b0:
    // 0x1054b0: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1054B0u;
    {
        const bool branch_taken_0x1054b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054B0u;
        // 0x1054b4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054b0) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x1054B8u;
label_1054b8:
    // 0x1054b8: 0xc05beba  jal         func_16FAE8
    ctx->pc = 0x1054B8u;
    SET_GPR_U32(ctx, 31, 0x1054C0u);
    ctx->pc = 0x16FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAE8u, 0x1054B8u, 0x1054C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054C0u;
label_1054c0:
    // 0x1054c0: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1054C0u;
    {
        const bool branch_taken_0x1054c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054C0u;
        // 0x1054c4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054c0) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x1054C8u;
label_1054c8:
    // 0x1054c8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1054c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1054cc: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x1054ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1054d0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1054d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1054d4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1054d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1054d8: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x1054D8u;
    {
        const bool branch_taken_0x1054d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054D8u;
        // 0x1054dc: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054d8) {
            ctx->pc = 0x10579Cu;
            goto label_10579c;
        }
    }
    ctx->pc = 0x1054E0u;
label_1054e0:
    // 0x1054e0: 0xc04faac  jal         func_13EAB0
    ctx->pc = 0x1054E0u;
    SET_GPR_U32(ctx, 31, 0x1054E8u);
    ctx->pc = 0x13EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EAB0u, 0x1054E0u, 0x1054E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054E8u;
label_1054e8:
    // 0x1054e8: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1054E8u;
    {
        const bool branch_taken_0x1054e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054E8u;
        // 0x1054ec: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054e8) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x1054F0u;
label_1054f0:
    // 0x1054f0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1054f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1054f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1054f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1054f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1054f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1054fc: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1054FCu;
    {
        const bool branch_taken_0x1054fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x105500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054FCu;
        // 0x105500: 0x8f858d10  lw          $a1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054fc) {
            ctx->pc = 0x105530u;
            goto label_105530;
        }
    }
    ctx->pc = 0x105504u;
    // 0x105504: 0x8f908d10  lw          $s0, -0x72F0($gp)
    ctx->pc = 0x105504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x105508: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105508u;
    SET_GPR_U32(ctx, 31, 0x105510u);
    ctx->pc = 0x10550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105508u;
    // 0x10550c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105508u, 0x105510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105510u;
label_105510:
    // 0x105510: 0x2405fdff  addiu       $a1, $zero, -0x201
    ctx->pc = 0x105510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x105514: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x105514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x105518: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x105518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10551c: 0x34640200  ori         $a0, $v1, 0x200
    ctx->pc = 0x10551cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x105520: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x105520u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x105524: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x105524u;
    {
        const bool branch_taken_0x105524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105524u;
        // 0x105528: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105524) {
            ctx->pc = 0x10579Cu;
            goto label_10579c;
        }
    }
    ctx->pc = 0x10552Cu;
    // 0x10552c: 0x0  nop
    ctx->pc = 0x10552cu;
    // NOP
label_105530:
    // 0x105530: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x105530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x105534: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x105534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x105538: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x105538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10553c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x10553cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105540: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x105540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x105544: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x105544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x105548: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x105548u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10554c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x10554Cu;
    {
        const bool branch_taken_0x10554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10554Cu;
        // 0x105550: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10554c) {
            ctx->pc = 0x10579Cu;
            goto label_10579c;
        }
    }
    ctx->pc = 0x105554u;
    // 0x105554: 0x0  nop
    ctx->pc = 0x105554u;
    // NOP
label_105558:
    // 0x105558: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x105558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10555c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10555cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x105560: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105564: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x105564u;
    {
        const bool branch_taken_0x105564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x105568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105564u;
        // 0x105568: 0x8f858d10  lw          $a1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105564) {
            ctx->pc = 0x105598u;
            goto label_105598;
        }
    }
    ctx->pc = 0x10556Cu;
    // 0x10556c: 0x8f908d10  lw          $s0, -0x72F0($gp)
    ctx->pc = 0x10556cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x105570: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105570u;
    SET_GPR_U32(ctx, 31, 0x105578u);
    ctx->pc = 0x105574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105570u;
    // 0x105574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105570u, 0x105578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105578u;
label_105578:
    // 0x105578: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x105578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x10557c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x105580: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x105580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x105584: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x105584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x105588: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x105588u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10558c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10558Cu;
    {
        const bool branch_taken_0x10558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10558Cu;
        // 0x105590: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10558c) {
            ctx->pc = 0x1055B8u;
            goto label_1055b8;
        }
    }
    ctx->pc = 0x105594u;
    // 0x105594: 0x0  nop
    ctx->pc = 0x105594u;
    // NOP
label_105598:
    // 0x105598: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x105598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x10559c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x10559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1055a0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1055a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1055a4: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1055a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1055a8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1055a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1055ac: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1055acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1055b0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1055b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1055b4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1055b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_1055b8:
    // 0x1055b8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1055b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1055bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1055bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055c0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1055c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1055c4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1055c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1055c8:
    // 0x1055c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1055c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1055cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1055CCu;
    {
        const bool branch_taken_0x1055cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1055cc) {
            ctx->pc = 0x1055D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1055CCu;
            // 0x1055d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1055E0u;
            goto label_1055e0;
        }
    }
    ctx->pc = 0x1055D4u;
    // 0x1055d4: 0xc041b4e  jal         func_106D38
    ctx->pc = 0x1055D4u;
    SET_GPR_U32(ctx, 31, 0x1055DCu);
    ctx->pc = 0x1055D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055D4u;
    // 0x1055d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D38u, 0x1055D4u, 0x1055DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055DCu;
label_1055dc:
    // 0x1055dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1055dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1055e0:
    // 0x1055e0: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1055e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1055e4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1055E4u;
    {
        const bool branch_taken_0x1055e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1055E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055E4u;
        // 0x1055e8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055e4) {
            ctx->pc = 0x1055C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1055c8;
        }
    }
    ctx->pc = 0x1055ECu;
    // 0x1055ec: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1055ECu;
    {
        const bool branch_taken_0x1055ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055ECu;
        // 0x1055f0: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055ec) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x1055F4u;
    // 0x1055f4: 0x0  nop
    ctx->pc = 0x1055f4u;
    // NOP
label_1055f8:
    // 0x1055f8: 0x278388c4  addiu       $v1, $gp, -0x773C
    ctx->pc = 0x1055f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936772));
    // 0x1055fc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1055fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x105600: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x105604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105608: 0x24a538e8  addiu       $a1, $a1, 0x38E8
    ctx->pc = 0x105608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14568));
    // 0x10560c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10560cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105610: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105614: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x105614u;
    SET_GPR_U32(ctx, 31, 0x10561Cu);
    ctx->pc = 0x105618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105614u;
    // 0x105618: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x105614u, 0x10561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10561Cu;
label_10561c:
    // 0x10561c: 0xc041434  jal         func_1050D0
    ctx->pc = 0x10561Cu;
    SET_GPR_U32(ctx, 31, 0x105624u);
    ctx->pc = 0x105620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10561Cu;
    // 0x105620: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1050D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1050D0u, 0x10561Cu, 0x105624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105624u;
label_105624:
    // 0x105624: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x105624u;
    {
        const bool branch_taken_0x105624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105624u;
        // 0x105628: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105624) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x10562Cu;
    // 0x10562c: 0x0  nop
    ctx->pc = 0x10562cu;
    // NOP
label_105630:
    // 0x105630: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x105630u;
    SET_GPR_U32(ctx, 31, 0x105638u);
    ctx->pc = 0x105634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105630u;
    // 0x105634: 0x24040051  addiu       $a0, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x105630u, 0x105638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105638u;
label_105638:
    // 0x105638: 0x8f878d10  lw          $a3, -0x72F0($gp)
    ctx->pc = 0x105638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10563c: 0x3c05dfff  lui         $a1, 0xDFFF
    ctx->pc = 0x10563cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57343 << 16));
    // 0x105640: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x105640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x105644: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x105644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x105648: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x105648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10564c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105650: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x105650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x105654: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x105654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x105658: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x105658u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x10565c: 0xc05bea8  jal         func_16FAA0
    ctx->pc = 0x10565Cu;
    SET_GPR_U32(ctx, 31, 0x105664u);
    ctx->pc = 0x105660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10565Cu;
    // 0x105660: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAA0u, 0x10565Cu, 0x105664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105664u;
label_105664:
    // 0x105664: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x105664u;
    {
        const bool branch_taken_0x105664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105664u;
        // 0x105668: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105664) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x10566Cu;
    // 0x10566c: 0x0  nop
    ctx->pc = 0x10566cu;
    // NOP
label_105670:
    // 0x105670: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x105670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x105674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105678: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x105678u;
    SET_GPR_U32(ctx, 31, 0x105680u);
    ctx->pc = 0x10567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105678u;
    // 0x10567c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x105678u, 0x105680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105680u;
label_105680:
    // 0x105680: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x105680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x105684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x105684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105688: 0xc068186  jal         func_1A0618
    ctx->pc = 0x105688u;
    SET_GPR_U32(ctx, 31, 0x105690u);
    ctx->pc = 0x10568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105688u;
    // 0x10568c: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x105688u, 0x105690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105690u;
label_105690:
    // 0x105690: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x105690u;
    {
        const bool branch_taken_0x105690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105690u;
        // 0x105694: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105690) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x105698u;
label_105698:
    // 0x105698: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105698u;
    SET_GPR_U32(ctx, 31, 0x1056A0u);
    ctx->pc = 0x10569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105698u;
    // 0x10569c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105698u, 0x1056A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056A0u;
label_1056a0:
    // 0x1056a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1056A0u;
    {
        const bool branch_taken_0x1056a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1056a0) {
            ctx->pc = 0x1056A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1056A0u;
            // 0x1056a4: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1056B8u;
            goto label_1056b8;
        }
    }
    ctx->pc = 0x1056A8u;
    // 0x1056a8: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x1056A8u;
    SET_GPR_U32(ctx, 31, 0x1056B0u);
    ctx->pc = 0x1056ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056A8u;
    // 0x1056ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1056A8u, 0x1056B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056B0u;
label_1056b0:
    // 0x1056b0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1056B0u;
    {
        const bool branch_taken_0x1056b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056B0u;
        // 0x1056b4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056b0) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x1056B8u;
label_1056b8:
    // 0x1056b8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1056b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1056bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1056bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1056c0: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1056C0u;
    {
        const bool branch_taken_0x1056c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1056c0) {
            ctx->pc = 0x1056D8u;
            goto label_1056d8;
        }
    }
    ctx->pc = 0x1056C8u;
    // 0x1056c8: 0xc05bcee  jal         func_16F3B8
    ctx->pc = 0x1056C8u;
    SET_GPR_U32(ctx, 31, 0x1056D0u);
    ctx->pc = 0x1056CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056C8u;
    // 0x1056cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F3B8u, 0x1056C8u, 0x1056D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056D0u;
label_1056d0:
    // 0x1056d0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1056D0u;
    {
        const bool branch_taken_0x1056d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056D0u;
        // 0x1056d4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056d0) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x1056D8u;
label_1056d8:
    // 0x1056d8: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x1056D8u;
    SET_GPR_U32(ctx, 31, 0x1056E0u);
    ctx->pc = 0x1056DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056D8u;
    // 0x1056dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1056D8u, 0x1056E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056E0u;
label_1056e0:
    // 0x1056e0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1056E0u;
    {
        const bool branch_taken_0x1056e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056E0u;
        // 0x1056e4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056e0) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x1056E8u;
label_1056e8:
    // 0x1056e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1056E8u;
    SET_GPR_U32(ctx, 31, 0x1056F0u);
    ctx->pc = 0x1056ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056E8u;
    // 0x1056ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1056E8u, 0x1056F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056F0u;
label_1056f0:
    // 0x1056f0: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x1056f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1056f4: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x1056f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x1056f8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1056f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1056fc: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1056fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x105700: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x105700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x105704: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x105704u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x105708: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x105708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10570c: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x10570cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x105710: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x105710u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x105714: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x105714u;
    {
        const bool branch_taken_0x105714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105714u;
        // 0x105718: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105714) {
            ctx->pc = 0x10579Cu;
            goto label_10579c;
        }
    }
    ctx->pc = 0x10571Cu;
    // 0x10571c: 0x0  nop
    ctx->pc = 0x10571cu;
    // NOP
label_105720:
    // 0x105720: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x105720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x105724: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x105724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x105728: 0x344200b0  ori         $v0, $v0, 0xB0
    ctx->pc = 0x105728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x10572c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x10572cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x105730: 0x34639a40  ori         $v1, $v1, 0x9A40
    ctx->pc = 0x105730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39488);
    // 0x105734: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x105734u;
    runtime->Store64(rdram, ctx, 0x120000B0u, GPR_U64(ctx, 3));
    // 0x105738: 0x3c095f80  lui         $t1, 0x5F80
    ctx->pc = 0x105738u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24448 << 16));
    // 0x10573c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x10573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x105740: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x105740u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x105744: 0x3c080004  lui         $t0, 0x4
    ctx->pc = 0x105744u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4 << 16));
    // 0x105748: 0x3508007f  ori         $t0, $t0, 0x7F
    ctx->pc = 0x105748u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)127);
    // 0x10574c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x10574cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x105750: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x105750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x105754: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x105754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x105758: 0x34c600c0  ori         $a2, $a2, 0xC0
    ctx->pc = 0x105758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)192);
    // 0x10575c: 0x34a500d0  ori         $a1, $a1, 0xD0
    ctx->pc = 0x10575cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)208);
    // 0x105760: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x105760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105764: 0x21b02  srl         $v1, $v0, 12
    ctx->pc = 0x105764u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x105768: 0x224c2  srl         $a0, $v0, 19
    ctx->pc = 0x105768u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
    // 0x10576c: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x10576cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x105770: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x105770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x105774: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x105774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x105778: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x105778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x10577c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10577cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x105780: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x105780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x105784: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x105784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x105788: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x105788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10578c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x10578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x105790: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x105790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x105794: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x105794u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x105798: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x105798u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
label_10579c:
    // 0x10579c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x10579cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1057a0:
    // 0x1057a0: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1057a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1057a4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1057a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1057a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1057A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1057ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057A8u;
        // 0x1057ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1057A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1057B0u;
}
