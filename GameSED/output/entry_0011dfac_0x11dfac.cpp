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

// Function: entry_0011dfac
// Address: 0x11dfac - 0x11dfb8
void entry_0011dfac_0x11dfac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dfac_0x11dfac");
#endif

    ctx->pc = 0x11dfacu;

    // 0x11dfac: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11dfb0: 0xc05ee40  jal         func_17B900
    ctx->pc = 0x11DFB0u;
    SET_GPR_U32(ctx, 31, 0x11DFB8u);
    ctx->pc = 0x11DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFB0u;
    // 0x11dfb4: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B900u, 0x11DFB0u, 0x11DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFB8u;
}
