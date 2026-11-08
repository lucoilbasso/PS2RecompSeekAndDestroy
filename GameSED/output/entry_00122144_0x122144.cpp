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

// Function: entry_00122144
// Address: 0x122144 - 0x12214c
void entry_00122144_0x122144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122144_0x122144");
#endif

    ctx->pc = 0x122144u;

    // 0x122144: 0xc0484ee  jal         func_1213B8
    ctx->pc = 0x122144u;
    SET_GPR_U32(ctx, 31, 0x12214Cu);
    ctx->pc = 0x122148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122144u;
    // 0x122148: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B8u, 0x122144u, 0x12214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12214Cu;
}
