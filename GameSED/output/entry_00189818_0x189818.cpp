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

// Function: entry_00189818
// Address: 0x189818 - 0x189820
void entry_00189818_0x189818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189818_0x189818");
#endif

    ctx->pc = 0x189818u;

    // 0x189818: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18981c: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x18981cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x189820u;
}
