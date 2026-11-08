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

// Function: entry_001d10d8
// Address: 0x1d10d8 - 0x1d10dc
void entry_001d10d8_0x1d10d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d10d8_0x1d10d8");
#endif

    ctx->pc = 0x1d10d8u;

    // 0x1d10d8: 0x57280b  movn        $a1, $v0, $s7
    ctx->pc = 0x1d10d8u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->pc = 0x1d10dcu;
}
