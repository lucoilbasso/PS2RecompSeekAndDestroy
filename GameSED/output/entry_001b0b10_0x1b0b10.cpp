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

// Function: entry_001b0b10
// Address: 0x1b0b10 - 0x1b0b18
void entry_001b0b10_0x1b0b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0b10_0x1b0b10");
#endif

    ctx->pc = 0x1b0b10u;

    // 0x1b0b10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b0b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b0b14: 0x0  nop
    ctx->pc = 0x1b0b14u;
    // NOP
    ctx->pc = 0x1b0b18u;
}
