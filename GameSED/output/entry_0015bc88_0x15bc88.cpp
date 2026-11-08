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

// Function: entry_0015bc88
// Address: 0x15bc88 - 0x15bcd4
void entry_0015bc88_0x15bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bc88_0x15bc88");
#endif

    switch (ctx->pc) {
        case 0x15bcb0u: goto label_15bcb0;
        default: break;
    }

    ctx->pc = 0x15bc88u;

label_15bc88:
    // 0x15bc88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15bc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15bc8c:
    // 0x15bc8c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15bc90:
    if (ctx->pc == 0x15BC90u) {
        ctx->pc = 0x15BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC8Cu;
        // 0x15bc90: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC94u;
        goto label_15bc94;
    }
    ctx->pc = 0x15BC8Cu;
    {
        const bool branch_taken_0x15bc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bc8c) {
            ctx->pc = 0x15BC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BC8Cu;
            // 0x15bc90: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BCD8u;
            return;
        }
    }
    ctx->pc = 0x15BC94u;
label_15bc94:
    // 0x15bc94: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bc98:
    // 0x15bc98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15bc9c:
    // 0x15bc9c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bca0:
    // 0x15bca0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bca4:
    // 0x15bca4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bca8:
    // 0x15bca8: 0x60f809  jalr        $v1
label_15bcac:
    if (ctx->pc == 0x15BCACu) {
        ctx->pc = 0x15BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCA8u;
        // 0x15bcac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCB0u;
        goto label_15bcb0;
    }
    ctx->pc = 0x15BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BCB0u);
        ctx->pc = 0x15BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCA8u;
        // 0x15bcac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BCA8u, 0x15BCB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BCB0u;
label_15bcb0:
    // 0x15bcb0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15bcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15bcb4:
    // 0x15bcb4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bcb8:
    if (ctx->pc == 0x15BCB8u) {
        ctx->pc = 0x15BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCB4u;
        // 0x15bcb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCBCu;
        goto label_15bcbc;
    }
    ctx->pc = 0x15BCB4u;
    {
        const bool branch_taken_0x15bcb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCB4u;
        // 0x15bcb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bcb4) {
            ctx->pc = 0x15BCD4u;
            return;
        }
    }
    ctx->pc = 0x15BCBCu;
label_15bcbc:
    // 0x15bcbc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bcc0:
    // 0x15bcc0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bcc4:
    // 0x15bcc4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bcc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bcc8:
    // 0x15bcc8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bccc:
    // 0x15bccc: 0x60f809  jalr        $v1
label_15bcd0:
    if (ctx->pc == 0x15BCD0u) {
        ctx->pc = 0x15BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCCCu;
        // 0x15bcd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCD4u;
        goto label_fallthrough_0x15bccc;
    }
    ctx->pc = 0x15BCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BCD4u);
        ctx->pc = 0x15BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCCCu;
        // 0x15bcd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BCCCu, 0x15BCD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15bccc:
    ctx->pc = 0x15BCD4u;
}
