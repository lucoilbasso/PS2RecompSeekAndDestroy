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

// Function: entry_001da3f4
// Address: 0x1da3f4 - 0x1da418
void entry_001da3f4_0x1da3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da3f4_0x1da3f4");
#endif

    ctx->pc = 0x1da3f4u;

label_1da3f4:
    // 0x1da3f4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1da3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1da3f8:
    // 0x1da3f8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da3fc:
    if (ctx->pc == 0x1DA3FCu) {
        ctx->pc = 0x1DA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3F8u;
        // 0x1da3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA400u;
        goto label_1da400;
    }
    ctx->pc = 0x1DA3F8u;
    {
        const bool branch_taken_0x1da3f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3F8u;
        // 0x1da3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3f8) {
            ctx->pc = 0x1DA418u;
            return;
        }
    }
    ctx->pc = 0x1DA400u;
label_1da400:
    // 0x1da400: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da404:
    // 0x1da404: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da408:
    // 0x1da408: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da40c:
    // 0x1da40c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da410:
    // 0x1da410: 0x60f809  jalr        $v1
label_1da414:
    if (ctx->pc == 0x1DA414u) {
        ctx->pc = 0x1DA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA410u;
        // 0x1da414: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA418u;
        goto label_fallthrough_0x1da410;
    }
    ctx->pc = 0x1DA410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA418u);
        ctx->pc = 0x1DA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA410u;
        // 0x1da414: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA410u, 0x1DA418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da410:
    ctx->pc = 0x1DA418u;
}
