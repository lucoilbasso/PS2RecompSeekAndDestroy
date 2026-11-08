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

// Function: entry_001d38f0
// Address: 0x1d38f0 - 0x1d38f4
void entry_001d38f0_0x1d38f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d38f0_0x1d38f0");
#endif

    ctx->pc = 0x1d38f0u;

    // 0x1d38f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d38f4u;
}
