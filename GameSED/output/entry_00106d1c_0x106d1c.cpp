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

// Function: entry_00106d1c
// Address: 0x106d1c - 0x106d24
void entry_00106d1c_0x106d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106d1c_0x106d1c");
#endif

    ctx->pc = 0x106d1cu;

    // 0x106d1c: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x106D1Cu;
    SET_GPR_U32(ctx, 31, 0x106D24u);
    ctx->pc = 0x106D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D1Cu;
    // 0x106d20: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x106D1Cu, 0x106D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D24u;
}
