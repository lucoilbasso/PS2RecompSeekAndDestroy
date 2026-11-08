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

// Function: Cmd_KEY_DOWN_LOAD_Entry__FP15BsSCDEntControl
// Address: 0x113b30 - 0x113c0c
void Cmd_KEY_DOWN_LOAD_Entry__FP15BsSCDEntControl_0x113b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_KEY_DOWN_LOAD_Entry__FP15BsSCDEntControl_0x113b30");
#endif

    switch (ctx->pc) {
        case 0x113b48u: goto label_113b48;
        case 0x113b54u: goto label_113b54;
        case 0x113b60u: goto label_113b60;
        case 0x113ba0u: goto label_113ba0;
        case 0x113bbcu: goto label_113bbc;
        default: break;
    }

    ctx->pc = 0x113b30u;

    // 0x113b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113b38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x113b3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x113b40: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x113B40u;
    SET_GPR_U32(ctx, 31, 0x113B48u);
    ctx->pc = 0x113B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B40u;
    // 0x113b44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x113B40u, 0x113B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B48u;
label_113b48:
    // 0x113b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b4c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x113B4Cu;
    SET_GPR_U32(ctx, 31, 0x113B54u);
    ctx->pc = 0x113B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B4Cu;
    // 0x113b50: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x113B4Cu, 0x113B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B54u;
label_113b54:
    // 0x113b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b58: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x113B58u;
    SET_GPR_U32(ctx, 31, 0x113B60u);
    ctx->pc = 0x113B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B58u;
    // 0x113b5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x113B58u, 0x113B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B60u;
label_113b60:
    // 0x113b60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x113b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x113b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113b68: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113B68u;
    {
        const bool branch_taken_0x113b68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x113B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B68u;
        // 0x113b6c: 0x240224d0  addiu       $v0, $zero, 0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b68) {
            ctx->pc = 0x113B88u;
            goto label_113b88;
        }
    }
    ctx->pc = 0x113B70u;
    // 0x113b70: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x113b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x113b74: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x113b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x113b78: 0x24a5d172  addiu       $a1, $a1, -0x2E8E
    ctx->pc = 0x113b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955378));
    // 0x113b7c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x113b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x113b80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113B80u;
    {
        const bool branch_taken_0x113b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B80u;
        // 0x113b84: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b80) {
            ctx->pc = 0x113B94u;
            goto label_113b94;
        }
    }
    ctx->pc = 0x113B88u;
label_113b88:
    // 0x113b88: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x113b8c: 0x2445c090  addiu       $a1, $v0, -0x3F70
    ctx->pc = 0x113b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951056));
    // 0x113b90: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x113b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_113b94:
    // 0x113b94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b98: 0x2448c058  addiu       $t0, $v0, -0x3FA8
    ctx->pc = 0x113b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951000));
    // 0x113b9c: 0x95090000  lhu         $t1, 0x0($t0)
    ctx->pc = 0x113b9cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_113ba0:
    // 0x113ba0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x113ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x113ba4: 0x14490004  bne         $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x113BA4u;
    {
        const bool branch_taken_0x113ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x113BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BA4u;
        // 0x113ba8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ba4) {
            ctx->pc = 0x113BB8u;
            goto label_113bb8;
        }
    }
    ctx->pc = 0x113BACu;
    // 0x113bac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x113BACu;
    {
        const bool branch_taken_0x113bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BACu;
        // 0x113bb0: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bac) {
            ctx->pc = 0x113BE4u;
            goto label_113be4;
        }
    }
    ctx->pc = 0x113BB4u;
    // 0x113bb4: 0x0  nop
    ctx->pc = 0x113bb4u;
    // NOP
label_113bb8:
    // 0x113bb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x113bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_113bbc:
    // 0x113bbc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x113bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x113bc0: 0x2c830036  sltiu       $v1, $a0, 0x36
    ctx->pc = 0x113bc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)54) ? 1 : 0);
    // 0x113bc4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x113BC4u;
    {
        const bool branch_taken_0x113bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BC4u;
        // 0x113bc8: 0x481021  addu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bc4) {
            ctx->pc = 0x113BE4u;
            goto label_113be4;
        }
    }
    ctx->pc = 0x113BCCu;
    // 0x113bcc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x113bccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113bd0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x113bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x113bd4: 0x0  nop
    ctx->pc = 0x113bd4u;
    // NOP
    // 0x113bd8: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x113BD8u;
    {
        const bool branch_taken_0x113bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x113bd8) {
            ctx->pc = 0x113BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113BD8u;
            // 0x113bdc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113bbc;
        }
    }
    ctx->pc = 0x113BE0u;
    // 0x113be0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x113be0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_113be4:
    // 0x113be4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x113be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x113be8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x113be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x113bec: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x113becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x113bf0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x113BF0u;
    {
        const bool branch_taken_0x113bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BF0u;
        // 0x113bf4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bf0) {
            ctx->pc = 0x113BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113ba0;
        }
    }
    ctx->pc = 0x113BF8u;
    // 0x113bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113bfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113c04: 0x3e00008  jr          $ra
    ctx->pc = 0x113C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C04u;
        // 0x113c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113C0Cu;
}
