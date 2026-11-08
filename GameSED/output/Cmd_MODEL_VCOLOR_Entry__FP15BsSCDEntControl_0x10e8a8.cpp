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

// Function: Cmd_MODEL_VCOLOR_Entry__FP15BsSCDEntControl
// Address: 0x10e8a8 - 0x10ea20
void Cmd_MODEL_VCOLOR_Entry__FP15BsSCDEntControl_0x10e8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_VCOLOR_Entry__FP15BsSCDEntControl_0x10e8a8");
#endif

    switch (ctx->pc) {
        case 0x10e8e4u: goto label_10e8e4;
        case 0x10e900u: goto label_10e900;
        case 0x10e918u: goto label_10e918;
        case 0x10e924u: goto label_10e924;
        case 0x10e948u: goto label_10e948;
        case 0x10e960u: goto label_10e960;
        case 0x10e96cu: goto label_10e96c;
        case 0x10e994u: goto label_10e994;
        case 0x10e9b4u: goto label_10e9b4;
        case 0x10e9f4u: goto label_10e9f4;
        case 0x10e9fcu: goto label_10e9fc;
        default: break;
    }

    ctx->pc = 0x10e8a8u;

    // 0x10e8a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10e8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10e8ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10e8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e8b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10e8b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10e8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e8bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10e8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10e8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10e8c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10e8c8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x10e8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10e8cc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x10e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x10e8d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10e8d4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10e8d8: 0x8c510044  lw          $s1, 0x44($v0)
    ctx->pc = 0x10e8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10e8dc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10E8DCu;
    SET_GPR_U32(ctx, 31, 0x10E8E4u);
    ctx->pc = 0x10E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8DCu;
    // 0x10e8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10E8DCu, 0x10E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E8E4u;
label_10e8e4:
    // 0x10e8e4: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x10e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10e8e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10e8e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8ec: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x10e8ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10e8f0: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10E8F0u;
    {
        const bool branch_taken_0x10e8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10e8f0) {
            ctx->pc = 0x10E8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E8F0u;
            // 0x10e8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E91Cu;
            goto label_10e91c;
        }
    }
    ctx->pc = 0x10E8F8u;
    // 0x10e8f8: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10E8F8u;
    SET_GPR_U32(ctx, 31, 0x10E900u);
    ctx->pc = 0x10E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8F8u;
    // 0x10e8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10E8F8u, 0x10E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E900u;
label_10e900:
    // 0x10e900: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e908: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10e908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10e90c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e910: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E910u;
    SET_GPR_U32(ctx, 31, 0x10E918u);
    ctx->pc = 0x10E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E910u;
    // 0x10e914: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E910u, 0x10E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E918u;
label_10e918:
    // 0x10e918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e91c:
    // 0x10e91c: 0xc0436d2  jal         func_10DB48
    ctx->pc = 0x10E91Cu;
    SET_GPR_U32(ctx, 31, 0x10E924u);
    ctx->pc = 0x10E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E91Cu;
    // 0x10e920: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB48u, 0x10E91Cu, 0x10E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E924u;
label_10e924:
    // 0x10e924: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10e924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e928: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E928u;
    {
        const bool branch_taken_0x10e928 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e928) {
            ctx->pc = 0x10E92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E928u;
            // 0x10e92c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E950u;
            goto label_10e950;
        }
    }
    ctx->pc = 0x10E930u;
    // 0x10e930: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e934: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10e934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e938: 0x24a53d68  addiu       $a1, $a1, 0x3D68
    ctx->pc = 0x10e938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15720));
    // 0x10e93c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e940: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E940u;
    SET_GPR_U32(ctx, 31, 0x10E948u);
    ctx->pc = 0x10E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E940u;
    // 0x10e944: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E940u, 0x10E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E948u;
label_10e948:
    // 0x10e948: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x10E948u;
    {
        const bool branch_taken_0x10e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E948u;
        // 0x10e94c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e948) {
            ctx->pc = 0x10EA00u;
            goto label_10ea00;
        }
    }
    ctx->pc = 0x10E950u;
label_10e950:
    // 0x10e950: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x10e950u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e954: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x10e954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e958: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10E958u;
    SET_GPR_U32(ctx, 31, 0x10E960u);
    ctx->pc = 0x10E95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E958u;
    // 0x10e95c: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10E958u, 0x10E960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E960u;
