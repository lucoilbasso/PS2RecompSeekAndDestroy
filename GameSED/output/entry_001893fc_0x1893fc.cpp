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

// Function: entry_001893fc
// Address: 0x1893fc - 0x189404
void entry_001893fc_0x1893fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001893fc_0x1893fc");
#endif

    ctx->pc = 0x1893fcu;

    // 0x1893fc: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x1893fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x189400: 0xaca20134  sw          $v0, 0x134($a1)
    ctx->pc = 0x189400u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
    ctx->pc = 0x189404u;
}
