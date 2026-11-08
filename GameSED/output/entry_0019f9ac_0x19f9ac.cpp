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

// Function: entry_0019f9ac
// Address: 0x19f9ac - 0x19f9b8
void entry_0019f9ac_0x19f9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f9ac_0x19f9ac");
#endif

    ctx->pc = 0x19f9acu;

    // 0x19f9ac: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19f9b0: 0xc05bcca  jal         func_16F328
    ctx->pc = 0x19F9B0u;
    SET_GPR_U32(ctx, 31, 0x19F9B8u);
    ctx->pc = 0x19F9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9B0u;
    // 0x19f9b4: 0x24848790  addiu       $a0, $a0, -0x7870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F328u, 0x19F9B0u, 0x19F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9B8u;
}
