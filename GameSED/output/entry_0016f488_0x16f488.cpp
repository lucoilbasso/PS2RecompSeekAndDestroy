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

// Function: entry_0016f488
// Address: 0x16f488 - 0x16f48c
void entry_0016f488_0x16f488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f488_0x16f488");
#endif

    ctx->pc = 0x16f488u;

    // 0x16f488: 0xaf808b60  sw          $zero, -0x74A0($gp)
    ctx->pc = 0x16f488u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U32(ctx, 0));
    ctx->pc = 0x16f48cu;
}
