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

// Function: entry_001bb434
// Address: 0x1bb434 - 0x1bb448
void entry_001bb434_0x1bb434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb434_0x1bb434");
#endif

    ctx->pc = 0x1bb434u;

    // 0x1bb434: 0x8e62c090  lw          $v0, -0x3F70($s3)
    ctx->pc = 0x1bb434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951056)));
    // 0x1bb438: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB438u;
    {
        const bool branch_taken_0x1bb438 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB438u;
        // 0x1bb43c: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb438) {
            ctx->pc = 0x1BB448u;
            return;
        }
    }
    ctx->pc = 0x1BB440u;
    // 0x1bb440: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BB440u;
    SET_GPR_U32(ctx, 31, 0x1BB448u);
    ctx->pc = 0x1BB444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB440u;
    // 0x1bb444: 0x2484b0c0  addiu       $a0, $a0, -0x4F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BB440u, 0x1BB448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB448u;
}
