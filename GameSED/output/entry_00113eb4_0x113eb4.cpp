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

// Function: entry_00113eb4
// Address: 0x113eb4 - 0x113ebc
void entry_00113eb4_0x113eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113eb4_0x113eb4");
#endif

    ctx->pc = 0x113eb4u;

    // 0x113eb4: 0xc04171a  jal         func_105C68
    ctx->pc = 0x113EB4u;
    SET_GPR_U32(ctx, 31, 0x113EBCu);
    ctx->pc = 0x113EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EB4u;
    // 0x113eb8: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x113EB4u, 0x113EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EBCu;
}
