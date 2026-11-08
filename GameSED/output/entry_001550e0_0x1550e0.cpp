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

// Function: entry_001550e0
// Address: 0x1550e0 - 0x1550e4
void entry_001550e0_0x1550e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001550e0_0x1550e0");
#endif

    ctx->pc = 0x1550e0u;

    // 0x1550e0: 0x2604071c  addiu       $a0, $s0, 0x71C
    ctx->pc = 0x1550e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
    ctx->pc = 0x1550e4u;
}
