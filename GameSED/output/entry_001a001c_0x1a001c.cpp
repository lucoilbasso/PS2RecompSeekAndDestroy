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

// Function: entry_001a001c
// Address: 0x1a001c - 0x1a0020
void entry_001a001c_0x1a001c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a001c_0x1a001c");
#endif

    ctx->pc = 0x1a001cu;

    // 0x1a001c: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x1a001cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    ctx->pc = 0x1a0020u;
}
