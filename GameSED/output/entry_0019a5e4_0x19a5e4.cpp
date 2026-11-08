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

// Function: entry_0019a5e4
// Address: 0x19a5e4 - 0x19a5f0
void entry_0019a5e4_0x19a5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a5e4_0x19a5e4");
#endif

    ctx->pc = 0x19a5e4u;

    // 0x19a5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5e8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x19A5E8u;
    SET_GPR_U32(ctx, 31, 0x19A5F0u);
    ctx->pc = 0x19A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5E8u;
    // 0x19a5ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x19A5E8u, 0x19A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5F0u;
}
