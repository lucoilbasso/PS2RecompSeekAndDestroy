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

// Function: entry_001050c8
// Address: 0x1050c8 - 0x1050d0
void entry_001050c8_0x1050c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001050c8_0x1050c8");
#endif

    ctx->pc = 0x1050c8u;

    // 0x1050c8: 0x806bd20  j           func_1AF480
    ctx->pc = 0x1050C8u;
    ctx->pc = 0x1050CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050C8u;
    // 0x1050cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    SignalSema_0x1af480(rdram, ctx, runtime); return;
    ctx->pc = 0x1050D0u;
}
