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

// Function: entry_0014d180
// Address: 0x14d180 - 0x14d184
void entry_0014d180_0x14d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d180_0x14d180");
#endif

    ctx->pc = 0x14d180u;

    // 0x14d180: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x14d180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    ctx->pc = 0x14d184u;
}
