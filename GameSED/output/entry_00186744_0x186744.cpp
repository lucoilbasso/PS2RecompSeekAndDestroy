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

// Function: entry_00186744
// Address: 0x186744 - 0x186748
void entry_00186744_0x186744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186744_0x186744");
#endif

    ctx->pc = 0x186744u;

    // 0x186744: 0x24425640  addiu       $v0, $v0, 0x5640
    ctx->pc = 0x186744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22080));
    ctx->pc = 0x186748u;
}
