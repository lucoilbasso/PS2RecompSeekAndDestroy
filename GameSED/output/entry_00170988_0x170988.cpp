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

// Function: entry_00170988
// Address: 0x170988 - 0x17098c
void entry_00170988_0x170988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170988_0x170988");
#endif

    ctx->pc = 0x170988u;

    // 0x170988: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x170988u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x17098cu;
}
