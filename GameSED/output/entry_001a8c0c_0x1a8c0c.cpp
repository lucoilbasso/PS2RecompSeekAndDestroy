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

// Function: entry_001a8c0c
// Address: 0x1a8c0c - 0x1a8c10
void entry_001a8c0c_0x1a8c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8c0c_0x1a8c0c");
#endif

    ctx->pc = 0x1a8c0cu;

    // 0x1a8c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x1a8c10u;
}
