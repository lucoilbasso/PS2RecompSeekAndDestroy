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

// Function: entry_00115a0c
// Address: 0x115a0c - 0x115a18
void entry_00115a0c_0x115a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115a0c_0x115a0c");
#endif

    ctx->pc = 0x115a0cu;

    // 0x115a0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x115a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115a10: 0xc041882  jal         func_106208
    ctx->pc = 0x115A10u;
    SET_GPR_U32(ctx, 31, 0x115A18u);
    ctx->pc = 0x115A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A10u;
    // 0x115a14: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x115A10u, 0x115A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A18u;
}
