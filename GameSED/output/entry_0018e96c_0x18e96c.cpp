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

// Function: entry_0018e96c
// Address: 0x18e96c - 0x18e974
void entry_0018e96c_0x18e96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e96c_0x18e96c");
#endif

    ctx->pc = 0x18e96cu;

    // 0x18e96c: 0xc063342  jal         func_18CD08
    ctx->pc = 0x18E96Cu;
    SET_GPR_U32(ctx, 31, 0x18E974u);
    ctx->pc = 0x18E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E96Cu;
    // 0x18e970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CD08u, 0x18E96Cu, 0x18E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E974u;
}
