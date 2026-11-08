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

// Function: entry_0017e494
// Address: 0x17e494 - 0x17e4a0
void entry_0017e494_0x17e494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e494_0x17e494");
#endif

    ctx->pc = 0x17e494u;

    // 0x17e494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e498: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x17E498u;
    SET_GPR_U32(ctx, 31, 0x17E4A0u);
    ctx->pc = 0x17E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E498u;
    // 0x17e49c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x17E498u, 0x17E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4A0u;
}
