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

// Function: entry_00144148
// Address: 0x144148 - 0x144150
void entry_00144148_0x144148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144148_0x144148");
#endif

    ctx->pc = 0x144148u;

    // 0x144148: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144148u;
    SET_GPR_U32(ctx, 31, 0x144150u);
    ctx->pc = 0x14414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144148u;
    // 0x14414c: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144148u, 0x144150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144150u;
}
