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

// Function: entry_0018de88
// Address: 0x18de88 - 0x18de90
void entry_0018de88_0x18de88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de88_0x18de88");
#endif

    ctx->pc = 0x18de88u;

    // 0x18de88: 0xc063764  jal         func_18DD90
    ctx->pc = 0x18DE88u;
    SET_GPR_U32(ctx, 31, 0x18DE90u);
    ctx->pc = 0x18DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE88u;
    // 0x18de8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x18DE88u, 0x18DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE90u;
}
