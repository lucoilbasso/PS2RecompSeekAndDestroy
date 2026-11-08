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

// Function: entry_0019ca64
// Address: 0x19ca64 - 0x19ca68
void entry_0019ca64_0x19ca64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ca64_0x19ca64");
#endif

    ctx->pc = 0x19ca64u;

    // 0x19ca64: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19ca64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x19ca68u;
}
