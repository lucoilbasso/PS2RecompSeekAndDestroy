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

// Function: entry_001793c8
// Address: 0x1793c8 - 0x1793cc
void entry_001793c8_0x1793c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001793c8_0x1793c8");
#endif

    ctx->pc = 0x1793c8u;

    // 0x1793c8: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x1793c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x1793ccu;
}
