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

// Function: entry_001a694c
// Address: 0x1a694c - 0x1a6950
void entry_001a694c_0x1a694c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a694c_0x1a694c");
#endif

    ctx->pc = 0x1a694cu;

    // 0x1a694c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1a694cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x1a6950u;
}
