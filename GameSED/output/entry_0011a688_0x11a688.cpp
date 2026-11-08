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

// Function: entry_0011a688
// Address: 0x11a688 - 0x11a6a0
void entry_0011a688_0x11a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a688_0x11a688");
#endif

    ctx->pc = 0x11a688u;

    // 0x11a688: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11a688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11a68c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11a68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11a690: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x11a690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x11a694: 0x24a54338  addiu       $a1, $a1, 0x4338
    ctx->pc = 0x11a694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17208));
    // 0x11a698: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11A698u;
    SET_GPR_U32(ctx, 31, 0x11A6A0u);
    ctx->pc = 0x11A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A698u;
    // 0x11a69c: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11A698u, 0x11A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6A0u;
}