label_10e960:
    // 0x10e960: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x10e960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10e964: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10E964u;
    SET_GPR_U32(ctx, 31, 0x10E96Cu);
    ctx->pc = 0x10E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E964u;
    // 0x10e968: 0x108180  sll         $s0, $s0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10E964u, 0x10E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E96Cu;
label_10e96c:
    // 0x10e96c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10e970: 0x8e4301ac  lw          $v1, 0x1AC($s2)
    ctx->pc = 0x10e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x10e974: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x10E974u;
    {
        const bool branch_taken_0x10e974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E974u;
        // 0x10e978: 0x50a021  addu        $s4, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e974) {
            ctx->pc = 0x10E9D4u;
            goto label_10e9d4;
        }
    }
    ctx->pc = 0x10E97Cu;
    // 0x10e97c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x10e97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e980: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E980u;
    {
        const bool branch_taken_0x10e980 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E980u;
        // 0x10e984: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e980) {
            ctx->pc = 0x10E98Cu;
            goto label_10e98c;
        }
    }
    ctx->pc = 0x10E988u;
    // 0x10e988: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x10e988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10e98c:
    // 0x10e98c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x10E98Cu;
    SET_GPR_U32(ctx, 31, 0x10E994u);
    ctx->pc = 0x10E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E98Cu;
    // 0x10e990: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x10E98Cu, 0x10E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E994u;
label_10e994:
    // 0x10e994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e998: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E998u;
    {
        const bool branch_taken_0x10e998 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e998) {
            ctx->pc = 0x10E99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E998u;
            // 0x10e99c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E9B8u;
            goto label_10e9b8;
        }
    }
    ctx->pc = 0x10E9A0u;
    // 0x10e9a0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9a8: 0x24a53da0  addiu       $a1, $a1, 0x3DA0
    ctx->pc = 0x10e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15776));
    // 0x10e9ac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x10E9ACu;
    SET_GPR_U32(ctx, 31, 0x10E9B4u);
    ctx->pc = 0x10E9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9ACu;
    // 0x10e9b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x10E9ACu, 0x10E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9B4u;
label_10e9b4:
    // 0x10e9b4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x10e9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_10e9b8:
    // 0x10e9b8: 0xae7001ac  sw          $s0, 0x1AC($s3)
    ctx->pc = 0x10e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 16));
    // 0x10e9bc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x10e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x10e9c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10e9c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10e9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10e9c8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10e9cc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10e9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x10e9d0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x10e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_10e9d4:
    // 0x10e9d4: 0x8e6401ac  lw          $a0, 0x1AC($s3)
    ctx->pc = 0x10e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
    // 0x10e9d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10e9dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E9DCu;
    {
        const bool branch_taken_0x10e9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9DCu;
        // 0x10e9e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9dc) {
            ctx->pc = 0x10EA00u;
            goto label_10ea00;
        }
    }
    ctx->pc = 0x10E9E4u;
    // 0x10e9e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10e9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9e8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x10e9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9ec: 0xc064fa6  jal         func_193E98
    ctx->pc = 0x10E9ECu;
    SET_GPR_U32(ctx, 31, 0x10E9F4u);
    ctx->pc = 0x10E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9ECu;
    // 0x10e9f0: 0x8ca60194  lw          $a2, 0x194($a1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193E98u, 0x10E9ECu, 0x10E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9F4u;
label_10e9f4:
    // 0x10e9f4: 0xc065530  jal         func_1954C0
    ctx->pc = 0x10E9F4u;
    SET_GPR_U32(ctx, 31, 0x10E9FCu);
    ctx->pc = 0x10E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9F4u;
    // 0x10e9f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1954C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954C0u, 0x10E9F4u, 0x10E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9FCu;
label_10e9fc:
    // 0x10e9fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10e9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10ea00:
    // 0x10ea00: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10ea00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ea04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ea04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ea08: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x10ea08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10ea0c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x10ea0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ea10: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x10ea10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10ea14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10ea14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ea18: 0x3e00008  jr          $ra
    ctx->pc = 0x10EA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA18u;
        // 0x10ea1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EA20u;
}
