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

// Function: entry_001d1f14
// Address: 0x1d1f14 - 0x1d1f18
void entry_001d1f14_0x1d1f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1f14_0x1d1f14");
#endif

    ctx->pc = 0x1d1f14u;

    // 0x1d1f14: 0x32e20100  andi        $v0, $s7, 0x100
    ctx->pc = 0x1d1f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
    ctx->pc = 0x1d1f18u;
}
