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

// Function: entry_001114f8
// Address: 0x1114f8 - 0x111508
void entry_001114f8_0x1114f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001114f8_0x1114f8");
#endif

    ctx->pc = 0x1114f8u;

    // 0x1114f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1114f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1114fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111500: 0xc04425e  jal         func_110978
    ctx->pc = 0x111500u;
    SET_GPR_U32(ctx, 31, 0x111508u);
    ctx->pc = 0x111504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111500u;
    // 0x111504: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110978u, 0x111500u, 0x111508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111508u;
}
