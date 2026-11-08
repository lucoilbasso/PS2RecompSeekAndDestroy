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

// Function: entry_001bf4c4
// Address: 0x1bf4c4 - 0x1bf4d4
void entry_001bf4c4_0x1bf4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf4c4_0x1bf4c4");
#endif

    ctx->pc = 0x1bf4c4u;

    // 0x1bf4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4c8: 0x24a5b4b8  addiu       $a1, $a1, -0x4B48
    ctx->pc = 0x1bf4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948024));
    // 0x1bf4cc: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1BF4CCu;
    SET_GPR_U32(ctx, 31, 0x1BF4D4u);
    ctx->pc = 0x1BF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4CCu;
    // 0x1bf4d0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1BF4CCu, 0x1BF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4D4u;
}
