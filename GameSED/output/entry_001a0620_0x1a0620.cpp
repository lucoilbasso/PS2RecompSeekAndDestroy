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

// Function: entry_001a0620
// Address: 0x1a0620 - 0x1a062c
void entry_001a0620_0x1a0620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0620_0x1a0620");
#endif

    ctx->pc = 0x1a0620u;

    // 0x1a0620: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a0620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0624: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x1a0624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x1a0628: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a0628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a062cu;
}
