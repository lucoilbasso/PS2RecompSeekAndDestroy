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

// Function: entry_0012ae5c
// Address: 0x12ae5c - 0x12ae60
void entry_0012ae5c_0x12ae5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ae5c_0x12ae5c");
#endif

    ctx->pc = 0x12ae5cu;

    // 0x12ae5c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x12ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x12ae60u;
}
