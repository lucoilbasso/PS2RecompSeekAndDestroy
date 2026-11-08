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

// Function: entry_001d2d7c
// Address: 0x1d2d7c - 0x1d2d80
void entry_001d2d7c_0x1d2d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2d7c_0x1d2d7c");
#endif

    ctx->pc = 0x1d2d7cu;

    // 0x1d2d7c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1d2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1d2d80u;
}
