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

// Function: entry_001b1c64
// Address: 0x1b1c64 - 0x1b1c68
void entry_001b1c64_0x1b1c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1c64_0x1b1c64");
#endif

    ctx->pc = 0x1b1c64u;

    // 0x1b1c64: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1b1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x1b1c68u;
}
