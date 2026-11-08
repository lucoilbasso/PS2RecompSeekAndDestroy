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

// Function: entry_00177518
// Address: 0x177518 - 0x177524
void entry_00177518_0x177518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177518_0x177518");
#endif

    ctx->pc = 0x177518u;

    // 0x177518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17751c: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x17751Cu;
    SET_GPR_U32(ctx, 31, 0x177524u);
    ctx->pc = 0x177520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17751Cu;
    // 0x177520: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x17751Cu, 0x177524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177524u;
}
