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

// Function: entry_0015e888
// Address: 0x15e888 - 0x15e8ac
void entry_0015e888_0x15e888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e888_0x15e888");
#endif

    ctx->pc = 0x15e888u;

label_15e888:
    // 0x15e888: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15e888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15e88c:
    // 0x15e88c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e890:
    if (ctx->pc == 0x15E890u) {
        ctx->pc = 0x15E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E88Cu;
        // 0x15e890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E894u;
        goto label_15e894;
    }
    ctx->pc = 0x15E88Cu;
    {
        const bool branch_taken_0x15e88c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E88Cu;
        // 0x15e890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e88c) {
            ctx->pc = 0x15E8ACu;
            return;
        }
    }
    ctx->pc = 0x15E894u;
label_15e894:
    // 0x15e894: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e898:
    // 0x15e898: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e89c:
    // 0x15e89c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e89cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e8a0:
    // 0x15e8a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e8a4:
    // 0x15e8a4: 0x60f809  jalr        $v1
label_15e8a8:
    if (ctx->pc == 0x15E8A8u) {
        ctx->pc = 0x15E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8A4u;
        // 0x15e8a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8ACu;
        goto label_fallthrough_0x15e8a4;
    }
    ctx->pc = 0x15E8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E8ACu);
        ctx->pc = 0x15E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8A4u;
        // 0x15e8a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8A4u, 0x15E8ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e8a4:
    ctx->pc = 0x15E8ACu;
}
