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

// Function: entry_001d1e34
// Address: 0x1d1e34 - 0x1d1e38
void entry_001d1e34_0x1d1e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1e34_0x1d1e34");
#endif

    ctx->pc = 0x1d1e34u;

    // 0x1d1e34: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x1d1e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    ctx->pc = 0x1d1e38u;
}
