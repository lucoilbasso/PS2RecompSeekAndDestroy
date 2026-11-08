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

// Function: entry_001cdd48
// Address: 0x1cdd48 - 0x1cdd50
void entry_001cdd48_0x1cdd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdd48_0x1cdd48");
#endif

    ctx->pc = 0x1cdd48u;

    // 0x1cdd48: 0x8073d1a  j           func_1CF468
    ctx->pc = 0x1CDD48u;
    ctx->pc = 0x1CDD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD48u;
    // 0x1cdd4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF468u;
    abort_0x1cf468(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDD50u;
}
