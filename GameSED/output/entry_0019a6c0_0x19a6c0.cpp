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

// Function: entry_0019a6c0
// Address: 0x19a6c0 - 0x19a6c4
void entry_0019a6c0_0x19a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a6c0_0x19a6c0");
#endif

    ctx->pc = 0x19a6c0u;

    // 0x19a6c0: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x19a6c0u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->pc = 0x19a6c4u;
}
