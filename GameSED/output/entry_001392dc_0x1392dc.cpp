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

// Function: entry_001392dc
// Address: 0x1392dc - 0x1392e0
void entry_001392dc_0x1392dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001392dc_0x1392dc");
#endif

    ctx->pc = 0x1392dcu;

    // 0x1392dc: 0x8f838a18  lw          $v1, -0x75E8($gp)
    ctx->pc = 0x1392dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
    ctx->pc = 0x1392e0u;
}
