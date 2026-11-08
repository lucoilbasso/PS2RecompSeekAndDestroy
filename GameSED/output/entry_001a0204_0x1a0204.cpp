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

// Function: entry_001a0204
// Address: 0x1a0204 - 0x1a0208
void entry_001a0204_0x1a0204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0204_0x1a0204");
#endif

    ctx->pc = 0x1a0204u;

    // 0x1a0204: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1a0204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1a0208u;
}
