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

// Function: entry_001d579c
// Address: 0x1d579c - 0x1d57a0
void entry_001d579c_0x1d579c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d579c_0x1d579c");
#endif

    ctx->pc = 0x1d579cu;

    // 0x1d579c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1d579cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x1d57a0u;
}
