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

// Function: entry_001828d4
// Address: 0x1828d4 - 0x1828e0
void entry_001828d4_0x1828d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001828d4_0x1828d4");
#endif

    ctx->pc = 0x1828d4u;

    // 0x1828d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1828d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828d8: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x1828D8u;
    SET_GPR_U32(ctx, 31, 0x1828E0u);
    ctx->pc = 0x1828DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1828D8u;
    // 0x1828dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x1828D8u, 0x1828E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828E0u;
}
