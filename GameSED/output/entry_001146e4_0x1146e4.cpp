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

// Function: entry_001146e4
// Address: 0x1146e4 - 0x1146e8
void entry_001146e4_0x1146e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001146e4_0x1146e4");
#endif

    ctx->pc = 0x1146e4u;

    // 0x1146e4: 0x8f839124  lw          $v1, -0x6EDC($gp)
    ctx->pc = 0x1146e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    ctx->pc = 0x1146e8u;
}
