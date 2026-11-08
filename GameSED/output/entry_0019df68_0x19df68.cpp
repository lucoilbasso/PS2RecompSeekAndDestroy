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

// Function: entry_0019df68
// Address: 0x19df68 - 0x19df6c
void entry_0019df68_0x19df68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019df68_0x19df68");
#endif

    ctx->pc = 0x19df68u;

    // 0x19df68: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19df68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x19df6cu;
}
