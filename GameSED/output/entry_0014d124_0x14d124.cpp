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

// Function: entry_0014d124
// Address: 0x14d124 - 0x14d128
void entry_0014d124_0x14d124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d124_0x14d124");
#endif

    ctx->pc = 0x14d124u;

    // 0x14d124: 0x2442c240  addiu       $v0, $v0, -0x3DC0
    ctx->pc = 0x14d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951488));
    ctx->pc = 0x14d128u;
}
