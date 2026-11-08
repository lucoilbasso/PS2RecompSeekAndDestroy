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

// Function: entry_00145554
// Address: 0x145554 - 0x145558
void entry_00145554_0x145554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145554_0x145554");
#endif

    ctx->pc = 0x145554u;

    // 0x145554: 0xac650418  sw          $a1, 0x418($v1)
    ctx->pc = 0x145554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1048), GPR_U32(ctx, 5));
    ctx->pc = 0x145558u;
}
