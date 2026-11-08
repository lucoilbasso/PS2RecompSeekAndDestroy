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

// Function: entry_001d438c
// Address: 0x1d438c - 0x1d4390
void entry_001d438c_0x1d438c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d438c_0x1d438c");
#endif

    ctx->pc = 0x1d438cu;

    // 0x1d438c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1d438cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1d4390u;
}
