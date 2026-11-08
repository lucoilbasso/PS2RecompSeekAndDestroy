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

// Function: entry_001d226c
// Address: 0x1d226c - 0x1d2270
void entry_001d226c_0x1d226c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d226c_0x1d226c");
#endif

    ctx->pc = 0x1d226cu;

    // 0x1d226c: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d226cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    ctx->pc = 0x1d2270u;
}
