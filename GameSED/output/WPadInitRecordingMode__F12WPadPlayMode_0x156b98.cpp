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

// Function: WPadInitRecordingMode__F12WPadPlayMode
// Address: 0x156b98 - 0x156c70
void WPadInitRecordingMode__F12WPadPlayMode_0x156b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadInitRecordingMode__F12WPadPlayMode_0x156b98");
#endif

    switch (ctx->pc) {
        case 0x156be0u: goto label_156be0;
        case 0x156c28u: goto label_156c28;
        default: break;
    }

    ctx->pc = 0x156b98u;

    // 0x156b98: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x156b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x156b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156ba0: 0x244635e0  addiu       $a2, $v0, 0x35E0
    ctx->pc = 0x156ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
    // 0x156ba4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x156ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x2635E4u));
    // 0x156ba8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x156BA8u;
    {
        const bool branch_taken_0x156ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x156BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BA8u;
        // 0x156bac: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ba8) {
            ctx->pc = 0x156BC8u;
            goto label_156bc8;
        }
    }
    ctx->pc = 0x156BB0u;
    // 0x156bb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156bb4: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x156BB4u;
    {
        const bool branch_taken_0x156bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x156bb4) {
            ctx->pc = 0x156BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156BB4u;
            // 0x156bb8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156BD0u;
            goto label_156bd0;
        }
    }
    ctx->pc = 0x156BBCu;
    // 0x156bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x156BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156BC4u;
    // 0x156bc4: 0x0  nop
    ctx->pc = 0x156bc4u;
    // NOP
label_156bc8:
    // 0x156bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x156BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BC8u;
        // 0x156bcc: 0xa0a00003  sb          $zero, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156BD0u;
label_156bd0:
    // 0x156bd0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x156bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x156bd4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x156BD4u;
    {
        const bool branch_taken_0x156bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156bd4) {
            ctx->pc = 0x156BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156BD4u;
            // 0x156bd8: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156C00u;
            goto label_156c00;
        }
    }
    ctx->pc = 0x156BDCu;
    // 0x156bdc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x156bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_156be0:
    // 0x156be0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x156be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x156be4: 0x0  nop
    ctx->pc = 0x156be4u;
    // NOP
    // 0x156be8: 0x0  nop
    ctx->pc = 0x156be8u;
    // NOP
    // 0x156bec: 0x0  nop
    ctx->pc = 0x156becu;
    // NOP
    // 0x156bf0: 0x0  nop
    ctx->pc = 0x156bf0u;
    // NOP
    // 0x156bf4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x156BF4u;
    {
        const bool branch_taken_0x156bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156bf4) {
            ctx->pc = 0x156BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156BF4u;
            // 0x156bf8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156be0;
        }
    }
    ctx->pc = 0x156BFCu;
    // 0x156bfc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x156bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_156c00:
    // 0x156c00: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x156c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x156c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156c08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156c0c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x156c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x156c10: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x156C10u;
    {
        const bool branch_taken_0x156c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156c10) {
            ctx->pc = 0x156C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156C10u;
            // 0x156c14: 0xacc40010  sw          $a0, 0x10($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156C50u;
            goto label_156c50;
        }
    }
    ctx->pc = 0x156C18u;
    // 0x156c18: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x156c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x156c1c: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x156C1Cu;
    {
        const bool branch_taken_0x156c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x156C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C1Cu;
        // 0x156c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c1c) {
            ctx->pc = 0x156C4Cu;
            goto label_156c4c;
        }
    }
    ctx->pc = 0x156C24u;
    // 0x156c24: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x156c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_156c28:
    // 0x156c28: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x156c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x156c2c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x156c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x156c30: 0x28a3001e  slti        $v1, $a1, 0x1E
    ctx->pc = 0x156c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x156c34: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x156C34u;
    {
        const bool branch_taken_0x156c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156c34) {
            ctx->pc = 0x156C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156C34u;
            // 0x156c38: 0xacc40010  sw          $a0, 0x10($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156C50u;
            goto label_156c50;
        }
    }
    ctx->pc = 0x156C3Cu;
    // 0x156c3c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x156c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x156c40: 0x0  nop
    ctx->pc = 0x156c40u;
    // NOP
    // 0x156c44: 0x5482fff8  bnel        $a0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x156C44u;
    {
        const bool branch_taken_0x156c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x156c44) {
            ctx->pc = 0x156C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156C44u;
            // 0x156c48: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156c28;
        }
    }
    ctx->pc = 0x156C4Cu;
label_156c4c:
    // 0x156c4c: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x156c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
label_156c50:
    // 0x156c50: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x156c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x156c54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x156c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156c58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x156c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156c5c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x156c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x156c60: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x156c60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x156c64: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x156c64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
    // 0x156c68: 0x3e00008  jr          $ra
    ctx->pc = 0x156C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C68u;
        // 0x156c6c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156C70u;
}
