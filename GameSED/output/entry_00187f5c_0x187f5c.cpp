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

// Function: entry_00187f5c
// Address: 0x187f5c - 0x187f60
void entry_00187f5c_0x187f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f5c_0x187f5c");
#endif

    ctx->pc = 0x187f5cu;

    // 0x187f5c: 0x264201b4  addiu       $v0, $s2, 0x1B4
    ctx->pc = 0x187f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    ctx->pc = 0x187f60u;
}
