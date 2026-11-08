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

// Function: entry_0011d238
// Address: 0x11d238 - 0x11d248
void entry_0011d238_0x11d238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d238_0x11d238");
#endif

    ctx->pc = 0x11d238u;

    // 0x11d238: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d23c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11d23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d240: 0xc04777a  jal         func_11DDE8
    ctx->pc = 0x11D240u;
    SET_GPR_U32(ctx, 31, 0x11D248u);
    ctx->pc = 0x11D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D240u;
    // 0x11d244: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DDE8u, 0x11D240u, 0x11D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D248u;
}
