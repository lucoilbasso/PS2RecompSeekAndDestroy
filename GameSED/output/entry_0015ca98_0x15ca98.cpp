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

// Function: entry_0015ca98
// Address: 0x15ca98 - 0x15cb10
void entry_0015ca98_0x15ca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ca98_0x15ca98");
#endif

    switch (ctx->pc) {
        case 0x15caecu: goto label_15caec;
        default: break;
    }

    ctx->pc = 0x15ca98u;

label_15ca98:
    // 0x15ca98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15ca9c:
    // 0x15ca9c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15caa0:
    if (ctx->pc == 0x15CAA0u) {
        ctx->pc = 0x15CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA9Cu;
        // 0x15caa0: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAA4u;
        goto label_15caa4;
    }
    ctx->pc = 0x15CA9Cu;
    {
        const bool branch_taken_0x15ca9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ca9c) {
            ctx->pc = 0x15CAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CA9Cu;
            // 0x15caa0: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB84u;
            return;
        }
    }
    ctx->pc = 0x15CAA4u;
label_15caa4:
    // 0x15caa4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15caa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15caa8:
    // 0x15caa8: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15caac:
    if (ctx->pc == 0x15CAACu) {
        ctx->pc = 0x15CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAA8u;
        // 0x15caac: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAB0u;
        goto label_15cab0;
    }
    ctx->pc = 0x15CAA8u;
    {
        const bool branch_taken_0x15caa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15caa8) {
            ctx->pc = 0x15CAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CAA8u;
            // 0x15caac: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB84u;
            return;
        }
    }
    ctx->pc = 0x15CAB0u;
label_15cab0:
    // 0x15cab0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cab4:
    // 0x15cab4: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15cab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15cab8:
    // 0x15cab8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15cabc:
    // 0x15cabc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15cac0:
    if (ctx->pc == 0x15CAC0u) {
        ctx->pc = 0x15CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CABCu;
        // 0x15cac0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAC4u;
        goto label_15cac4;
    }
    ctx->pc = 0x15CABCu;
    {
        const bool branch_taken_0x15cabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CABCu;
        // 0x15cac0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cabc) {
            ctx->pc = 0x15CB20u;
            return;
        }
    }
    ctx->pc = 0x15CAC4u;
label_15cac4:
    // 0x15cac4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15cac8:
    // 0x15cac8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15cacc:
    if (ctx->pc == 0x15CACCu) {
        ctx->pc = 0x15CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAC8u;
        // 0x15cacc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAD0u;
        goto label_15cad0;
    }
    ctx->pc = 0x15CAC8u;
    {
        const bool branch_taken_0x15cac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cac8) {
            ctx->pc = 0x15CACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CAC8u;
            // 0x15cacc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB14u;
            return;
        }
    }
    ctx->pc = 0x15CAD0u;
label_15cad0:
    // 0x15cad0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cad4:
    // 0x15cad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cad8:
    // 0x15cad8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cadc:
    // 0x15cadc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cadcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cae0:
    // 0x15cae0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cae4:
    // 0x15cae4: 0x60f809  jalr        $v1
label_15cae8:
    if (ctx->pc == 0x15CAE8u) {
        ctx->pc = 0x15CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAE4u;
        // 0x15cae8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAECu;
        goto label_15caec;
    }
    ctx->pc = 0x15CAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CAECu);
        ctx->pc = 0x15CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAE4u;
        // 0x15cae8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CAE4u, 0x15CAECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CAECu;
label_15caec:
    // 0x15caec: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15caecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15caf0:
    // 0x15caf0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15caf4:
    if (ctx->pc == 0x15CAF4u) {
        ctx->pc = 0x15CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAF0u;
        // 0x15caf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAF8u;
        goto label_15caf8;
    }
    ctx->pc = 0x15CAF0u;
    {
        const bool branch_taken_0x15caf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAF0u;
        // 0x15caf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15caf0) {
            ctx->pc = 0x15CB10u;
            return;
        }
    }
    ctx->pc = 0x15CAF8u;
label_15caf8:
    // 0x15caf8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cafc:
    // 0x15cafc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cb00:
    // 0x15cb00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cb00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cb04:
    // 0x15cb04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cb08:
    // 0x15cb08: 0x60f809  jalr        $v1
label_15cb0c:
    if (ctx->pc == 0x15CB0Cu) {
        ctx->pc = 0x15CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB08u;
        // 0x15cb0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB10u;
        goto label_fallthrough_0x15cb08;
    }
    ctx->pc = 0x15CB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CB10u);
        ctx->pc = 0x15CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB08u;
        // 0x15cb0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CB08u, 0x15CB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cb08:
    ctx->pc = 0x15CB10u;
}
