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

// Function: entry_0017ad74
// Address: 0x17ad74 - 0x17ad7c
void entry_0017ad74_0x17ad74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ad74_0x17ad74");
#endif

    ctx->pc = 0x17ad74u;

    // 0x17ad74: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17AD74u;
    SET_GPR_U32(ctx, 31, 0x17AD7Cu);
    ctx->pc = 0x17AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD74u;
    // 0x17ad78: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17AD74u, 0x17AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD7Cu;
}
