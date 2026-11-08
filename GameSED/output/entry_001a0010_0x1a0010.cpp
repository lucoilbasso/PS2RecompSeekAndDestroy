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

// Function: entry_001a0010
// Address: 0x1a0010 - 0x1a0014
void entry_001a0010_0x1a0010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0010_0x1a0010");
#endif

    ctx->pc = 0x1a0010u;

    // 0x1a0010: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a0010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->pc = 0x1a0014u;
}
