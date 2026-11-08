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

// Function: entry_0017ab90
// Address: 0x17ab90 - 0x17ab98
void entry_0017ab90_0x17ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ab90_0x17ab90");
#endif

    ctx->pc = 0x17ab90u;

    // 0x17ab90: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x17AB90u;
    SET_GPR_U32(ctx, 31, 0x17AB98u);
    ctx->pc = 0x17AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB90u;
    // 0x17ab94: 0x8c440030  lw          $a0, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x17AB90u, 0x17AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB98u;
}
