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

// Function: entry_001b8f84
// Address: 0x1b8f84 - 0x1b8f9c
void entry_001b8f84_0x1b8f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8f84_0x1b8f84");
#endif

    switch (ctx->pc) {
        case 0x1b8f98u: goto label_1b8f98;
        default: break;
    }

    ctx->pc = 0x1b8f84u;

    // 0x1b8f84: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1b8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b8f88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8F88u;
    {
        const bool branch_taken_0x1b8f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F88u;
        // 0x1b8f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f88) {
            ctx->pc = 0x1B8F9Cu;
            return;
        }
    }
    ctx->pc = 0x1B8F90u;
    // 0x1b8f90: 0xc06e3be  jal         func_1B8EF8
    ctx->pc = 0x1B8F90u;
    SET_GPR_U32(ctx, 31, 0x1B8F98u);
    ctx->pc = 0x1B8F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8F90u;
    // 0x1b8f94: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8EF8u, 0x1B8F90u, 0x1B8F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F98u;
label_1b8f98:
    // 0x1b8f98: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1b8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    ctx->pc = 0x1b8f9cu;
}
