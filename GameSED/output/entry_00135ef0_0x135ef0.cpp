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

// Function: entry_00135ef0
// Address: 0x135ef0 - 0x135f00
void entry_00135ef0_0x135ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135ef0_0x135ef0");
#endif

    ctx->pc = 0x135ef0u;

    // 0x135ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ef4: 0x24c66668  addiu       $a2, $a2, 0x6668
    ctx->pc = 0x135ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26216));
    // 0x135ef8: 0xc041606  jal         func_105818
    ctx->pc = 0x135EF8u;
    SET_GPR_U32(ctx, 31, 0x135F00u);
    ctx->pc = 0x135EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135EF8u;
    // 0x135efc: 0x24070035  addiu       $a3, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105818u, 0x135EF8u, 0x135F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F00u;
}
