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

// Function: entry_001091f8
// Address: 0x1091f8 - 0x109210
void entry_001091f8_0x1091f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001091f8_0x1091f8");
#endif

    switch (ctx->pc) {
        case 0x109200u: goto label_109200;
        default: break;
    }

    ctx->pc = 0x1091f8u;

    // 0x1091f8: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1091F8u;
    SET_GPR_U32(ctx, 31, 0x109200u);
    ctx->pc = 0x1091FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1091F8u;
    // 0x1091fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1091F8u, 0x109200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109200u;
label_109200:
    // 0x109200: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x109200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109204: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x109204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x109208: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x109208u;
    {
        const bool branch_taken_0x109208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109208u;
        // 0x10920c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109208) {
            ctx->pc = 0x109234u;
            return;
        }
    }
    ctx->pc = 0x109210u;
}
