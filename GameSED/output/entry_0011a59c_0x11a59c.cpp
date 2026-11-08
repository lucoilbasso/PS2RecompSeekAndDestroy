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

// Function: entry_0011a59c
// Address: 0x11a59c - 0x11a5a0
void entry_0011a59c_0x11a59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a59c_0x11a59c");
#endif

    ctx->pc = 0x11a59cu;

    // 0x11a59c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x11a5a0u;
}
