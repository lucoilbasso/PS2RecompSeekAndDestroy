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

// Function: Cmd_DOWN_LOAD_TANK_STATUS_Entry__FP15BsSCDEntControl
// Address: 0x116778 - 0x11681c
void Cmd_DOWN_LOAD_TANK_STATUS_Entry__FP15BsSCDEntControl_0x116778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DOWN_LOAD_TANK_STATUS_Entry__FP15BsSCDEntControl_0x116778");
#endif

    switch (ctx->pc) {
        case 0x116790u: goto label_116790;
        case 0x1167b0u: goto label_1167b0;
        case 0x1167bcu: goto label_1167bc;
        case 0x1167ccu: goto label_1167cc;
        case 0x1167e0u: goto label_1167e0;
        case 0x1167e8u: goto label_1167e8;
        default: break;
    }

    ctx->pc = 0x116778u;

    // 0x116778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11677c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116780: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116788: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116788u;
    SET_GPR_U32(ctx, 31, 0x116790u);
    ctx->pc = 0x11678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116788u;
    // 0x11678c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116788u, 0x116790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116790u;
label_116790:
    // 0x116790: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116794: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x116794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x116798: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x116798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11679c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1167a0: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1167A0u;
    {
        const bool branch_taken_0x1167a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1167A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167A0u;
        // 0x1167a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167a0) {
            ctx->pc = 0x1167B4u;
            goto label_1167b4;
        }
    }
    ctx->pc = 0x1167A8u;
    // 0x1167a8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1167A8u;
    SET_GPR_U32(ctx, 31, 0x1167B0u);
    ctx->pc = 0x1167ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167A8u;
    // 0x1167ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1167A8u, 0x1167B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167B0u;
label_1167b0:
    // 0x1167b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1167b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1167b4:
    // 0x1167b4: 0xc041794  jal         func_105E50
    ctx->pc = 0x1167B4u;
    SET_GPR_U32(ctx, 31, 0x1167BCu);
    ctx->pc = 0x1167B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167B4u;
    // 0x1167b8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x1167B4u, 0x1167BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167BCu;
label_1167bc:
    // 0x1167bc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1167bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1167c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1167c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167c4: 0xc041882  jal         func_106208
    ctx->pc = 0x1167C4u;
    SET_GPR_U32(ctx, 31, 0x1167CCu);
    ctx->pc = 0x1167C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167C4u;
    // 0x1167c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1167C4u, 0x1167CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167CCu;
label_1167cc:
    // 0x1167cc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1167ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1167d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1167d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1167d4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1167d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1167d8: 0xc041882  jal         func_106208
    ctx->pc = 0x1167D8u;
    SET_GPR_U32(ctx, 31, 0x1167E0u);
    ctx->pc = 0x1167DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167D8u;
    // 0x1167dc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1167D8u, 0x1167E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167E0u;
label_1167e0:
    // 0x1167e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1167e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1167e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1167e8:
    // 0x1167e8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1167e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1167ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1167ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1167f0: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1167f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1167f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1167f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1167f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1167f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1167fc: 0x28c5000d  slti        $a1, $a2, 0xD
    ctx->pc = 0x1167fcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x116800: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116800u;
    {
        const bool branch_taken_0x116800 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x116804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116800u;
        // 0x116804: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116800) {
            ctx->pc = 0x1167E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1167e8;
        }
    }
    ctx->pc = 0x116808u;
    // 0x116808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11680c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11680cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116814: 0x3e00008  jr          $ra
    ctx->pc = 0x116814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116814u;
        // 0x116818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11681Cu;
}
