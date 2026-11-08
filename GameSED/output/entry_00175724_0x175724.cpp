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

// Function: entry_00175724
// Address: 0x175724 - 0x17572c
void entry_00175724_0x175724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175724_0x175724");
#endif

    ctx->pc = 0x175724u;

    // 0x175724: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x175724u;
    SET_GPR_U32(ctx, 31, 0x17572Cu);
    ctx->pc = 0x175728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175724u;
    // 0x175728: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x175724u, 0x17572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17572Cu;
}
