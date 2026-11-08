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

// Function: entry_0017a368
// Address: 0x17a368 - 0x17a378
void entry_0017a368_0x17a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a368_0x17a368");
#endif

    ctx->pc = 0x17a368u;

    // 0x17a368: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17a368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17a36c: 0x2484e940  addiu       $a0, $a0, -0x16C0
    ctx->pc = 0x17a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961472));
    // 0x17a370: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x17A370u;
    SET_GPR_U32(ctx, 31, 0x17A378u);
    ctx->pc = 0x17A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A370u;
    // 0x17a374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x17A370u, 0x17A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A378u;
}
