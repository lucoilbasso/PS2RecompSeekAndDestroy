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

// Function: entry_0011c7a0
// Address: 0x11c7a0 - 0x11c7b4
void entry_0011c7a0_0x11c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c7a0_0x11c7a0");
#endif

    ctx->pc = 0x11c7a0u;

    // 0x11c7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7a4: 0x26313000  addiu       $s1, $s1, 0x3000
    ctx->pc = 0x11c7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12288));
    // 0x11c7a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11c7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c7ac: 0xc046116  jal         func_118458
    ctx->pc = 0x11C7ACu;
    SET_GPR_U32(ctx, 31, 0x11C7B4u);
    ctx->pc = 0x11C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7ACu;
    // 0x11c7b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118458u, 0x11C7ACu, 0x11C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7B4u;
}
