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

// Function: entry_00183bcc
// Address: 0x183bcc - 0x183bd4
void entry_00183bcc_0x183bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183bcc_0x183bcc");
#endif

    ctx->pc = 0x183bccu;

    // 0x183bcc: 0xc060fbe  jal         func_183EF8
    ctx->pc = 0x183BCCu;
    SET_GPR_U32(ctx, 31, 0x183BD4u);
    ctx->pc = 0x183BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183BCCu;
    // 0x183bd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183EF8u, 0x183BCCu, 0x183BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BD4u;
}
