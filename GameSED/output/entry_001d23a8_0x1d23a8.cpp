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

// Function: entry_001d23a8
// Address: 0x1d23a8 - 0x1d23ac
void entry_001d23a8_0x1d23a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d23a8_0x1d23a8");
#endif

    ctx->pc = 0x1d23a8u;

    // 0x1d23a8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d23a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x1d23acu;
}
