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

// Function: entry_0011df84
// Address: 0x11df84 - 0x11df90
void entry_0011df84_0x11df84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011df84_0x11df84");
#endif

    ctx->pc = 0x11df84u;

    // 0x11df84: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11df88: 0xc05ee74  jal         func_17B9D0
    ctx->pc = 0x11DF88u;
    SET_GPR_U32(ctx, 31, 0x11DF90u);
    ctx->pc = 0x11DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF88u;
    // 0x11df8c: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B9D0u, 0x11DF88u, 0x11DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF90u;
}
