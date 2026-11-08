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

// Function: Cmd_ADD_PARTS_Entry__FP15BsSCDEntControl
// Address: 0x114fd0 - 0x1150ec
void Cmd_ADD_PARTS_Entry__FP15BsSCDEntControl_0x114fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ADD_PARTS_Entry__FP15BsSCDEntControl_0x114fd0");
#endif

    switch (ctx->pc) {
        case 0x114fecu: goto label_114fec;
        case 0x11500cu: goto label_11500c;
        case 0x11502cu: goto label_11502c;
        case 0x11503cu: goto label_11503c;
        default: break;
    }

    ctx->pc = 0x114fd0u;

    // 0x114fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114fd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x114fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x114fdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114fe0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x114fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x114fe4: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x114FE4u;
    SET_GPR_U32(ctx, 31, 0x114FECu);
    ctx->pc = 0x114FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114FE4u;
    // 0x114fe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x114FE4u, 0x114FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FECu;
label_114fec:
    // 0x114fec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x114fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x114ff0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x114ff0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x114ff4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x114ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x114ff8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x114ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x114ffc: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114FFCu;
    {
        const bool branch_taken_0x114ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x115000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FFCu;
        // 0x115000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ffc) {
            ctx->pc = 0x115010u;
            goto label_115010;
        }
    }
    ctx->pc = 0x115004u;
    // 0x115004: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115004u;
    SET_GPR_U32(ctx, 31, 0x11500Cu);
    ctx->pc = 0x115008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115004u;
    // 0x115008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115004u, 0x11500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11500Cu;
label_11500c:
    // 0x11500c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x11500cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_115010:
    // 0x115010: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x115010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115014: 0x128202  srl         $s0, $s2, 8
    ctx->pc = 0x115014u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x115018: 0xb18818  mult        $s1, $a1, $s1
    ctx->pc = 0x115018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x11501c: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x11501cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x115020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115024: 0xc045360  jal         func_114D80
    ctx->pc = 0x115024u;
    SET_GPR_U32(ctx, 31, 0x11502Cu);
    ctx->pc = 0x115028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115024u;
    // 0x115028: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115024u, 0x11502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11502Cu;
label_11502c:
    // 0x11502c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115034: 0xc045360  jal         func_114D80
    ctx->pc = 0x115034u;
    SET_GPR_U32(ctx, 31, 0x11503Cu);
    ctx->pc = 0x115038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115034u;
    // 0x115038: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115034u, 0x11503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11503Cu;
label_11503c:
    // 0x11503c: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x11503cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x115040: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x115044: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x115044u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
    // 0x115048: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x11504c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x11504Cu;
    {
        const bool branch_taken_0x11504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11504Cu;
        // 0x115050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11504c) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x115054u;
    // 0x115054: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x115054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x115058: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x115058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x11505c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115060: 0x8c6343e0  lw          $v1, 0x43E0($v1)
    ctx->pc = 0x115060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17376)));
    // 0x115064: 0x600008  jr          $v1
    ctx->pc = 0x115064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115070u: goto label_115070;
            case 0x115078u: goto label_115078;
            case 0x115080u: goto label_115080;
            case 0x115088u: goto label_115088;
            case 0x115090u: goto label_115090;
            case 0x115098u: goto label_115098;
            case 0x1150A0u: goto label_1150a0;
            case 0x1150A8u: goto label_1150a8;
            case 0x1150B0u: goto label_1150b0;
            case 0x1150B8u: goto label_1150b8;
            case 0x1150C0u: goto label_1150c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115064u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11506Cu;
    // 0x11506c: 0x0  nop
    ctx->pc = 0x11506cu;
    // NOP
label_115070:
    // 0x115070: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115070u;
    {
        const bool branch_taken_0x115070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115070u;
        // 0x115074: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115070) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x115078u;
label_115078:
    // 0x115078: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x115078u;
    {
        const bool branch_taken_0x115078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115078u;
        // 0x11507c: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115078) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x115080u;
label_115080:
    // 0x115080: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115080u;
    {
        const bool branch_taken_0x115080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115080u;
        // 0x115084: 0x2625007c  addiu       $a1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115080) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x115088u;
label_115088:
    // 0x115088: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x115088u;
    {
        const bool branch_taken_0x115088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115088u;
        // 0x11508c: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115088) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x115090u;
label_115090:
    // 0x115090: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x115090u;
    {
        const bool branch_taken_0x115090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115090u;
        // 0x115094: 0x262500e8  addiu       $a1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115090) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x115098u;
label_115098:
    // 0x115098: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x115098u;
    {
        const bool branch_taken_0x115098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115098u;
        // 0x11509c: 0x2625011c  addiu       $a1, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115098) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x1150A0u;
label_1150a0:
    // 0x1150a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1150A0u;
    {
        const bool branch_taken_0x1150a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150A0u;
        // 0x1150a4: 0x2625014c  addiu       $a1, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150a0) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x1150A8u;
label_1150a8:
    // 0x1150a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1150A8u;
    {
        const bool branch_taken_0x1150a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150A8u;
        // 0x1150ac: 0x2625015c  addiu       $a1, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150a8) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x1150B0u;
label_1150b0:
    // 0x1150b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1150B0u;
    {
        const bool branch_taken_0x1150b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150B0u;
        // 0x1150b4: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150b0) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x1150B8u;
label_1150b8:
    // 0x1150b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1150B8u;
    {
        const bool branch_taken_0x1150b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150B8u;
        // 0x1150bc: 0x262501a0  addiu       $a1, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150b8) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x1150C0u;
label_1150c0:
    // 0x1150c0: 0x262501c0  addiu       $a1, $s1, 0x1C0
    ctx->pc = 0x1150c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_1150c4:
    // 0x1150c4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1150c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1150c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1150c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1150cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1150ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1150d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1150d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1150d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1150d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1150d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1150d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1150dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1150dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1150e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1150e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1150e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1150E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1150E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150E4u;
        // 0x1150e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1150E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1150ECu;
}
