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

// Function: entry_001a5e54
// Address: 0x1a5e54 - 0x1a5e58
void entry_001a5e54_0x1a5e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5e54_0x1a5e54");
#endif

    ctx->pc = 0x1a5e54u;

    // 0x1a5e54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1a5e58u;
}
