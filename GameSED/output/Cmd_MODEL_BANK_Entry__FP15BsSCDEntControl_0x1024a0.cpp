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

// Function: Cmd_MODEL_BANK_Entry__FP15BsSCDEntControl
// Address: 0x1024a0 - 0x102568
void Cmd_MODEL_BANK_Entry__FP15BsSCDEntControl_0x1024a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_BANK_Entry__FP15BsSCDEntControl_0x1024a0");
#endif

    switch (ctx->pc) {
        case 0x1024bcu: goto label_1024bc;
        case 0x1024e8u: goto label_1024e8;
        case 0x102520u: goto label_102520;
        case 0x102550u: goto label_102550;
        default: break;
    }

    ctx->pc = 0x1024a0u;

    // 0x1024a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1024a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1024a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1024a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1024a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1024a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1024ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1024acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1024b0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1024b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1024b4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1024B4u;
    SET_GPR_U32(ctx, 31, 0x1024BCu);
    ctx->pc = 0x1024B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1024B4u;
    // 0x1024b8: 0x8c500044  lw          $s0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1024B4u, 0x1024BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024BCu;
label_1024bc:
    // 0x1024bc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1024bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1024c0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1024c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1024c4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1024c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1024c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1024c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1024cc: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1024ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1024d0: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0
    ctx->pc = 0x1024d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    // 0x1024d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1024d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1024d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1024D8u;
    {
        const bool branch_taken_0x1024d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1024DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024D8u;
        // 0x1024dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024d8) {
            ctx->pc = 0x1024E8u;
            goto label_1024e8;
        }
    }
    ctx->pc = 0x1024E0u;
    // 0x1024e0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1024E0u;
    SET_GPR_U32(ctx, 31, 0x1024E8u);
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1024E0u, 0x1024E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024E8u;
label_1024e8:
    // 0x1024e8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1024E8u;
    {
        const bool branch_taken_0x1024e8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1024ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024E8u;
        // 0x1024ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024e8) {
            ctx->pc = 0x102500u;
            goto label_102500;
        }
    }
    ctx->pc = 0x1024F0u;
    // 0x1024f0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1024f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1024f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1024f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1024f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1024F8u;
    {
        const bool branch_taken_0x1024f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1024f8) {
            ctx->pc = 0x102504u;
            goto label_102504;
        }
    }
    ctx->pc = 0x102500u;
label_102500:
    // 0x102500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102504:
    // 0x102504: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x102504u;
    {
        const bool branch_taken_0x102504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102504u;
        // 0x102508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102504) {
            ctx->pc = 0x102520u;
            goto label_102520;
        }
    }
    ctx->pc = 0x10250Cu;
    // 0x10250c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10250cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102510: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x102510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x102514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102518: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102518u;
    SET_GPR_U32(ctx, 31, 0x102520u);
    ctx->pc = 0x10251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102518u;
    // 0x10251c: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102518u, 0x102520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102520u;
label_102520:
    // 0x102520: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x102520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x102524: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x102524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x102528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10252c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x10252cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102530: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x102530u;
    {
        const bool branch_taken_0x102530 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x102530) {
            ctx->pc = 0x102534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102530u;
            // 0x102534: 0xaf919110  sw          $s1, -0x6EF0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294938896), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102554u;
            goto label_102554;
        }
    }
    ctx->pc = 0x102538u;
    // 0x102538: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10253c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102540: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x102540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x102544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102548: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102548u;
    SET_GPR_U32(ctx, 31, 0x102550u);
    ctx->pc = 0x10254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102548u;
    // 0x10254c: 0x24a51af8  addiu       $a1, $a1, 0x1AF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102548u, 0x102550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102550u;
label_102550:
    // 0x102550: 0xaf919110  sw          $s1, -0x6EF0($gp)
    ctx->pc = 0x102550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938896), GPR_U32(ctx, 17));
label_102554:
    // 0x102554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10255c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10255cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102560: 0x3e00008  jr          $ra
    ctx->pc = 0x102560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102560u;
        // 0x102564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102568u;
}
