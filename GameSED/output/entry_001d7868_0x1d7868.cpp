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

// Function: entry_001d7868
// Address: 0x1d7868 - 0x1d788c
void entry_001d7868_0x1d7868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7868_0x1d7868");
#endif

    ctx->pc = 0x1d7868u;

label_1d7868:
    // 0x1d7868: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d7868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d786c:
    // 0x1d786c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d7870:
    if (ctx->pc == 0x1D7870u) {
        ctx->pc = 0x1D7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D786Cu;
        // 0x1d7870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7874u;
        goto label_1d7874;
    }
    ctx->pc = 0x1D786Cu;
    {
        const bool branch_taken_0x1d786c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D786Cu;
        // 0x1d7870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d786c) {
            ctx->pc = 0x1D788Cu;
            return;
        }
    }
    ctx->pc = 0x1D7874u;
label_1d7874:
    // 0x1d7874: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d7874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d7878:
    // 0x1d7878: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d787c:
    // 0x1d787c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d787cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7880:
    // 0x1d7880: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d7880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d7884:
    // 0x1d7884: 0x60f809  jalr        $v1
label_1d7888:
    if (ctx->pc == 0x1D7888u) {
        ctx->pc = 0x1D7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7884u;
        // 0x1d7888: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D788Cu;
        goto label_fallthrough_0x1d7884;
    }
    ctx->pc = 0x1D7884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D788Cu);
        ctx->pc = 0x1D7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7884u;
        // 0x1d7888: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7884u, 0x1D788Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d7884:
    ctx->pc = 0x1D788Cu;
}
