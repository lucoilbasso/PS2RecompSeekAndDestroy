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

// Function: entry_001cbf4c
// Address: 0x1cbf4c - 0x1cbf50
void entry_001cbf4c_0x1cbf4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbf4c_0x1cbf4c");
#endif

    ctx->pc = 0x1cbf4cu;

    // 0x1cbf4c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1cbf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    ctx->pc = 0x1cbf50u;
}
