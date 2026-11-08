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

// Function: entry_001cefb0
// Address: 0x1cefb0 - 0x1cefb4
void entry_001cefb0_0x1cefb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cefb0_0x1cefb0");
#endif

    ctx->pc = 0x1cefb0u;

    // 0x1cefb0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1cefb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1cefb4u;
}
