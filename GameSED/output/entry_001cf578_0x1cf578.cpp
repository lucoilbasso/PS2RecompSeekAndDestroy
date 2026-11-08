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

// Function: entry_001cf578
// Address: 0x1cf578 - 0x1cf57c
void entry_001cf578_0x1cf578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf578_0x1cf578");
#endif

    ctx->pc = 0x1cf578u;

    // 0x1cf578: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1cf578u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1cf57cu;
}
