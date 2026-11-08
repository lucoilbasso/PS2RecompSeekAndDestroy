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

// Function: entry_00145b88
// Address: 0x145b88 - 0x145b94
void entry_00145b88_0x145b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145b88_0x145b88");
#endif

    ctx->pc = 0x145b88u;

    // 0x145b88: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x145b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x145b8c: 0xc05fe36  jal         func_17F8D8
    ctx->pc = 0x145B8Cu;
    SET_GPR_U32(ctx, 31, 0x145B94u);
    ctx->pc = 0x145B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B8Cu;
    // 0x145b90: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F8D8u, 0x145B8Cu, 0x145B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B94u;
}
