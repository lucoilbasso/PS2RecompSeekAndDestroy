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

// Function: entry_001a8934
// Address: 0x1a8934 - 0x1a8938
void entry_001a8934_0x1a8934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8934_0x1a8934");
#endif

    ctx->pc = 0x1a8934u;

    // 0x1a8934: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1a8934u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a8938u;
}
