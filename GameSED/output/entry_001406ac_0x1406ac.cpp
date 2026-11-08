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

// Function: entry_001406ac
// Address: 0x1406ac - 0x1406b0
void entry_001406ac_0x1406ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001406ac_0x1406ac");
#endif

    ctx->pc = 0x1406acu;

    // 0x1406ac: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1406acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    ctx->pc = 0x1406b0u;
}
