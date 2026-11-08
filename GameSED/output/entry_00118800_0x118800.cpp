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

// Function: entry_00118800
// Address: 0x118800 - 0x118808
void entry_00118800_0x118800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118800_0x118800");
#endif

    ctx->pc = 0x118800u;

    // 0x118800: 0xc046208  jal         func_118820
    ctx->pc = 0x118800u;
    SET_GPR_U32(ctx, 31, 0x118808u);
    ctx->pc = 0x118804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118800u;
    // 0x118804: 0xae020fe8  sw          $v0, 0xFE8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118820u, 0x118800u, 0x118808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118808u;
}
