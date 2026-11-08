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

// Function: entry_001d6bd0
// Address: 0x1d6bd0 - 0x1d6c08
void entry_001d6bd0_0x1d6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6bd0_0x1d6bd0");
#endif

    ctx->pc = 0x1d6bd0u;

label_1d6bd0:
    // 0x1d6bd0: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1d6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_1d6bd4:
    // 0x1d6bd4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1d6bd8:
    // 0x1d6bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d6bdc:
    // 0x1d6bdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6be0:
    // 0x1d6be0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d6be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6be4:
    // 0x1d6be4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d6be8:
    if (ctx->pc == 0x1D6BE8u) {
        ctx->pc = 0x1D6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BE4u;
        // 0x1d6be8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6BECu;
        goto label_1d6bec;
    }
    ctx->pc = 0x1D6BE4u;
    {
        const bool branch_taken_0x1d6be4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BE4u;
        // 0x1d6be8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6be4) {
            ctx->pc = 0x1D6C08u;
            return;
        }
    }
    ctx->pc = 0x1D6BECu;
label_1d6bec:
    // 0x1d6bec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d6becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6bf0:
    // 0x1d6bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6bf4:
    // 0x1d6bf4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6bf8:
    // 0x1d6bf8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6bf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6bfc:
    // 0x1d6bfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d6bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6c00:
    // 0x1d6c00: 0x60f809  jalr        $v1
label_1d6c04:
    if (ctx->pc == 0x1D6C04u) {
        ctx->pc = 0x1D6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C00u;
        // 0x1d6c04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C08u;
        goto label_fallthrough_0x1d6c00;
    }
    ctx->pc = 0x1D6C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6C08u);
        ctx->pc = 0x1D6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C00u;
        // 0x1d6c04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6C00u, 0x1D6C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d6c00:
    ctx->pc = 0x1D6C08u;
}
