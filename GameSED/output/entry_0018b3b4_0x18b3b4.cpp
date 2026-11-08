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

// Function: entry_0018b3b4
// Address: 0x18b3b4 - 0x18b3bc
void entry_0018b3b4_0x18b3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b3b4_0x18b3b4");
#endif

    ctx->pc = 0x18b3b4u;

    // 0x18b3b4: 0xc062d8a  jal         func_18B628
    ctx->pc = 0x18B3B4u;
    SET_GPR_U32(ctx, 31, 0x18B3BCu);
    ctx->pc = 0x18B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B3B4u;
    // 0x18b3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B628u, 0x18B3B4u, 0x18B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3BCu;
}
