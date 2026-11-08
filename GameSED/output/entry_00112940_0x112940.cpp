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

// Function: entry_00112940
// Address: 0x112940 - 0x11294c
void entry_00112940_0x112940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112940_0x112940");
#endif

    ctx->pc = 0x112940u;

    // 0x112940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112944: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x112944u;
    SET_GPR_U32(ctx, 31, 0x11294Cu);
    ctx->pc = 0x112948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112944u;
    // 0x112948: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x112944u, 0x11294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11294Cu;
}
