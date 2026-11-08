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

// Function: entry_001d48f8
// Address: 0x1d48f8 - 0x1d48fc
void entry_001d48f8_0x1d48f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48f8_0x1d48f8");
#endif

    ctx->pc = 0x1d48f8u;

    // 0x1d48f8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1d48f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    ctx->pc = 0x1d48fcu;
}
