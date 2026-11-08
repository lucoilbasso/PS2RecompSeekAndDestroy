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

// Function: entry_001183e0
// Address: 0x1183e0 - 0x1183f0
void entry_001183e0_0x1183e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001183e0_0x1183e0");
#endif

    ctx->pc = 0x1183e0u;

    // 0x1183e0: 0x261024d0  addiu       $s0, $s0, 0x24D0
    ctx->pc = 0x1183e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9424));
    // 0x1183e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1183e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1183e8: 0xc046116  jal         func_118458
    ctx->pc = 0x1183E8u;
    SET_GPR_U32(ctx, 31, 0x1183F0u);
    ctx->pc = 0x1183ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183E8u;
    // 0x1183ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118458u, 0x1183E8u, 0x1183F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183F0u;
}
