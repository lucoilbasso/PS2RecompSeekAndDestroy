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

// Function: entry_001cb308
// Address: 0x1cb308 - 0x1cb318
void entry_001cb308_0x1cb308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb308_0x1cb308");
#endif

    switch (ctx->pc) {
        case 0x1cb310u: goto label_1cb310;
        default: break;
    }

    ctx->pc = 0x1cb308u;

    // 0x1cb308: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1CB308u;
    SET_GPR_U32(ctx, 31, 0x1CB310u);
    ctx->pc = 0x1CB30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB308u;
    // 0x1cb30c: 0x8e64aa44  lw          $a0, -0x55BC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1CB308u, 0x1CB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB310u;
label_1cb310:
    // 0x1cb310: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1CB310u;
    {
        const bool branch_taken_0x1cb310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB310u;
        // 0x1cb314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb310) {
            ctx->pc = 0x1CB414u;
            return;
        }
    }
    ctx->pc = 0x1CB318u;
}
