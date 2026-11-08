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

// Function: entry_0017ac24
// Address: 0x17ac24 - 0x17ac2c
void entry_0017ac24_0x17ac24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ac24_0x17ac24");
#endif

    ctx->pc = 0x17ac24u;

    // 0x17ac24: 0xc071204  jal         func_1C4810
    ctx->pc = 0x17AC24u;
    SET_GPR_U32(ctx, 31, 0x17AC2Cu);
    ctx->pc = 0x17AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC24u;
    // 0x17ac28: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4810u, 0x17AC24u, 0x17AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC2Cu;
}
