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

// Function: entry_00182a68
// Address: 0x182a68 - 0x182a6c
void entry_00182a68_0x182a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182a68_0x182a68");
#endif

    ctx->pc = 0x182a68u;

    // 0x182a68: 0x8f838d40  lw          $v1, -0x72C0($gp)
    ctx->pc = 0x182a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    ctx->pc = 0x182a6cu;
}
