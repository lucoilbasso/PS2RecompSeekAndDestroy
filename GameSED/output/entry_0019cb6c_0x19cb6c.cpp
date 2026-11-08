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

// Function: entry_0019cb6c
// Address: 0x19cb6c - 0x19cb70
void entry_0019cb6c_0x19cb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb6c_0x19cb6c");
#endif

    ctx->pc = 0x19cb6cu;

    // 0x19cb6c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19cb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19cb70u;
}
