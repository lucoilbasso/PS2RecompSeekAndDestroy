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

// Function: entry_001a4080
// Address: 0x1a4080 - 0x1a4084
void entry_001a4080_0x1a4080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4080_0x1a4080");
#endif

    ctx->pc = 0x1a4080u;

    // 0x1a4080: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a4080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->pc = 0x1a4084u;
}
