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

// Function: entry_001d1c38
// Address: 0x1d1c38 - 0x1d1c3c
void entry_001d1c38_0x1d1c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1c38_0x1d1c38");
#endif

    ctx->pc = 0x1d1c38u;

    // 0x1d1c38: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x1d1c3cu;
}
