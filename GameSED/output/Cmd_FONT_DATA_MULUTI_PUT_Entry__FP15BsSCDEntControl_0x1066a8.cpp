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

// Function: Cmd_FONT_DATA_MULUTI_PUT_Entry__FP15BsSCDEntControl
// Address: 0x1066a8 - 0x106764
void Cmd_FONT_DATA_MULUTI_PUT_Entry__FP15BsSCDEntControl_0x1066a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FONT_DATA_MULUTI_PUT_Entry__FP15BsSCDEntControl_0x1066a8");
#endif

    switch (ctx->pc) {
        case 0x1066ccu: goto label_1066cc;
        case 0x1066d8u: goto label_1066d8;
        case 0x1066e4u: goto label_1066e4;
        case 0x1066f0u: goto label_1066f0;
        case 0x106700u: goto label_106700;
        case 0x106714u: goto label_106714;
        case 0x106728u: goto label_106728;
        default: break;
    }

    ctx->pc = 0x1066a8u;

    // 0x1066a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1066a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1066ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1066acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1066b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1066b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1066b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1066b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1066b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1066b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1066bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1066bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1066c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1066c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1066c4: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x1066C4u;
    SET_GPR_U32(ctx, 31, 0x1066CCu);
    ctx->pc = 0x1066C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066C4u;
    // 0x1066c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x1066C4u, 0x1066CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066CCu;
label_1066cc:
    // 0x1066cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1066ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066d0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1066D0u;
    SET_GPR_U32(ctx, 31, 0x1066D8u);
    ctx->pc = 0x1066D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066D0u;
    // 0x1066d4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1066D0u, 0x1066D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066D8u;
label_1066d8:
    // 0x1066d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1066d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066dc: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x1066DCu;
    SET_GPR_U32(ctx, 31, 0x1066E4u);
    ctx->pc = 0x1066E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066DCu;
    // 0x1066e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x1066DCu, 0x1066E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066E4u;
label_1066e4:
    // 0x1066e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1066e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1066E8u;
    SET_GPR_U32(ctx, 31, 0x1066F0u);
    ctx->pc = 0x1066ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066E8u;
    // 0x1066ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1066E8u, 0x1066F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066F0u;
label_1066f0:
    // 0x1066f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1066f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1066f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066f8: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x1066F8u;
    SET_GPR_U32(ctx, 31, 0x106700u);
    ctx->pc = 0x1066FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066F8u;
    // 0x1066fc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x1066F8u, 0x106700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106700u;
label_106700:
    // 0x106700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106704: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x106704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106708: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x106708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10670c: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x10670Cu;
    SET_GPR_U32(ctx, 31, 0x106714u);
    ctx->pc = 0x106710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10670Cu;
    // 0x106710: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x10670Cu, 0x106714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106714u;
label_106714:
    // 0x106714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106718: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x106718u;
    {
        const bool branch_taken_0x106718 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x10671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106718u;
        // 0x10671c: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106718) {
            ctx->pc = 0x106744u;
            goto label_106744;
        }
    }
    ctx->pc = 0x106720u;
    // 0x106720: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x106720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106724: 0x0  nop
    ctx->pc = 0x106724u;
    // NOP
label_106728:
    // 0x106728: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x106728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10672c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x10672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x106730: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x106730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x106734: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x106734u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x106738: 0x0  nop
    ctx->pc = 0x106738u;
    // NOP
    // 0x10673c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10673Cu;
    {
        const bool branch_taken_0x10673c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10673Cu;
        // 0x106740: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10673c) {
            ctx->pc = 0x106728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106728;
        }
    }
    ctx->pc = 0x106744u;
label_106744:
    // 0x106744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10674c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10674cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106750: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x106750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106754: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x106754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106758: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x106758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10675c: 0x3e00008  jr          $ra
    ctx->pc = 0x10675Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10675Cu;
        // 0x106760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10675Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106764u;
}
