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

// Function: entry_00116168
// Address: 0x116168 - 0x11616c
void entry_00116168_0x116168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116168_0x116168");
#endif

    ctx->pc = 0x116168u;

    // 0x116168: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x116168u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x11616cu;
}
