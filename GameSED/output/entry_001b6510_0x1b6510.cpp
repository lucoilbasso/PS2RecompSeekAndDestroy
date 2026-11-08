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

// Function: entry_001b6510
// Address: 0x1b6510 - 0x1b651c
void entry_001b6510_0x1b6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6510_0x1b6510");
#endif

    ctx->pc = 0x1b6510u;

    // 0x1b6510: 0xa0400104  sb          $zero, 0x104($v0)
    ctx->pc = 0x1b6510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 260), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6514: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b6514u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b6518: 0xae20fff8  sw          $zero, -0x8($s1)
    ctx->pc = 0x1b6518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 0));
    ctx->pc = 0x1b651cu;
}
