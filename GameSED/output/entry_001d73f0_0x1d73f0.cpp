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

// Function: entry_001d73f0
// Address: 0x1d73f0 - 0x1d7414
void entry_001d73f0_0x1d73f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d73f0_0x1d73f0");
#endif

    ctx->pc = 0x1d73f0u;

label_1d73f0:
    // 0x1d73f0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1d73f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d73f4:
    // 0x1d73f4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d73f8:
    if (ctx->pc == 0x1D73F8u) {
        ctx->pc = 0x1D73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F4u;
        // 0x1d73f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73FCu;
        goto label_1d73fc;
    }
    ctx->pc = 0x1D73F4u;
    {
        const bool branch_taken_0x1d73f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F4u;
        // 0x1d73f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73f4) {
            ctx->pc = 0x1D7414u;
            return;
        }
    }
    ctx->pc = 0x1D73FCu;
label_1d73fc:
    // 0x1d73fc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d7400:
    // 0x1d7400: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d7404:
    // 0x1d7404: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d7404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7408:
    // 0x1d7408: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d7408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d740c:
    // 0x1d740c: 0x60f809  jalr        $v1
label_1d7410:
    if (ctx->pc == 0x1D7410u) {
        ctx->pc = 0x1D7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D740Cu;
        // 0x1d7410: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7414u;
        goto label_fallthrough_0x1d740c;
    }
    ctx->pc = 0x1D740Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D7414u);
        ctx->pc = 0x1D7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D740Cu;
        // 0x1d7410: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D740Cu, 0x1D7414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d740c:
    ctx->pc = 0x1D7414u;
}
