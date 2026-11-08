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

// Function: entry_0010c024
// Address: 0x10c024 - 0x10c02c
void entry_0010c024_0x10c024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c024_0x10c024");
#endif

    ctx->pc = 0x10c024u;

    // 0x10c024: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x10C024u;
    SET_GPR_U32(ctx, 31, 0x10C02Cu);
    ctx->pc = 0x10C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C024u;
    // 0x10c028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x10C024u, 0x10C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C02Cu;
}
