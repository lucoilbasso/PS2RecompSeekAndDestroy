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

// Function: entry_0017d1cc
// Address: 0x17d1cc - 0x17d1d8
void entry_0017d1cc_0x17d1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d1cc_0x17d1cc");
#endif

    ctx->pc = 0x17d1ccu;

    // 0x17d1cc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x17d1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1d0: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x17D1D0u;
    SET_GPR_U32(ctx, 31, 0x17D1D8u);
    ctx->pc = 0x17D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1D0u;
    // 0x17d1d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x17D1D0u, 0x17D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1D8u;
}
