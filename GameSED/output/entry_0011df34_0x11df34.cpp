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

// Function: entry_0011df34
// Address: 0x11df34 - 0x11df40
void entry_0011df34_0x11df34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011df34_0x11df34");
#endif

    ctx->pc = 0x11df34u;

    // 0x11df34: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11df38: 0xc05ee5c  jal         func_17B970
    ctx->pc = 0x11DF38u;
    SET_GPR_U32(ctx, 31, 0x11DF40u);
    ctx->pc = 0x11DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF38u;
    // 0x11df3c: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B970u, 0x11DF38u, 0x11DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF40u;
}
