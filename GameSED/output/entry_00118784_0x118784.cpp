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

// Function: entry_00118784
// Address: 0x118784 - 0x11878c
void entry_00118784_0x118784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118784_0x118784");
#endif

    ctx->pc = 0x118784u;

    // 0x118784: 0xc0461ea  jal         func_1187A8
    ctx->pc = 0x118784u;
    SET_GPR_U32(ctx, 31, 0x11878Cu);
    ctx->pc = 0x118788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118784u;
    // 0x118788: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A8u, 0x118784u, 0x11878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11878Cu;
}
