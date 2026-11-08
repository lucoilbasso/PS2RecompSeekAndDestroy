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

// Function: entry_0019fea0
// Address: 0x19fea0 - 0x19fea8
void entry_0019fea0_0x19fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fea0_0x19fea0");
#endif

    ctx->pc = 0x19fea0u;

    // 0x19fea0: 0xc067d58  jal         func_19F560
    ctx->pc = 0x19FEA0u;
    SET_GPR_U32(ctx, 31, 0x19FEA8u);
    ctx->pc = 0x19FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FEA0u;
    // 0x19fea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F560u, 0x19FEA0u, 0x19FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FEA8u;
}
