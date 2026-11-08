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

// Function: entry_001d045c
// Address: 0x1d045c - 0x1d0464
void entry_001d045c_0x1d045c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d045c_0x1d045c");
#endif

    ctx->pc = 0x1d045cu;

    // 0x1d045c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d0460: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d0460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1d0464u;
}
