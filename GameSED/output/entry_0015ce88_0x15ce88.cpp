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

// Function: entry_0015ce88
// Address: 0x15ce88 - 0x15cf00
void entry_0015ce88_0x15ce88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ce88_0x15ce88");
#endif

    switch (ctx->pc) {
        case 0x15cedcu: goto label_15cedc;
        default: break;
    }

    ctx->pc = 0x15ce88u;

label_15ce88:
    // 0x15ce88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15ce8c:
    // 0x15ce8c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15ce90:
    if (ctx->pc == 0x15CE90u) {
        ctx->pc = 0x15CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE8Cu;
        // 0x15ce90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE94u;
        goto label_15ce94;
    }
    ctx->pc = 0x15CE8Cu;
    {
        const bool branch_taken_0x15ce8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce8c) {
            ctx->pc = 0x15CE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CE8Cu;
            // 0x15ce90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CF74u;
            return;
        }
    }
    ctx->pc = 0x15CE94u;
label_15ce94:
    // 0x15ce94: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ce94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ce98:
    // 0x15ce98: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15ce9c:
    if (ctx->pc == 0x15CE9Cu) {
        ctx->pc = 0x15CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE98u;
        // 0x15ce9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEA0u;
        goto label_15cea0;
    }
    ctx->pc = 0x15CE98u;
    {
        const bool branch_taken_0x15ce98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce98) {
            ctx->pc = 0x15CE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CE98u;
            // 0x15ce9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CF74u;
            return;
        }
    }
    ctx->pc = 0x15CEA0u;
label_15cea0:
    // 0x15cea0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cea4:
    // 0x15cea4: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15cea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15cea8:
    // 0x15cea8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ceac:
    // 0x15ceac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15ceb0:
    if (ctx->pc == 0x15CEB0u) {
        ctx->pc = 0x15CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEACu;
        // 0x15ceb0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEB4u;
        goto label_15ceb4;
    }
    ctx->pc = 0x15CEACu;
    {
        const bool branch_taken_0x15ceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEACu;
        // 0x15ceb0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ceac) {
            ctx->pc = 0x15CF10u;
            return;
        }
    }
    ctx->pc = 0x15CEB4u;
label_15ceb4:
    // 0x15ceb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ceb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ceb8:
    // 0x15ceb8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15cebc:
    if (ctx->pc == 0x15CEBCu) {
        ctx->pc = 0x15CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEB8u;
        // 0x15cebc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEC0u;
        goto label_15cec0;
    }
    ctx->pc = 0x15CEB8u;
    {
        const bool branch_taken_0x15ceb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ceb8) {
            ctx->pc = 0x15CEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CEB8u;
            // 0x15cebc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CF04u;
            return;
        }
    }
    ctx->pc = 0x15CEC0u;
label_15cec0:
    // 0x15cec0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cec4:
    // 0x15cec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cec8:
    // 0x15cec8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cecc:
    // 0x15cecc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ceccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ced0:
    // 0x15ced0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ced4:
    // 0x15ced4: 0x60f809  jalr        $v1
label_15ced8:
    if (ctx->pc == 0x15CED8u) {
        ctx->pc = 0x15CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CED4u;
        // 0x15ced8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEDCu;
        goto label_15cedc;
    }
    ctx->pc = 0x15CED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CEDCu);
        ctx->pc = 0x15CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CED4u;
        // 0x15ced8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CED4u, 0x15CEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CEDCu;
label_15cedc:
    // 0x15cedc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cee0:
    // 0x15cee0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cee4:
    if (ctx->pc == 0x15CEE4u) {
        ctx->pc = 0x15CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEE0u;
        // 0x15cee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEE8u;
        goto label_15cee8;
    }
    ctx->pc = 0x15CEE0u;
    {
        const bool branch_taken_0x15cee0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEE0u;
        // 0x15cee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cee0) {
            ctx->pc = 0x15CF00u;
            return;
        }
    }
    ctx->pc = 0x15CEE8u;
label_15cee8:
    // 0x15cee8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ceec:
    // 0x15ceec: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cef0:
    // 0x15cef0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cef4:
    // 0x15cef4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cef8:
    // 0x15cef8: 0x60f809  jalr        $v1
label_15cefc:
    if (ctx->pc == 0x15CEFCu) {
        ctx->pc = 0x15CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEF8u;
        // 0x15cefc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF00u;
        goto label_fallthrough_0x15cef8;
    }
    ctx->pc = 0x15CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CF00u);
        ctx->pc = 0x15CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEF8u;
        // 0x15cefc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CEF8u, 0x15CF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cef8:
    ctx->pc = 0x15CF00u;
}
