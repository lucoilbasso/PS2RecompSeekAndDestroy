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

// Function: entry_0017b09c
// Address: 0x17b09c - 0x17b0a0
void entry_0017b09c_0x17b09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b09c_0x17b09c");
#endif

    ctx->pc = 0x17b09cu;

    // 0x17b09c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    ctx->pc = 0x17b0a0u;
}
