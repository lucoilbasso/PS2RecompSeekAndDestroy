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

// Function: entry_001d6d50
// Address: 0x1d6d50 - 0x1d6d88
void entry_001d6d50_0x1d6d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6d50_0x1d6d50");
#endif

    ctx->pc = 0x1d6d50u;

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
            return;
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
        goto label_fallthrough_0x1d6d80;
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
label_fallthrough_0x1d6d80:
    ctx->pc = 0x1D6D88u;
}
