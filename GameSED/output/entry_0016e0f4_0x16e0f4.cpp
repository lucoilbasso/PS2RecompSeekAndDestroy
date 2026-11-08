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

// Function: entry_0016e0f4
// Address: 0x16e0f4 - 0x16e0fc
void entry_0016e0f4_0x16e0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e0f4_0x16e0f4");
#endif

    ctx->pc = 0x16e0f4u;

    // 0x16e0f4: 0xc05b84a  jal         func_16E128
    ctx->pc = 0x16E0F4u;
    SET_GPR_U32(ctx, 31, 0x16E0FCu);
    ctx->pc = 0x16E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0F4u;
    // 0x16e0f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E128u, 0x16E0F4u, 0x16E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0FCu;
}
