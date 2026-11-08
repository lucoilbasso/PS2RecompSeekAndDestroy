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

// Function: entry_00186e5c
// Address: 0x186e5c - 0x186e60
void entry_00186e5c_0x186e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186e5c_0x186e5c");
#endif

    ctx->pc = 0x186e5cu;

    // 0x186e5c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x186e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x186e60u;
}
