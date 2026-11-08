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

// Function: _dualPrimeVector
// Address: 0x1c0b40 - 0x1c0cc4
void _dualPrimeVector_0x1c0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dualPrimeVector_0x1c0b40");
#endif

    switch (ctx->pc) {
        case 0x1c0bd4u: goto label_1c0bd4;
        case 0x1c0bd8u: goto label_1c0bd8;
        default: break;
    }

    ctx->pc = 0x1c0b40u;

    // 0x1c0b40: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x1c0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1c0b44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0b48: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C0B48u;
    {
        const bool branch_taken_0x1c0b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0b48) {
            ctx->pc = 0x1C0C60u;
            goto label_1c0c60;
        }
    }
    ctx->pc = 0x1C0B50u;
    // 0x1c0b50: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x1c0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x1c0b54: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C0B54u;
    {
        const bool branch_taken_0x1c0b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b54) {
            ctx->pc = 0x1C0B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0B54u;
            // 0x1c0b58: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0BE8u;
            goto label_1c0be8;
        }
    }
    ctx->pc = 0x1C0B5Cu;
    // 0x1c0b5c: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0B5Cu;
    {
        const bool branch_taken_0x1c0b5c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1C0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B5Cu;
        // 0x1c0b60: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b5c) {
            ctx->pc = 0x1C0B70u;
            goto label_1c0b70;
        }
    }
    ctx->pc = 0x1C0B64u;
    // 0x1c0b64: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1c0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c0b68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0B68u;
    {
        const bool branch_taken_0x1c0b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B68u;
        // 0x1c0b6c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b68) {
            ctx->pc = 0x1C0B74u;
            goto label_1c0b74;
        }
    }
    ctx->pc = 0x1C0B70u;
label_1c0b70:
    // 0x1c0b70: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x1c0b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_1c0b74:
    // 0x1c0b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0b78: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c0b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c0b7c: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0B7Cu;
    {
        const bool branch_taken_0x1c0b7c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1C0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B7Cu;
        // 0x1c0b80: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b7c) {
            ctx->pc = 0x1C0B90u;
            goto label_1c0b90;
        }
    }
    ctx->pc = 0x1C0B84u;
    // 0x1c0b84: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1c0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c0b88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0B88u;
    {
        const bool branch_taken_0x1c0b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B88u;
        // 0x1c0b8c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b88) {
            ctx->pc = 0x1C0B94u;
            goto label_1c0b94;
        }
    }
    ctx->pc = 0x1C0B90u;
label_1c0b90:
    // 0x1c0b90: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x1c0b90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_1c0b94:
    // 0x1c0b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0b98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0b9c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1c0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1c0ba0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1c0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1c0ba4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1c0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1c0ba8: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0BA8u;
    {
        const bool branch_taken_0x1c0ba8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1C0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BA8u;
        // 0x1c0bac: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ba8) {
            ctx->pc = 0x1C0BB4u;
            goto label_1c0bb4;
        }
    }
    ctx->pc = 0x1C0BB0u;
    // 0x1c0bb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c0bb4:
    // 0x1c0bb4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c0bb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c0bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0bbc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1c0bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1c0bc0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1c0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1c0bc4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1c0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1c0bc8: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0BC8u;
    {
        const bool branch_taken_0x1c0bc8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1C0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BC8u;
        // 0x1c0bcc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0bc8) {
            ctx->pc = 0x1C0BD4u;
            goto label_1c0bd4;
        }
    }
    ctx->pc = 0x1C0BD0u;
    // 0x1c0bd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c0bd4:
    // 0x1c0bd4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c0bd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c0bd8:
    // 0x1c0bd8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1c0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c0bdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BE0u;
        // 0x1c0be4: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0BE8u;
