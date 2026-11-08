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

// Function: Cmd_NCMP_Entry__FP15BsSCDEntControl
// Address: 0x1a7460 - 0x1a7534
void Cmd_NCMP_Entry__FP15BsSCDEntControl_0x1a7460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_NCMP_Entry__FP15BsSCDEntControl_0x1a7460");
#endif

    switch (ctx->pc) {
        case 0x1a747cu: goto label_1a747c;
        case 0x1a74b4u: goto label_1a74b4;
        case 0x1a7508u: goto label_1a7508;
        default: break;
    }

    ctx->pc = 0x1a7460u;

    // 0x1a7460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7468: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a746c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a746cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7470: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a7470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a7474: 0xc069c90  jal         func_1A7240
    ctx->pc = 0x1A7474u;
    SET_GPR_U32(ctx, 31, 0x1A747Cu);
    ctx->pc = 0x1A7478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7474u;
    // 0x1a7478: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7240u, 0x1A7474u, 0x1A747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A747Cu;
label_1a747c:
    // 0x1a747c: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x1a747cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a7480: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a7480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7484: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a7484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7488: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a748c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a748cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7494: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a7494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7498: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a749c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a749cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a74a0: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a74a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a74a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A74A4u;
    {
        const bool branch_taken_0x1a74a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74A4u;
        // 0x1a74a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74a4) {
            ctx->pc = 0x1A74C0u;
            goto label_1a74c0;
        }
    }
    ctx->pc = 0x1A74ACu;
    // 0x1a74ac: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A74ACu;
    SET_GPR_U32(ctx, 31, 0x1A74B4u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A74ACu, 0x1A74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A74B4u;
label_1a74b4:
    // 0x1a74b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A74B4u;
    {
        const bool branch_taken_0x1a74b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74B4u;
        // 0x1a74b8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74b4) {
            ctx->pc = 0x1A74C4u;
            goto label_1a74c4;
        }
    }
    ctx->pc = 0x1A74BCu;
    // 0x1a74bc: 0x0  nop
    ctx->pc = 0x1a74bcu;
    // NOP
label_1a74c0:
    // 0x1a74c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a74c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a74c4:
    // 0x1a74c4: 0x56400016  bnel        $s2, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A74C4u;
    {
        const bool branch_taken_0x1a74c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a74c4) {
            ctx->pc = 0x1A74C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A74C4u;
            // 0x1a74c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7520u;
            goto label_1a7520;
        }
    }
    ctx->pc = 0x1A74CCu;
    // 0x1a74cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a74d0: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A74D0u;
    {
        const bool branch_taken_0x1a74d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a74d0) {
            ctx->pc = 0x1A74D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A74D0u;
            // 0x1a74d4: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A74E8u;
            goto label_1a74e8;
        }
    }
    ctx->pc = 0x1A74D8u;
    // 0x1a74d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a74dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a74dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a74e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A74E0u;
    {
        const bool branch_taken_0x1a74e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74E0u;
        // 0x1a74e4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74e0) {
            ctx->pc = 0x1A751Cu;
            goto label_1a751c;
        }
    }
    ctx->pc = 0x1A74E8u;
label_1a74e8:
    // 0x1a74e8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1a74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a74ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a74ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a74f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A74F0u;
    {
        const bool branch_taken_0x1a74f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74F0u;
        // 0x1a74f4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74f0) {
            ctx->pc = 0x1A7508u;
            goto label_1a7508;
        }
    }
    ctx->pc = 0x1A74F8u;
    // 0x1a74f8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a74f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a74fc: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a74fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7500: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7500u;
    SET_GPR_U32(ctx, 31, 0x1A7508u);
    ctx->pc = 0x1A7504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7500u;
    // 0x1a7504: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7500u, 0x1A7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7508u;
label_1a7508:
    // 0x1a7508: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a7508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a750c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a7510: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a7510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a7514: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a7514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7518: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a7518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1a751c:
    // 0x1a751c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a751cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7520:
    // 0x1a7520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7524: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7528: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a7528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a752c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A752Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A752Cu;
        // 0x1a7530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A752Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7534u;
}
