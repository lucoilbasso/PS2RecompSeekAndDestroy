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

// Function: entry_00159328
// Address: 0x159328 - 0x15932c
void entry_00159328_0x159328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159328_0x159328");
#endif

    ctx->pc = 0x159328u;

    // 0x159328: 0x8d220480  lw          $v0, 0x480($t1)
    ctx->pc = 0x159328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
    ctx->pc = 0x15932cu;
}
