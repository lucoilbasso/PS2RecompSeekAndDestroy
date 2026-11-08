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

// Function: entry_001cb3fc
// Address: 0x1cb3fc - 0x1cb410
void entry_001cb3fc_0x1cb3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb3fc_0x1cb3fc");
#endif

    switch (ctx->pc) {
        case 0x1cb404u: goto label_1cb404;
        default: break;
    }

    ctx->pc = 0x1cb3fcu;

    // 0x1cb3fc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1CB3FCu;
    SET_GPR_U32(ctx, 31, 0x1CB404u);
    ctx->pc = 0x1CB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3FCu;
    // 0x1cb400: 0x8e64aa44  lw          $a0, -0x55BC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1CB3FCu, 0x1CB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB404u;
label_1cb404:
    // 0x1cb404: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB404u;
    {
        const bool branch_taken_0x1cb404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB404u;
        // 0x1cb408: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb404) {
            ctx->pc = 0x1CB414u;
            return;
        }
    }
    ctx->pc = 0x1CB40Cu;
    // 0x1cb40c: 0x0  nop
    ctx->pc = 0x1cb40cu;
    // NOP
    ctx->pc = 0x1cb410u;
}
