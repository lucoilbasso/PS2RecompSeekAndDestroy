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

// Function: Cmd_VAR_PUSH_Entry__FP15BsSCDEntControl
// Address: 0x104a38 - 0x104b44
void Cmd_VAR_PUSH_Entry__FP15BsSCDEntControl_0x104a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_VAR_PUSH_Entry__FP15BsSCDEntControl_0x104a38");
#endif

    switch (ctx->pc) {
        case 0x104a7cu: goto label_104a7c;
        case 0x104aa4u: goto label_104aa4;
        case 0x104ae8u: goto label_104ae8;
        case 0x104af0u: goto label_104af0;
        default: break;
    }

    ctx->pc = 0x104a38u;

    // 0x104a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x104a3c: 0x8f8388a0  lw          $v1, -0x7760($gp)
    ctx->pc = 0x104a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x104a40: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x104a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x104a44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104a48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104a4c: 0x2442ed80  addiu       $v0, $v0, -0x1280
    ctx->pc = 0x104a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962560));
    // 0x104a50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104a54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x104a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x104a5c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x104a5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104a60: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x104A60u;
    {
        const bool branch_taken_0x104a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x104A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A60u;
        // 0x104a64: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a60) {
            ctx->pc = 0x104A7Cu;
            goto label_104a7c;
        }
    }
    ctx->pc = 0x104A68u;
    // 0x104a68: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a70: 0x24a52010  addiu       $a1, $a1, 0x2010
    ctx->pc = 0x104a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
    // 0x104a74: 0xc068186  jal         func_1A0618
    ctx->pc = 0x104A74u;
    SET_GPR_U32(ctx, 31, 0x104A7Cu);
    ctx->pc = 0x104A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A74u;
    // 0x104a78: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x104A74u, 0x104A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A7Cu;
label_104a7c:
    // 0x104a7c: 0x8f8388a0  lw          $v1, -0x7760($gp)
    ctx->pc = 0x104a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x104a80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x104a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a84: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x104a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x104a88: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x104a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x104a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x104a90: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104A90u;
    {
        const bool branch_taken_0x104a90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A90u;
        // 0x104a94: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a90) {
            ctx->pc = 0x104A9Cu;
            goto label_104a9c;
        }
    }
    ctx->pc = 0x104A98u;
    // 0x104a98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x104a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_104a9c:
    // 0x104a9c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x104A9Cu;
    SET_GPR_U32(ctx, 31, 0x104AA4u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x104A9Cu, 0x104AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AA4u;
label_104aa4:
    // 0x104aa4: 0x8f8388a0  lw          $v1, -0x7760($gp)
    ctx->pc = 0x104aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x104aa8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x104aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x104aac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x104aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x104ab0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x104AB0u;
    {
        const bool branch_taken_0x104ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104ab0) {
            ctx->pc = 0x104AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104AB0u;
            // 0x104ab4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104AE0u;
            goto label_104ae0;
        }
    }
    ctx->pc = 0x104AB8u;
    // 0x104ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104ac0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104ac4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104ac8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104acc: 0x24a52010  addiu       $a1, $a1, 0x2010
    ctx->pc = 0x104accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
    // 0x104ad0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x104ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104ad4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x104ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104ad8: 0x8068186  j           func_1A0618
    ctx->pc = 0x104AD8u;
    ctx->pc = 0x104ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104AD8u;
    // 0x104adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x104AE0u;
label_104ae0:
    // 0x104ae0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x104AE0u;
    {
        const bool branch_taken_0x104ae0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x104AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AE0u;
        // 0x104ae4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ae0) {
            ctx->pc = 0x104B20u;
            goto label_104b20;
        }
    }
    ctx->pc = 0x104AE8u;
label_104ae8:
    // 0x104ae8: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x104AE8u;
    SET_GPR_U32(ctx, 31, 0x104AF0u);
    ctx->pc = 0x104AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104AE8u;
    // 0x104aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x104AE8u, 0x104AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AF0u;
label_104af0:
    // 0x104af0: 0x8f8688a0  lw          $a2, -0x7760($gp)
    ctx->pc = 0x104af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x104af4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104af8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x104af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x104afc: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x104afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x104b00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x104b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x104b04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x104b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x104b08: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x104b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x104b0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x104b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x104b10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x104b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104b14: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x104b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x104b18: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x104B18u;
    {
        const bool branch_taken_0x104b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104b18) {
            ctx->pc = 0x104AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104ae8;
        }
    }
    ctx->pc = 0x104B20u;
label_104b20:
    // 0x104b20: 0x8f8288a0  lw          $v0, -0x7760($gp)
    ctx->pc = 0x104b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x104b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104b28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104b2c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x104b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x104b30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104b34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x104b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104b38: 0xaf8288a0  sw          $v0, -0x7760($gp)
    ctx->pc = 0x104b38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936736), GPR_U32(ctx, 2));
    // 0x104b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x104B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B3Cu;
        // 0x104b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104B44u;
}
