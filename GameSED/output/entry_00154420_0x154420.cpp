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

// Function: entry_00154420
// Address: 0x154420 - 0x15442c
void entry_00154420_0x154420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154420_0x154420");
#endif

    ctx->pc = 0x154420u;

    // 0x154420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154424: 0xc0538fe  jal         func_14E3F8
    ctx->pc = 0x154424u;
    SET_GPR_U32(ctx, 31, 0x15442Cu);
    ctx->pc = 0x154428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154424u;
    // 0x154428: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F8u, 0x154424u, 0x15442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15442Cu;
}
