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

// Function: entry_0011d16c
// Address: 0x11d16c - 0x11d174
void entry_0011d16c_0x11d16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d16c_0x11d16c");
#endif

    ctx->pc = 0x11d16cu;

    // 0x11d16c: 0xc046116  jal         func_118458
    ctx->pc = 0x11D16Cu;
    SET_GPR_U32(ctx, 31, 0x11D174u);
    ctx->pc = 0x11D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D16Cu;
    // 0x11d170: 0xae204604  sw          $zero, 0x4604($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 17924), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118458u, 0x11D16Cu, 0x11D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D174u;
}
