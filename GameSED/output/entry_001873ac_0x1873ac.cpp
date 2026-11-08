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

// Function: entry_001873ac
// Address: 0x1873ac - 0x1873b0
void entry_001873ac_0x1873ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001873ac_0x1873ac");
#endif

    ctx->pc = 0x1873acu;

    // 0x1873ac: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1873acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    ctx->pc = 0x1873b0u;
}
