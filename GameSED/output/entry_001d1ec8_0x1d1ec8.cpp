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

// Function: entry_001d1ec8
// Address: 0x1d1ec8 - 0x1d1ecc
void entry_001d1ec8_0x1d1ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1ec8_0x1d1ec8");
#endif

    ctx->pc = 0x1d1ec8u;

    // 0x1d1ec8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x1d1eccu;
}
