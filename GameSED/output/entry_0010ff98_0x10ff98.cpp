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

// Function: entry_0010ff98
// Address: 0x10ff98 - 0x10ffa0
void entry_0010ff98_0x10ff98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ff98_0x10ff98");
#endif

    ctx->pc = 0x10ff98u;

    // 0x10ff98: 0xc06215a  jal         func_188568
    ctx->pc = 0x10FF98u;
    SET_GPR_U32(ctx, 31, 0x10FFA0u);
    ctx->pc = 0x10FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF98u;
    // 0x10ff9c: 0xae110164  sw          $s1, 0x164($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188568u, 0x10FF98u, 0x10FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFA0u;
}
