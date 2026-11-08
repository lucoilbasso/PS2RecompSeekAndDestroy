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

// Function: Cmd_FONT_DATA_GET_Entry__FP15BsSCDEntControl
// Address: 0x104d20 - 0x104e0c
void Cmd_FONT_DATA_GET_Entry__FP15BsSCDEntControl_0x104d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FONT_DATA_GET_Entry__FP15BsSCDEntControl_0x104d20");
#endif

    switch (ctx->pc) {
        case 0x104d44u: goto label_104d44;
        case 0x104d50u: goto label_104d50;
        case 0x104d5cu: goto label_104d5c;
        case 0x104d7cu: goto label_104d7c;
        case 0x104db4u: goto label_104db4;
        case 0x104dc4u: goto label_104dc4;
        case 0x104dd8u: goto label_104dd8;
        default: break;
    }

    ctx->pc = 0x104d20u;

    // 0x104d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104d28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104d2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x104d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x104d30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x104d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x104d34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104d38: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x104d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x104d3c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x104D3Cu;
    SET_GPR_U32(ctx, 31, 0x104D44u);
    ctx->pc = 0x104D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D3Cu;
    // 0x104d40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x104D3Cu, 0x104D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D44u;
label_104d44:
    // 0x104d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d48: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x104D48u;
    SET_GPR_U32(ctx, 31, 0x104D50u);
    ctx->pc = 0x104D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D48u;
    // 0x104d4c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x104D48u, 0x104D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D50u;
label_104d50:
    // 0x104d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d54: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x104D54u;
    SET_GPR_U32(ctx, 31, 0x104D5Cu);
    ctx->pc = 0x104D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D54u;
    // 0x104d58: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x104D54u, 0x104D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D5Cu;
label_104d5c:
    // 0x104d5c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x104d5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d60: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x104d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x104d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d68: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x104d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x104d6c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x104D6Cu;
    {
        const bool branch_taken_0x104d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D6Cu;
        // 0x104d70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d6c) {
            ctx->pc = 0x104DD0u;
            goto label_104dd0;
        }
    }
    ctx->pc = 0x104D74u;
    // 0x104d74: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x104D74u;
    SET_GPR_U32(ctx, 31, 0x104D7Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x104D74u, 0x104D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D7Cu;
label_104d7c:
    // 0x104d7c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104d80: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x104d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x104d84: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x104d84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104d88: 0x24a53858  addiu       $a1, $a1, 0x3858
    ctx->pc = 0x104d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14424));
    // 0x104d8c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x104d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x104d90: 0x8c70038c  lw          $s0, 0x38C($v1)
    ctx->pc = 0x104d90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 908)));
    // 0x104d94: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x104d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x104d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d9c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x104d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x104da0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x104da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x104da4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104DA4u;
    {
        const bool branch_taken_0x104da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DA4u;
        // 0x104da8: 0x688821  addu        $s1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104da4) {
            ctx->pc = 0x104DB4u;
            goto label_104db4;
        }
    }
    ctx->pc = 0x104DACu;
    // 0x104dac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x104DACu;
    SET_GPR_U32(ctx, 31, 0x104DB4u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x104DACu, 0x104DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DB4u;
label_104db4:
    // 0x104db4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x104db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104dbc: 0xc06a19a  jal         func_1A8668
    ctx->pc = 0x104DBCu;
    SET_GPR_U32(ctx, 31, 0x104DC4u);
    ctx->pc = 0x104DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DBCu;
    // 0x104dc0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8668u, 0x104DBCu, 0x104DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DC4u;
label_104dc4:
    // 0x104dc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x104DC4u;
    {
        const bool branch_taken_0x104dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DC4u;
        // 0x104dc8: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104dc4) {
            ctx->pc = 0x104DDCu;
            goto label_104ddc;
        }
    }
    ctx->pc = 0x104DCCu;
    // 0x104dcc: 0x0  nop
    ctx->pc = 0x104dccu;
    // NOP
label_104dd0:
    // 0x104dd0: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x104DD0u;
    SET_GPR_U32(ctx, 31, 0x104DD8u);
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x104DD0u, 0x104DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DD8u;
label_104dd8:
    // 0x104dd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x104dd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104ddc:
    // 0x104ddc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x104ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x104de0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104de0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104de4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104dec: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x104decu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104df0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104df4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x104df4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x104df8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104dfc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x104dfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104e00: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x104e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104e04: 0x3e00008  jr          $ra
    ctx->pc = 0x104E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E04u;
        // 0x104e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104E0Cu;
}
