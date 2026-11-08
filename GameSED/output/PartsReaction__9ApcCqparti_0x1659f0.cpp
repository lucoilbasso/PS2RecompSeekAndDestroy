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

// Function: PartsReaction__9ApcCqparti
// Address: 0x1659f0 - 0x165b5c
void PartsReaction__9ApcCqparti_0x1659f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsReaction__9ApcCqparti_0x1659f0");
#endif

    switch (ctx->pc) {
        case 0x165a90u: goto label_165a90;
        case 0x165aa0u: goto label_165aa0;
        case 0x165ad8u: goto label_165ad8;
        case 0x165b00u: goto label_165b00;
        case 0x165b10u: goto label_165b10;
        default: break;
    }

    ctx->pc = 0x1659f0u;

    // 0x1659f0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1659f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1659f4: 0x248310fc  addiu       $v1, $a0, 0x10FC
    ctx->pc = 0x1659f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4348));
    // 0x1659f8: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x1659f8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1659fc: 0xac821250  sw          $v0, 0x1250($a0)
    ctx->pc = 0x1659fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4688), GPR_U32(ctx, 2));
    // 0x165a00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165a04: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x165A04u;
    {
        const bool branch_taken_0x165a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a04) {
            ctx->pc = 0x165A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A04u;
            // 0x165a08: 0x2483111c  addiu       $v1, $a0, 0x111C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4380));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A38u;
            goto label_165a38;
        }
    }
    ctx->pc = 0x165A0Cu;
    // 0x165a0c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165A0Cu;
    {
        const bool branch_taken_0x165a0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a0c) {
            ctx->pc = 0x165A28u;
            goto label_165a28;
        }
    }
    ctx->pc = 0x165A14u;
    // 0x165a14: 0x4410030  bgez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x165A14u;
    {
        const bool branch_taken_0x165a14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x165A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A14u;
        // 0x165a18: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a14) {
            ctx->pc = 0x165AD8u;
            goto label_165ad8;
        }
    }
    ctx->pc = 0x165A1Cu;
    // 0x165a1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165A1Cu;
    {
        const bool branch_taken_0x165a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a1c) {
            ctx->pc = 0x165A30u;
            goto label_165a30;
        }
    }
    ctx->pc = 0x165A24u;
    // 0x165a24: 0x0  nop
    ctx->pc = 0x165a24u;
    // NOP
label_165a28:
    // 0x165a28: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x165A28u;
    {
        const bool branch_taken_0x165a28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x165A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A28u;
        // 0x165a2c: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a28) {
            ctx->pc = 0x165AD8u;
            goto label_165ad8;
        }
    }
    ctx->pc = 0x165A30u;
label_165a30:
    // 0x165a30: 0x3e00008  jr          $ra
    ctx->pc = 0x165A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A30u;
        // 0x165a34: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165A38u;
label_165a38:
    // 0x165a38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165a3c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x165A3Cu;
    {
        const bool branch_taken_0x165a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a3c) {
            ctx->pc = 0x165A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A3Cu;
            // 0x165a40: 0x90830c00  lbu         $v1, 0xC00($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A50u;
            goto label_165a50;
        }
    }
    ctx->pc = 0x165A44u;
    // 0x165a44: 0x3e00008  jr          $ra
    ctx->pc = 0x165A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A44u;
        // 0x165a48: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165A4Cu;
    // 0x165a4c: 0x0  nop
    ctx->pc = 0x165a4cu;
    // NOP
label_165a50:
    // 0x165a50: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x165a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x165a54: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x165A54u;
    {
        const bool branch_taken_0x165a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165a54) {
            ctx->pc = 0x165B54u;
            goto label_165b54;
        }
    }
    ctx->pc = 0x165A5Cu;
    // 0x165a5c: 0x8c821260  lw          $v0, 0x1260($a0)
    ctx->pc = 0x165a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4704)));
    // 0x165a60: 0x1045003c  beq         $v0, $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x165A60u;
    {
        const bool branch_taken_0x165a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x165a60) {
            ctx->pc = 0x165B54u;
            goto label_165b54;
        }
    }
    ctx->pc = 0x165A68u;
    // 0x165a68: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x165A68u;
    {
        const bool branch_taken_0x165a68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A68u;
        // 0x165a6c: 0xac851260  sw          $a1, 0x1260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4704), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a68) {
            ctx->pc = 0x165AE0u;
            goto label_165ae0;
        }
    }
    ctx->pc = 0x165A70u;
    // 0x165a70: 0x24861258  addiu       $a2, $a0, 0x1258
    ctx->pc = 0x165a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4696));
    // 0x165a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165a78: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x165a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x165a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a80: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x165A80u;
    {
        const bool branch_taken_0x165a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A80u;
        // 0x165a84: 0xac821260  sw          $v0, 0x1260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a80) {
            ctx->pc = 0x165AD8u;
            goto label_165ad8;
        }
    }
    ctx->pc = 0x165A88u;
    // 0x165a88: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x165a88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_165a90:
    // 0x165a90: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x165A90u;
    {
        const bool branch_taken_0x165a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a90) {
            ctx->pc = 0x165A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A90u;
            // 0x165a94: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165AC0u;
            goto label_165ac0;
        }
    }
    ctx->pc = 0x165A98u;
    // 0x165a98: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x165a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x165a9c: 0x0  nop
    ctx->pc = 0x165a9cu;
    // NOP
