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

// Function: entry_0019dff0
// Address: 0x19dff0 - 0x19dff4
void entry_0019dff0_0x19dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dff0_0x19dff0");
#endif

    ctx->pc = 0x19dff0u;

    // 0x19dff0: 0x70c518e8  pminw       $v1, $a2, $a1
    ctx->pc = 0x19dff0u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    ctx->pc = 0x19dff4u;
}
