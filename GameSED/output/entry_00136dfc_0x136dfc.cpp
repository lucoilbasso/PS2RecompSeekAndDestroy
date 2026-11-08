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

// Function: entry_00136dfc
// Address: 0x136dfc - 0x136e04
void entry_00136dfc_0x136dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136dfc_0x136dfc");
#endif

    ctx->pc = 0x136dfcu;

    // 0x136dfc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x136dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x136e00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x136e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x136e04u;
}
