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

// Function: DataBankInfoClose__9ApcObjRsc
// Address: 0x1d6d28 - 0x1d6dbc
void DataBankInfoClose__9ApcObjRsc_0x1d6d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataBankInfoClose__9ApcObjRsc_0x1d6d28");
#endif

    switch (ctx->pc) {
        case 0x1d6d28u: goto label_1d6d28;
        case 0x1d6d2cu: goto label_1d6d2c;
        case 0x1d6d30u: goto label_1d6d30;
        case 0x1d6d34u: goto label_1d6d34;
        case 0x1d6d38u: goto label_1d6d38;
        case 0x1d6d3cu: goto label_1d6d3c;
        case 0x1d6d40u: goto label_1d6d40;
        case 0x1d6d44u: goto label_1d6d44;
        case 0x1d6d48u: goto label_1d6d48;
        case 0x1d6d4cu: goto label_1d6d4c;
        case 0x1d6d50u: goto label_1d6d50;
        case 0x1d6d54u: goto label_1d6d54;
        case 0x1d6d58u: goto label_1d6d58;
        case 0x1d6d5cu: goto label_1d6d5c;
        case 0x1d6d60u: goto label_1d6d60;
        case 0x1d6d64u: goto label_1d6d64;
        case 0x1d6d68u: goto label_1d6d68;
        case 0x1d6d6cu: goto label_1d6d6c;
        case 0x1d6d70u: goto label_1d6d70;
        case 0x1d6d74u: goto label_1d6d74;
        case 0x1d6d78u: goto label_1d6d78;
        case 0x1d6d7cu: goto label_1d6d7c;
        case 0x1d6d80u: goto label_1d6d80;
        case 0x1d6d84u: goto label_1d6d84;
        case 0x1d6d88u: goto label_1d6d88;
        case 0x1d6d8cu: goto label_1d6d8c;
        case 0x1d6d90u: goto label_1d6d90;
        case 0x1d6d94u: goto label_1d6d94;
        case 0x1d6d98u: goto label_1d6d98;
        case 0x1d6d9cu: goto label_1d6d9c;
        case 0x1d6da0u: goto label_1d6da0;
        case 0x1d6da4u: goto label_1d6da4;
        case 0x1d6da8u: goto label_1d6da8;
        case 0x1d6dacu: goto label_1d6dac;
        case 0x1d6db0u: goto label_1d6db0;
        case 0x1d6db4u: goto label_1d6db4;
        case 0x1d6db8u: goto label_1d6db8;
        default: break;
    }

    ctx->pc = 0x1d6d28u;

label_1d6d28:
    // 0x1d6d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d6d2c:
    // 0x1d6d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d6d30:
    // 0x1d6d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d34:
    // 0x1d6d34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d6d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d6d38:
    // 0x1d6d38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d6d3c:
    // 0x1d6d3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d6d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1d6d40:
    // 0x1d6d40: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1d6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d6d44:
    // 0x1d6d44: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_1d6d48:
    if (ctx->pc == 0x1D6D48u) {
        ctx->pc = 0x1D6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D44u;
        // 0x1d6d48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D4Cu;
        goto label_1d6d4c;
    }
    ctx->pc = 0x1D6D44u;
    {
        const bool branch_taken_0x1d6d44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D44u;
        // 0x1d6d48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d44) {
            ctx->pc = 0x1D6D98u;
            goto label_1d6d98;
        }
    }
    ctx->pc = 0x1D6D4Cu;
label_1d6d4c:
    // 0x1d6d4c: 0x0  nop
    ctx->pc = 0x1d6d4cu;
    // NOP
label_1d6d50:
    // 0x1d6d50: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d6d54:
    // 0x1d6d54: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1d6d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_1d6d58:
    // 0x1d6d58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d6d5c:
    // 0x1d6d5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d6d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d60:
    // 0x1d6d60: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1d6d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d6d64:
    // 0x1d6d64: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d6d68:
    if (ctx->pc == 0x1D6D68u) {
        ctx->pc = 0x1D6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D64u;
        // 0x1d6d68: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D6Cu;
        goto label_1d6d6c;
    }
    ctx->pc = 0x1D6D64u;
    {
        const bool branch_taken_0x1d6d64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D64u;
        // 0x1d6d68: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d64) {
            ctx->pc = 0x1D6D88u;
            goto label_1d6d88;
        }
    }
    ctx->pc = 0x1D6D6Cu;
label_1d6d6c:
    // 0x1d6d6c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6d70:
    // 0x1d6d70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d74:
    // 0x1d6d74: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6d78:
    // 0x1d6d78: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6d7c:
    // 0x1d6d7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d6d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6d80:
    // 0x1d6d80: 0x60f809  jalr        $v1
label_1d6d84:
    if (ctx->pc == 0x1D6D84u) {
        ctx->pc = 0x1D6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D80u;
        // 0x1d6d84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D88u;
        goto label_1d6d88;
    }
    ctx->pc = 0x1D6D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6D88u);
        ctx->pc = 0x1D6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D80u;
        // 0x1d6d84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6D80u, 0x1D6D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6D88u;
label_1d6d88:
    // 0x1d6d88: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1d6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d6d8c:
    // 0x1d6d8c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d6d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d6d90:
    // 0x1d6d90: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1d6d94:
    if (ctx->pc == 0x1D6D94u) {
        ctx->pc = 0x1D6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D90u;
        // 0x1d6d94: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D98u;
        goto label_1d6d98;
    }
    ctx->pc = 0x1D6D90u;
    {
        const bool branch_taken_0x1d6d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D90u;
        // 0x1d6d94: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d90) {
            ctx->pc = 0x1D6D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6d50;
        }
    }
    ctx->pc = 0x1D6D98u;
label_1d6d98:
    // 0x1d6d98: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d6d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d6d9c:
    // 0x1d6d9c: 0xc067f04  jal         func_19FC10
label_1d6da0:
    if (ctx->pc == 0x1D6DA0u) {
        ctx->pc = 0x1D6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D9Cu;
        // 0x1d6da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DA4u;
        goto label_1d6da4;
    }
    ctx->pc = 0x1D6D9Cu;
    SET_GPR_U32(ctx, 31, 0x1D6DA4u);
    ctx->pc = 0x1D6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D9Cu;
    // 0x1d6da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6D9Cu, 0x1D6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DA4u;
label_1d6da4:
    // 0x1d6da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6da8:
    // 0x1d6da8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d6dac:
    // 0x1d6dac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6dacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6db0:
    // 0x1d6db0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d6db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d6db4:
    // 0x1d6db4: 0x3e00008  jr          $ra
label_1d6db8:
    if (ctx->pc == 0x1D6DB8u) {
        ctx->pc = 0x1D6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DB4u;
        // 0x1d6db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DBCu;
        goto label_fallthrough_0x1d6db4;
    }
    ctx->pc = 0x1D6DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DB4u;
        // 0x1d6db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d6db4:
    ctx->pc = 0x1D6DBCu;
}
