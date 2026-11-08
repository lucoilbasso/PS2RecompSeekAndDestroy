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

// Function: entry_00161724
// Address: 0x161724 - 0x16172c
void entry_00161724_0x161724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161724_0x161724");
#endif

    ctx->pc = 0x161724u;

    // 0x161724: 0xc0618da  jal         func_186368
    ctx->pc = 0x161724u;
    SET_GPR_U32(ctx, 31, 0x16172Cu);
    ctx->pc = 0x161728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161724u;
    // 0x161728: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x161724u, 0x16172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16172Cu;
}
