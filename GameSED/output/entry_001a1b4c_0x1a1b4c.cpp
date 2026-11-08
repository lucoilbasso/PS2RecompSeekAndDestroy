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

// Function: entry_001a1b4c
// Address: 0x1a1b4c - 0x1a1b60
void entry_001a1b4c_0x1a1b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1b4c_0x1a1b4c");
#endif

    ctx->pc = 0x1a1b4cu;

    // 0x1a1b4c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a1b50: 0x24a59138  addiu       $a1, $a1, -0x6EC8
    ctx->pc = 0x1a1b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938936));
    // 0x1a1b54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b58: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A1B58u;
    SET_GPR_U32(ctx, 31, 0x1A1B60u);
    ctx->pc = 0x1A1B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B58u;
    // 0x1a1b5c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1B58u, 0x1A1B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B60u;
}
