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

// Function: entry_0016a83c
// Address: 0x16a83c - 0x16a864
void entry_0016a83c_0x16a83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a83c_0x16a83c");
#endif

    ctx->pc = 0x16a83cu;

label_16a83c:
    // 0x16a83c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a840:
    // 0x16a840: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_16a844:
    if (ctx->pc == 0x16A844u) {
        ctx->pc = 0x16A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A840u;
        // 0x16a844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A848u;
        goto label_16a848;
    }
    ctx->pc = 0x16A840u;
    {
        const bool branch_taken_0x16a840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A840u;
        // 0x16a844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a840) {
            ctx->pc = 0x16A864u;
            return;
        }
    }
    ctx->pc = 0x16A848u;
label_16a848:
    // 0x16a848: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16a848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a84c:
    // 0x16a84c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16a850:
    // 0x16a850: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16a854:
    // 0x16a854: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a858:
    // 0x16a858: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a85c:
    // 0x16a85c: 0x60f809  jalr        $v1
label_16a860:
    if (ctx->pc == 0x16A860u) {
        ctx->pc = 0x16A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A85Cu;
        // 0x16a860: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A864u;
        goto label_fallthrough_0x16a85c;
    }
    ctx->pc = 0x16A85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A864u);
        ctx->pc = 0x16A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A85Cu;
        // 0x16a860: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A85Cu, 0x16A864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16a85c:
    ctx->pc = 0x16A864u;
}
