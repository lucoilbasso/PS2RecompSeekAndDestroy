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

// Function: entry_0019f72c
// Address: 0x19f72c - 0x19f734
void entry_0019f72c_0x19f72c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f72c_0x19f72c");
#endif

    ctx->pc = 0x19f72cu;

    // 0x19f72c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f730: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19f730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x19f734u;
}
