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

// Function: entry_001e1590
// Address: 0x1e1590 - 0x1e1594
void entry_001e1590_0x1e1590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1590_0x1e1590");
#endif

    ctx->pc = 0x1e1590u;

    // 0x1e1590: 0xac8200d8  sw          $v0, 0xD8($a0)
    ctx->pc = 0x1e1590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
    ctx->pc = 0x1e1594u;
}
