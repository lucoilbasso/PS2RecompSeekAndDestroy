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

// Function: entry_00149408
// Address: 0x149408 - 0x149418
void entry_00149408_0x149408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149408_0x149408");
#endif

    ctx->pc = 0x149408u;

    // 0x149408: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x149408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14940c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149410: 0xc05245c  jal         func_149170
    ctx->pc = 0x149410u;
    SET_GPR_U32(ctx, 31, 0x149418u);
    ctx->pc = 0x149414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149410u;
    // 0x149414: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149170u, 0x149410u, 0x149418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149418u;
}
