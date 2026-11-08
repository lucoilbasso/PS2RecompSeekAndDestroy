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

// Function: entry_0015cc90
// Address: 0x15cc90 - 0x15cd08
void entry_0015cc90_0x15cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cc90_0x15cc90");
#endif

    switch (ctx->pc) {
        case 0x15cce4u: goto label_15cce4;
        default: break;
    }

    ctx->pc = 0x15cc90u;

label_15cc90:
    // 0x15cc90: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cc94:
    // 0x15cc94: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15cc98:
    if (ctx->pc == 0x15CC98u) {
        ctx->pc = 0x15CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC94u;
        // 0x15cc98: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC9Cu;
        goto label_15cc9c;
    }
    ctx->pc = 0x15CC94u;
    {
        const bool branch_taken_0x15cc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cc94) {
            ctx->pc = 0x15CC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CC94u;
            // 0x15cc98: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD7Cu;
            return;
        }
    }
    ctx->pc = 0x15CC9Cu;
label_15cc9c:
    // 0x15cc9c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15cc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15cca0:
    // 0x15cca0: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15cca4:
    if (ctx->pc == 0x15CCA4u) {
        ctx->pc = 0x15CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCA0u;
        // 0x15cca4: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCA8u;
        goto label_15cca8;
    }
    ctx->pc = 0x15CCA0u;
    {
        const bool branch_taken_0x15cca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cca0) {
            ctx->pc = 0x15CCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CCA0u;
            // 0x15cca4: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD7Cu;
            return;
        }
    }
    ctx->pc = 0x15CCA8u;
label_15cca8:
    // 0x15cca8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ccac:
    // 0x15ccac: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15ccacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15ccb0:
    // 0x15ccb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ccb4:
    // 0x15ccb4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15ccb8:
    if (ctx->pc == 0x15CCB8u) {
        ctx->pc = 0x15CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCB4u;
        // 0x15ccb8: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCBCu;
        goto label_15ccbc;
    }
    ctx->pc = 0x15CCB4u;
    {
        const bool branch_taken_0x15ccb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCB4u;
        // 0x15ccb8: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccb4) {
            ctx->pc = 0x15CD18u;
            return;
        }
    }
    ctx->pc = 0x15CCBCu;
label_15ccbc:
    // 0x15ccbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ccbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ccc0:
    // 0x15ccc0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15ccc4:
    if (ctx->pc == 0x15CCC4u) {
        ctx->pc = 0x15CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCC0u;
        // 0x15ccc4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCC8u;
        goto label_15ccc8;
    }
    ctx->pc = 0x15CCC0u;
    {
        const bool branch_taken_0x15ccc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ccc0) {
            ctx->pc = 0x15CCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CCC0u;
            // 0x15ccc4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD0Cu;
            return;
        }
    }
    ctx->pc = 0x15CCC8u;
label_15ccc8:
    // 0x15ccc8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cccc:
    // 0x15cccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ccd0:
    // 0x15ccd0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ccd4:
    // 0x15ccd4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ccd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ccd8:
    // 0x15ccd8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ccdc:
    // 0x15ccdc: 0x60f809  jalr        $v1
label_15cce0:
    if (ctx->pc == 0x15CCE0u) {
        ctx->pc = 0x15CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCDCu;
        // 0x15cce0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCE4u;
        goto label_15cce4;
    }
    ctx->pc = 0x15CCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CCE4u);
        ctx->pc = 0x15CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCDCu;
        // 0x15cce0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CCDCu, 0x15CCE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CCE4u;
label_15cce4:
    // 0x15cce4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cce8:
    // 0x15cce8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15ccec:
    if (ctx->pc == 0x15CCECu) {
        ctx->pc = 0x15CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCE8u;
        // 0x15ccec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCF0u;
        goto label_15ccf0;
    }
    ctx->pc = 0x15CCE8u;
    {
        const bool branch_taken_0x15cce8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCE8u;
        // 0x15ccec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cce8) {
            ctx->pc = 0x15CD08u;
            return;
        }
    }
    ctx->pc = 0x15CCF0u;
label_15ccf0:
    // 0x15ccf0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ccf4:
    // 0x15ccf4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ccf8:
    // 0x15ccf8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ccf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ccfc:
    // 0x15ccfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cd00:
    // 0x15cd00: 0x60f809  jalr        $v1
label_15cd04:
    if (ctx->pc == 0x15CD04u) {
        ctx->pc = 0x15CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD00u;
        // 0x15cd04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD08u;
        goto label_fallthrough_0x15cd00;
    }
    ctx->pc = 0x15CD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CD08u);
        ctx->pc = 0x15CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD00u;
        // 0x15cd04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD00u, 0x15CD08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cd00:
    ctx->pc = 0x15CD08u;
}
