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

// Function: entry_00107f74
// Address: 0x107f74 - 0x107f84
void entry_00107f74_0x107f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f74_0x107f74");
#endif

    ctx->pc = 0x107f74u;

    // 0x107f74: 0x24a53b18  addiu       $a1, $a1, 0x3B18
    ctx->pc = 0x107f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15128));
    // 0x107f78: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x107f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x107f7c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x107F7Cu;
    SET_GPR_U32(ctx, 31, 0x107F84u);
    ctx->pc = 0x107F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F7Cu;
    // 0x107f80: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x107F7Cu, 0x107F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F84u;
}