label_165aa0:
    // 0x165aa0: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x165aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x165aa4: 0x0  nop
    ctx->pc = 0x165aa4u;
    // NOP
    // 0x165aa8: 0x0  nop
    ctx->pc = 0x165aa8u;
    // NOP
    // 0x165aac: 0x0  nop
    ctx->pc = 0x165aacu;
    // NOP
    // 0x165ab0: 0x0  nop
    ctx->pc = 0x165ab0u;
    // NOP
    // 0x165ab4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165AB4u;
    {
        const bool branch_taken_0x165ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ab4) {
            ctx->pc = 0x165AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165AB4u;
            // 0x165ab8: 0xac4000e0  sw          $zero, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165aa0;
        }
    }
    ctx->pc = 0x165ABCu;
    // 0x165abc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x165abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_165ac0:
    // 0x165ac0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165ac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165AC4u;
    {
        const bool branch_taken_0x165ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AC4u;
        // 0x165ac8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ac4) {
            ctx->pc = 0x165AD8u;
            goto label_165ad8;
        }
    }
    ctx->pc = 0x165ACCu;
    // 0x165acc: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x165accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x165ad0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x165AD0u;
    {
        const bool branch_taken_0x165ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ad0) {
            ctx->pc = 0x165AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165AD0u;
            // 0x165ad4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165a90;
        }
    }
    ctx->pc = 0x165AD8u;
label_165ad8:
    // 0x165ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x165AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165AE0u;
label_165ae0:
    // 0x165ae0: 0x8c821258  lw          $v0, 0x1258($a0)
    ctx->pc = 0x165ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4696)));
    // 0x165ae4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x165ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ae8: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x165ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165aec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165AECu;
    {
        const bool branch_taken_0x165aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AECu;
        // 0x165af0: 0xac801260  sw          $zero, 0x1260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165aec) {
            ctx->pc = 0x165AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165ad8;
        }
    }
    ctx->pc = 0x165AF4u;
    // 0x165af4: 0x24071250  addiu       $a3, $zero, 0x1250
    ctx->pc = 0x165af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x165af8: 0x24061250  addiu       $a2, $zero, 0x1250
    ctx->pc = 0x165af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x165afc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x165afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_165b00:
    // 0x165b00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x165b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165b04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x165B04u;
    {
        const bool branch_taken_0x165b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B04u;
        // 0x165b08: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b04) {
            ctx->pc = 0x165B2Cu;
            goto label_165b2c;
        }
    }
    ctx->pc = 0x165B0Cu;
    // 0x165b0c: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x165b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
label_165b10:
    // 0x165b10: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x165b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x165b14: 0x0  nop
    ctx->pc = 0x165b14u;
    // NOP
    // 0x165b18: 0x0  nop
    ctx->pc = 0x165b18u;
    // NOP
    // 0x165b1c: 0x0  nop
    ctx->pc = 0x165b1cu;
    // NOP
    // 0x165b20: 0x0  nop
    ctx->pc = 0x165b20u;
    // NOP
    // 0x165b24: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165B24u;
    {
        const bool branch_taken_0x165b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165b24) {
            ctx->pc = 0x165B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165B24u;
            // 0x165b28: 0xac4300e0  sw          $v1, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165b10;
        }
    }
    ctx->pc = 0x165B2Cu;
label_165b2c:
    // 0x165b2c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x165b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x165b30: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x165b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x165b34: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x165b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x165b38: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x165b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x165b3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x165b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165b40: 0x1060ffe5  beqz        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x165B40u;
    {
        const bool branch_taken_0x165b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B40u;
        // 0x165b44: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b40) {
            ctx->pc = 0x165AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165ad8;
        }
    }
    ctx->pc = 0x165B48u;
    // 0x165b48: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x165b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x165b4c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x165B4Cu;
    {
        const bool branch_taken_0x165b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B4Cu;
        // 0x165b50: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b4c) {
            ctx->pc = 0x165B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165b00;
        }
    }
    ctx->pc = 0x165B54u;
label_165b54:
    // 0x165b54: 0x3e00008  jr          $ra
    ctx->pc = 0x165B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165B5Cu;
}
