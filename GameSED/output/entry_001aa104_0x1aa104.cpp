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

// Function: entry_001aa104
// Address: 0x1aa104 - 0x1aa108
void entry_001aa104_0x1aa104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa104_0x1aa104");
#endif

    ctx->pc = 0x1aa104u;

    // 0x1aa104: 0xac860044  sw          $a2, 0x44($a0)
    ctx->pc = 0x1aa104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 6));
    ctx->pc = 0x1aa108u;
}
