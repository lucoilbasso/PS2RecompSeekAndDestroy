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

// Function: entry_0018e8f0
// Address: 0x18e8f0 - 0x18e8f8
void entry_0018e8f0_0x18e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e8f0_0x18e8f0");
#endif

    ctx->pc = 0x18e8f0u;

    // 0x18e8f0: 0xc063342  jal         func_18CD08
    ctx->pc = 0x18E8F0u;
    SET_GPR_U32(ctx, 31, 0x18E8F8u);
    ctx->pc = 0x18E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8F0u;
    // 0x18e8f4: 0x1273818  mult        $a3, $t1, $a3 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CD08u, 0x18E8F0u, 0x18E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E8F8u;
}
