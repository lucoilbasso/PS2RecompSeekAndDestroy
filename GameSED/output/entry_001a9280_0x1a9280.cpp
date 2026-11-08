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

// Function: entry_001a9280
// Address: 0x1a9280 - 0x1a9298
void entry_001a9280_0x1a9280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9280_0x1a9280");
#endif

    ctx->pc = 0x1a9280u;

    // 0x1a9280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9284: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9288: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a928c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a928cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a9290: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A9290u;
    SET_GPR_U32(ctx, 31, 0x1A9298u);
    ctx->pc = 0x1A9294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9290u;
    // 0x1a9294: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A9290u, 0x1A9298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9298u;
}
