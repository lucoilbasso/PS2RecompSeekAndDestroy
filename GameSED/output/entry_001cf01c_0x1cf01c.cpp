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

// Function: entry_001cf01c
// Address: 0x1cf01c - 0x1cf020
void entry_001cf01c_0x1cf01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf01c_0x1cf01c");
#endif

    ctx->pc = 0x1cf01cu;

    // 0x1cf01c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cf01cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1cf020u;
}
