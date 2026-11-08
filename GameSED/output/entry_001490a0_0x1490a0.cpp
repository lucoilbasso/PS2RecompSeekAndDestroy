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

// Function: entry_001490a0
// Address: 0x1490a0 - 0x1490ac
void entry_001490a0_0x1490a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001490a0_0x1490a0");
#endif

    ctx->pc = 0x1490a0u;

    // 0x1490a0: 0x8280b  movn        $a1, $zero, $t0
    ctx->pc = 0x1490a0u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1490a4: 0xc067c5c  jal         func_19F170
    ctx->pc = 0x1490A4u;
    SET_GPR_U32(ctx, 31, 0x1490ACu);
    ctx->pc = 0x1490A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490A4u;
    // 0x1490a8: 0xe7300b  movn        $a2, $a3, $a3 (Delay Slot)
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F170u, 0x1490A4u, 0x1490ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490ACu;
}
