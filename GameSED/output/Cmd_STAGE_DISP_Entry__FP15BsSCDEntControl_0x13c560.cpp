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

// Function: Cmd_STAGE_DISP_Entry__FP15BsSCDEntControl
// Address: 0x13c560 - 0x13c634
void Cmd_STAGE_DISP_Entry__FP15BsSCDEntControl_0x13c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_DISP_Entry__FP15BsSCDEntControl_0x13c560");
#endif

    switch (ctx->pc) {
        case 0x13c57cu: goto label_13c57c;
        case 0x13c588u: goto label_13c588;
        case 0x13c5e8u: goto label_13c5e8;
        default: break;
    }

    ctx->pc = 0x13c560u;

    // 0x13c560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c564: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c568: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13c56c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13c56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13c570: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13c570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13c574: 0xc043ff8  jal         func_10FFE0
    ctx->pc = 0x13C574u;
    SET_GPR_U32(ctx, 31, 0x13C57Cu);
    ctx->pc = 0x13C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C574u;
    // 0x13c578: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFE0u, 0x13C574u, 0x13C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C57Cu;
label_13c57c:
    // 0x13c57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c580: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13C580u;
    SET_GPR_U32(ctx, 31, 0x13C588u);
    ctx->pc = 0x13C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C580u;
    // 0x13c584: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13C580u, 0x13C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C588u;
label_13c588:
    // 0x13c588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c58c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x13c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13c590: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x13c590u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13c594: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x13c594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x13c598: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x13c598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c59c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c5a0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13c5a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c5a4: 0x1445000e  bne         $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x13C5A4u;
    {
        const bool branch_taken_0x13c5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x13C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5A4u;
        // 0x13c5a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5a4) {
            ctx->pc = 0x13C5E0u;
            goto label_13c5e0;
        }
    }
    ctx->pc = 0x13C5ACu;
    // 0x13c5ac: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C5ACu;
    {
        const bool branch_taken_0x13c5ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5ACu;
        // 0x13c5b0: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5ac) {
            ctx->pc = 0x13C5C0u;
            goto label_13c5c0;
        }
    }
    ctx->pc = 0x13C5B4u;
    // 0x13c5b4: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x13c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x13c5b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13C5B8u;
    {
        const bool branch_taken_0x13c5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5B8u;
        // 0x13c5bc: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5b8) {
            ctx->pc = 0x13C5C8u;
            goto label_13c5c8;
        }
    }
    ctx->pc = 0x13C5C0u;
label_13c5c0:
    // 0x13c5c0: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x13c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x13c5c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_13c5c8:
    // 0x13c5c8: 0xae2201e0  sw          $v0, 0x1E0($s1)
    ctx->pc = 0x13c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
    // 0x13c5cc: 0x8ce201e0  lw          $v0, 0x1E0($a3)
    ctx->pc = 0x13c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
    // 0x13c5d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13c5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13c5d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13C5D4u;
    {
        const bool branch_taken_0x13c5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5D4u;
        // 0x13c5d8: 0xace201e0  sw          $v0, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5d4) {
            ctx->pc = 0x13C61Cu;
            goto label_13c61c;
        }
    }
    ctx->pc = 0x13C5DCu;
    // 0x13c5dc: 0x0  nop
    ctx->pc = 0x13c5dcu;
    // NOP
label_13c5e0:
    // 0x13c5e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13C5E0u;
    SET_GPR_U32(ctx, 31, 0x13C5E8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13C5E0u, 0x13C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5E8u;
label_13c5e8:
    // 0x13c5e8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13c5ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13c5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13c5f0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x13c5f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x13c5f4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C5F4u;
    {
        const bool branch_taken_0x13c5f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5F4u;
        // 0x13c5f8: 0x32027  nor         $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5f4) {
            ctx->pc = 0x13C610u;
            goto label_13c610;
        }
    }
    ctx->pc = 0x13C5FCu;
    // 0x13c5fc: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x13c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x13c600: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13c600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13c604: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13C604u;
    {
        const bool branch_taken_0x13c604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C604u;
        // 0x13c608: 0xae2201e0  sw          $v0, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c604) {
            ctx->pc = 0x13C61Cu;
            goto label_13c61c;
        }
    }
    ctx->pc = 0x13C60Cu;
    // 0x13c60c: 0x0  nop
    ctx->pc = 0x13c60cu;
    // NOP
label_13c610:
    // 0x13c610: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x13c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x13c614: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x13c614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x13c618: 0xae4201e0  sw          $v0, 0x1E0($s2)
    ctx->pc = 0x13c618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 2));
label_13c61c:
    // 0x13c61c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c61cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13c624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c628: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13c628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13c62c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C62Cu;
        // 0x13c630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C634u;
}
