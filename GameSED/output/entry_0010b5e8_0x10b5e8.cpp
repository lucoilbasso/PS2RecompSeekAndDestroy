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

// Function: entry_0010b5e8
// Address: 0x10b5e8 - 0x10b5f0
void entry_0010b5e8_0x10b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b5e8_0x10b5e8");
#endif

    ctx->pc = 0x10b5e8u;

    // 0x10b5e8: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x10B5E8u;
    SET_GPR_U32(ctx, 31, 0x10B5F0u);
    ctx->pc = 0x10B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5E8u;
    // 0x10b5ec: 0x8e11001c  lw          $s1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x10B5E8u, 0x10B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5F0u;
}
