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

// Function: entry_0019140c
// Address: 0x19140c - 0x191414
void entry_0019140c_0x19140c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019140c_0x19140c");
#endif

    ctx->pc = 0x19140cu;

    // 0x19140c: 0xc06450a  jal         func_191428
    ctx->pc = 0x19140Cu;
    SET_GPR_U32(ctx, 31, 0x191414u);
    ctx->pc = 0x191410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19140Cu;
    // 0x191410: 0xae020278  sw          $v0, 0x278($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191428u, 0x19140Cu, 0x191414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191414u;
}