label_1c0be8:
    // 0x1c0be8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0bec: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0BECu;
    {
        const bool branch_taken_0x1c0bec = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1C0BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BECu;
        // 0x1c0bf0: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0bec) {
            ctx->pc = 0x1C0BF8u;
            goto label_1c0bf8;
        }
    }
    ctx->pc = 0x1C0BF4u;
    // 0x1c0bf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c0bf8:
    // 0x1c0bf8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c0bf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c0bfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0c00: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c0c04: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1c0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1c0c08: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1c0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1c0c0c: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0C0Cu;
    {
        const bool branch_taken_0x1c0c0c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1C0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C0Cu;
        // 0x1c0c10: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c0c) {
            ctx->pc = 0x1C0C18u;
            goto label_1c0c18;
        }
    }
    ctx->pc = 0x1C0C14u;
    // 0x1c0c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c0c18:
    // 0x1c0c18: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c0c18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c0c1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0c20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0c24: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1c0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1c0c28: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0C28u;
    {
        const bool branch_taken_0x1c0c28 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1C0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C28u;
        // 0x1c0c2c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c28) {
            ctx->pc = 0x1C0C3Cu;
            goto label_1c0c3c;
        }
    }
    ctx->pc = 0x1C0C30u;
    // 0x1c0c30: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1c0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c0c34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0C34u;
    {
        const bool branch_taken_0x1c0c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C34u;
        // 0x1c0c38: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c34) {
            ctx->pc = 0x1C0C40u;
            goto label_1c0c40;
        }
    }
    ctx->pc = 0x1C0C3Cu;
label_1c0c3c:
    // 0x1c0c3c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x1c0c3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_1c0c40:
    // 0x1c0c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0c44: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1c0c44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1c0c48: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0C48u;
    {
        const bool branch_taken_0x1c0c48 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1C0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C48u;
        // 0x1c0c4c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c48) {
            ctx->pc = 0x1C0C58u;
            goto label_1c0c58;
        }
    }
    ctx->pc = 0x1C0C50u;
    // 0x1c0c50: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1C0C50u;
    {
        const bool branch_taken_0x1c0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C50u;
        // 0x1c0c54: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c50) {
            ctx->pc = 0x1C0BD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0bd4;
        }
    }
    ctx->pc = 0x1C0C58u;
label_1c0c58:
    // 0x1c0c58: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C0C58u;
    {
        const bool branch_taken_0x1c0c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C58u;
        // 0x1c0c5c: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c58) {
            ctx->pc = 0x1C0BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0bd8;
        }
    }
    ctx->pc = 0x1C0C60u;
label_1c0c60:
    // 0x1c0c60: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0C60u;
    {
        const bool branch_taken_0x1c0c60 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1C0C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C60u;
        // 0x1c0c64: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c60) {
            ctx->pc = 0x1C0C74u;
            goto label_1c0c74;
        }
    }
    ctx->pc = 0x1C0C68u;
    // 0x1c0c68: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1c0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c0c6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0C6Cu;
    {
        const bool branch_taken_0x1c0c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C6Cu;
        // 0x1c0c70: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c6c) {
            ctx->pc = 0x1C0C78u;
            goto label_1c0c78;
        }
    }
    ctx->pc = 0x1C0C74u;
label_1c0c74:
    // 0x1c0c74: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x1c0c74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_1c0c78:
    // 0x1c0c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0c7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c0c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c0c80: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0C80u;
    {
        const bool branch_taken_0x1c0c80 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1C0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C80u;
        // 0x1c0c84: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c80) {
            ctx->pc = 0x1C0C94u;
            goto label_1c0c94;
        }
    }
    ctx->pc = 0x1C0C88u;
    // 0x1c0c88: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1c0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c0c8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0C8Cu;
    {
        const bool branch_taken_0x1c0c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C8Cu;
        // 0x1c0c90: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c8c) {
            ctx->pc = 0x1C0C98u;
            goto label_1c0c98;
        }
    }
    ctx->pc = 0x1C0C94u;
label_1c0c94:
    // 0x1c0c94: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x1c0c94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_1c0c98:
    // 0x1c0c98: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1c0c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c0c9c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x1c0c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x1c0ca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ca4: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x1c0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1c0ca8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0CA8u;
    {
        const bool branch_taken_0x1c0ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CA8u;
        // 0x1c0cac: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ca8) {
            ctx->pc = 0x1C0CBCu;
            goto label_1c0cbc;
        }
    }
    ctx->pc = 0x1C0CB0u;
    // 0x1c0cb0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1c0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c0cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CB4u;
        // 0x1c0cb8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0CBCu;
label_1c0cbc:
    // 0x1c0cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CBCu;
        // 0x1c0cc0: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0CC4u;
}
