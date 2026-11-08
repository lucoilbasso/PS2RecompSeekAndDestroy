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

// Function: entry_00175ae0
// Address: 0x175ae0 - 0x175ae8
void entry_00175ae0_0x175ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175ae0_0x175ae0");
#endif

    ctx->pc = 0x175ae0u;

    // 0x175ae0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x175AE0u;
    SET_GPR_U32(ctx, 31, 0x175AE8u);
    ctx->pc = 0x175AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175AE0u;
    // 0x175ae4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x175AE0u, 0x175AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175AE8u;
}
