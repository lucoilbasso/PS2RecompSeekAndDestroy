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

// Function: entry_001b3820
// Address: 0x1b3820 - 0x1b382c
void entry_001b3820_0x1b3820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3820_0x1b3820");
#endif

    ctx->pc = 0x1b3820u;

    // 0x1b3820: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1b3820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1b3824: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1B3824u;
    SET_GPR_U32(ctx, 31, 0x1B382Cu);
    ctx->pc = 0x1B3828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3824u;
    // 0x1b3828: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1B3824u, 0x1B382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B382Cu;
}
