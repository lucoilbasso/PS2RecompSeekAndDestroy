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

// Function: entry_001d2840
// Address: 0x1d2840 - 0x1d2844
void entry_001d2840_0x1d2840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2840_0x1d2840");
#endif

    ctx->pc = 0x1d2840u;

    // 0x1d2840: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d2840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x1d2844u;
}
