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

// Function: entry_0015a184
// Address: 0x15a184 - 0x15a198
void entry_0015a184_0x15a184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a184_0x15a184");
#endif

    ctx->pc = 0x15a184u;

    // 0x15a184: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x15a184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15a188: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x15a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x15a18c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x15a18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x15a190: 0xc0477ca  jal         func_11DF28
    ctx->pc = 0x15A190u;
    SET_GPR_U32(ctx, 31, 0x15A198u);
    ctx->pc = 0x15A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A190u;
    // 0x15a194: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF28u, 0x15A190u, 0x15A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A198u;
}
