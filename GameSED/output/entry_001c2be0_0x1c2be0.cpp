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

// Function: entry_001c2be0
// Address: 0x1c2be0 - 0x1c2bec
void entry_001c2be0_0x1c2be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2be0_0x1c2be0");
#endif

    ctx->pc = 0x1c2be0u;

    // 0x1c2be0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c2be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c2be4: 0xc070d30  jal         func_1C34C0
    ctx->pc = 0x1C2BE4u;
    SET_GPR_U32(ctx, 31, 0x1C2BECu);
    ctx->pc = 0x1C2BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BE4u;
    // 0x1c2be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C34C0u, 0x1C2BE4u, 0x1C2BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BECu;
}
