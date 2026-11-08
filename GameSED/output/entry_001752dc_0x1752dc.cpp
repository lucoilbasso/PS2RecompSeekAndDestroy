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

// Function: entry_001752dc
// Address: 0x1752dc - 0x1752e4
void entry_001752dc_0x1752dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001752dc_0x1752dc");
#endif

    ctx->pc = 0x1752dcu;

    // 0x1752dc: 0xc05d426  jal         func_175098
    ctx->pc = 0x1752DCu;
    SET_GPR_U32(ctx, 31, 0x1752E4u);
    ctx->pc = 0x175098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175098u, 0x1752DCu, 0x1752E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752E4u;
}
