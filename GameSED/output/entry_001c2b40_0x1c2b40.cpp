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

// Function: entry_001c2b40
// Address: 0x1c2b40 - 0x1c2b4c
void entry_001c2b40_0x1c2b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2b40_0x1c2b40");
#endif

    ctx->pc = 0x1c2b40u;

    // 0x1c2b40: 0x24a5b6c8  addiu       $a1, $a1, -0x4938
    ctx->pc = 0x1c2b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948552));
    // 0x1c2b44: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C2B44u;
    SET_GPR_U32(ctx, 31, 0x1C2B4Cu);
    ctx->pc = 0x1C2B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B44u;
    // 0x1c2b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C2B44u, 0x1C2B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B4Cu;
}
