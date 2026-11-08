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

// Function: Cmd_PANEL_ARG_FORM_Entry__FP15BsSCDEntControl
// Address: 0x10b568 - 0x10b628
void Cmd_PANEL_ARG_FORM_Entry__FP15BsSCDEntControl_0x10b568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_ARG_FORM_Entry__FP15BsSCDEntControl_0x10b568");
#endif

    switch (ctx->pc) {
        case 0x10b598u: goto label_10b598;
        case 0x10b5c4u: goto label_10b5c4;
        case 0x10b5f0u: goto label_10b5f0;
        case 0x10b5f8u: goto label_10b5f8;
        case 0x10b60cu: goto label_10b60c;
        default: break;
    }

    ctx->pc = 0x10b568u;

    // 0x10b568: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10b568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10b56c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b570: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x10b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x10b574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b578: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x10b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x10b57c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b580: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10b580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x10b584: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x10b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x10b588: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10b58c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b590: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B590u;
    SET_GPR_U32(ctx, 31, 0x10B598u);
    ctx->pc = 0x10B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B590u;
    // 0x10b594: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B590u, 0x10B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B598u;
label_10b598:
    // 0x10b598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b59c: 0x24050166  addiu       $a1, $zero, 0x166
    ctx->pc = 0x10b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10b5a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B5A0u;
    {
        const bool branch_taken_0x10b5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5A0u;
        // 0x10b5a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5a0) {
            ctx->pc = 0x10B5B8u;
            goto label_10b5b8;
        }
    }
    ctx->pc = 0x10B5A8u;
    // 0x10b5a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b5ac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b5b0: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B5B0u;
    {
        const bool branch_taken_0x10b5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x10b5b0) {
            ctx->pc = 0x10B5BCu;
            goto label_10b5bc;
        }
    }
    ctx->pc = 0x10B5B8u;
label_10b5b8:
    // 0x10b5b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10b5b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b5bc:
    // 0x10b5bc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B5BCu;
    SET_GPR_U32(ctx, 31, 0x10B5C4u);
    ctx->pc = 0x10B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5BCu;
    // 0x10b5c0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B5BCu, 0x10B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5C4u;
label_10b5c4:
    // 0x10b5c4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b5c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B5D4u;
    {
        const bool branch_taken_0x10b5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5D4u;
        // 0x10b5d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5d4) {
            ctx->pc = 0x10B5E8u;
            goto label_10b5e8;
        }
    }
    ctx->pc = 0x10B5DCu;
    // 0x10b5dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10B5DCu;
    {
        const bool branch_taken_0x10b5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5DCu;
        // 0x10b5e0: 0x8f9188ec  lw          $s1, -0x7714($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5dc) {
            ctx->pc = 0x10B5F0u;
            goto label_10b5f0;
        }
    }
    ctx->pc = 0x10B5E4u;
    // 0x10b5e4: 0x0  nop
    ctx->pc = 0x10b5e4u;
    // NOP
label_10b5e8:
    // 0x10b5e8: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x10B5E8u;
    SET_GPR_U32(ctx, 31, 0x10B5F0u);
    ctx->pc = 0x10B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5E8u;
    // 0x10b5ec: 0x8e11001c  lw          $s1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x10B5E8u, 0x10B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5F0u;
label_10b5f0:
    // 0x10b5f0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x10B5F0u;
    SET_GPR_U32(ctx, 31, 0x10B5F8u);
    ctx->pc = 0x10B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5F0u;
    // 0x10b5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x10B5F0u, 0x10B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5F8u;
label_10b5f8:
    // 0x10b5f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10b5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b600: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10b600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b604: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x10B604u;
    SET_GPR_U32(ctx, 31, 0x10B60Cu);
    ctx->pc = 0x10B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B604u;
    // 0x10b608: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EEF0u, 0x10B604u, 0x10B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B60Cu;
label_10b60c:
    // 0x10b60c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x10b60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b610: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x10b610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10b614: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10b614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b618: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x10b618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10b61c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10b61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b620: 0x3e00008  jr          $ra
    ctx->pc = 0x10B620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B620u;
        // 0x10b624: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B628u;
}
