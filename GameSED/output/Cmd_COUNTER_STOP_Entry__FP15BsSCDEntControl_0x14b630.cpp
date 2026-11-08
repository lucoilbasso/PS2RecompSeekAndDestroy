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

// Function: Cmd_COUNTER_STOP_Entry__FP15BsSCDEntControl
// Address: 0x14b630 - 0x14b750
void Cmd_COUNTER_STOP_Entry__FP15BsSCDEntControl_0x14b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_COUNTER_STOP_Entry__FP15BsSCDEntControl_0x14b630");
#endif

    switch (ctx->pc) {
        case 0x14b648u: goto label_14b648;
        case 0x14b69cu: goto label_14b69c;
        case 0x14b6a8u: goto label_14b6a8;
        case 0x14b6f0u: goto label_14b6f0;
        case 0x14b73cu: goto label_14b73c;
        default: break;
    }

    ctx->pc = 0x14b630u;

    // 0x14b630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14b634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14b638: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14b63c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b640: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x14B640u;
    SET_GPR_U32(ctx, 31, 0x14B648u);
    ctx->pc = 0x14B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B640u;
    // 0x14b644: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x14B640u, 0x14B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B648u;
label_14b648:
    // 0x14b648: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14b648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b64c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b650: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x14b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14b654: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14b654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x14b658: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14b658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14b65c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b660: 0x10430037  beq         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x14B660u;
    {
        const bool branch_taken_0x14b660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B660u;
        // 0x14b664: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b660) {
            ctx->pc = 0x14B740u;
            goto label_14b740;
        }
    }
    ctx->pc = 0x14B668u;
    // 0x14b668: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14b668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14b66c: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x14b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14b670: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14b670u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x14b674: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x14b674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14b678: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b67c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14b67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14b680: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B680u;
    {
        const bool branch_taken_0x14b680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x14B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B680u;
        // 0x14b684: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b680) {
            ctx->pc = 0x14B69Cu;
            goto label_14b69c;
        }
    }
    ctx->pc = 0x14B688u;
    // 0x14b688: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b68c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14b68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b690: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0
    ctx->pc = 0x14b690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    // 0x14b694: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B694u;
    SET_GPR_U32(ctx, 31, 0x14B69Cu);
    ctx->pc = 0x14B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B694u;
    // 0x14b698: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B694u, 0x14B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B69Cu;
label_14b69c:
    // 0x14b69c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6a0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x14b6a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6a4: 0x8ca401bc  lw          $a0, 0x1BC($a1)
    ctx->pc = 0x14b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 444)));
label_14b6a8:
    // 0x14b6a8: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x14B6A8u;
    {
        const bool branch_taken_0x14b6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6A8u;
        // 0x14b6ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6a8) {
            ctx->pc = 0x14B740u;
            goto label_14b740;
        }
    }
    ctx->pc = 0x14B6B0u;
    // 0x14b6b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b6b4: 0x0  nop
    ctx->pc = 0x14b6b4u;
    // NOP
    // 0x14b6b8: 0x0  nop
    ctx->pc = 0x14b6b8u;
    // NOP
    // 0x14b6bc: 0x0  nop
    ctx->pc = 0x14b6bcu;
    // NOP
    // 0x14b6c0: 0x0  nop
    ctx->pc = 0x14b6c0u;
    // NOP
    // 0x14b6c4: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14B6C4u;
    {
        const bool branch_taken_0x14b6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14b6c4) {
            ctx->pc = 0x14B6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B6C4u;
            // 0x14b6c8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b6a8;
        }
    }
    ctx->pc = 0x14B6CCu;
    // 0x14b6cc: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14B6CCu;
    {
        const bool branch_taken_0x14b6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6CCu;
        // 0x14b6d0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6cc) {
            ctx->pc = 0x14B744u;
            goto label_14b744;
        }
    }
    ctx->pc = 0x14B6D4u;
    // 0x14b6d4: 0x8ca201bc  lw          $v0, 0x1BC($a1)
    ctx->pc = 0x14b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 444)));
    // 0x14b6d8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14B6D8u;
    {
        const bool branch_taken_0x14b6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6D8u;
        // 0x14b6dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6d8) {
            ctx->pc = 0x14B744u;
            goto label_14b744;
        }
    }
    ctx->pc = 0x14B6E0u;
    // 0x14b6e0: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B6E0u;
    {
        const bool branch_taken_0x14b6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x14b6e0) {
            ctx->pc = 0x14B714u;
            goto label_14b714;
        }
    }
    ctx->pc = 0x14B6E8u;
    // 0x14b6e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14b6e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6ec: 0x0  nop
    ctx->pc = 0x14b6ecu;
    // NOP
label_14b6f0:
    // 0x14b6f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b6f4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x14B6F4u;
    {
        const bool branch_taken_0x14b6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b6f4) {
            ctx->pc = 0x14B6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B6F4u;
            // 0x14b6f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B740u;
            goto label_14b740;
        }
    }
    ctx->pc = 0x14B6FCu;
    // 0x14b6fc: 0x0  nop
    ctx->pc = 0x14b6fcu;
    // NOP
    // 0x14b700: 0x0  nop
    ctx->pc = 0x14b700u;
    // NOP
    // 0x14b704: 0x0  nop
    ctx->pc = 0x14b704u;
    // NOP
    // 0x14b708: 0x0  nop
    ctx->pc = 0x14b708u;
    // NOP
    // 0x14b70c: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14B70Cu;
    {
        const bool branch_taken_0x14b70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14b70c) {
            ctx->pc = 0x14B710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B70Cu;
            // 0x14b710: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b6f0;
        }
    }
    ctx->pc = 0x14B714u;
label_14b714:
    // 0x14b714: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14B714u;
    {
        const bool branch_taken_0x14b714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b714) {
            ctx->pc = 0x14B718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B714u;
            // 0x14b718: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B740u;
            goto label_14b740;
        }
    }
    ctx->pc = 0x14B71Cu;
    // 0x14b71c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B71Cu;
    {
        const bool branch_taken_0x14b71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B71Cu;
        // 0x14b720: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b71c) {
            ctx->pc = 0x14B730u;
            goto label_14b730;
        }
    }
    ctx->pc = 0x14B724u;
    // 0x14b724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14B724u;
    {
        const bool branch_taken_0x14b724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B724u;
        // 0x14b728: 0xaca201bc  sw          $v0, 0x1BC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b724) {
            ctx->pc = 0x14B734u;
            goto label_14b734;
        }
    }
    ctx->pc = 0x14B72Cu;
    // 0x14b72c: 0x0  nop
    ctx->pc = 0x14b72cu;
    // NOP
label_14b730:
    // 0x14b730: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14b730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_14b734:
    // 0x14b734: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14B734u;
    SET_GPR_U32(ctx, 31, 0x14B73Cu);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14B734u, 0x14B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B73Cu;
label_14b73c:
    // 0x14b73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14b740:
    // 0x14b740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14b740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14b744:
    // 0x14b744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b748: 0x3e00008  jr          $ra
    ctx->pc = 0x14B748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B748u;
        // 0x14b74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B750u;
}
