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

// Function: entry_001717c0
// Address: 0x1717c0 - 0x1717c8
void entry_001717c0_0x1717c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001717c0_0x1717c0");
#endif

    ctx->pc = 0x1717c0u;

    // 0x1717c0: 0xc05d69a  jal         func_175A68
    ctx->pc = 0x1717C0u;
    SET_GPR_U32(ctx, 31, 0x1717C8u);
    ctx->pc = 0x1717C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717C0u;
    // 0x1717c4: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A68u, 0x1717C0u, 0x1717C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717C8u;
}
