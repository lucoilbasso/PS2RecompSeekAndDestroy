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

// Function: entry_0019f1b8
// Address: 0x19f1b8 - 0x19f1bc
void entry_0019f1b8_0x19f1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f1b8_0x19f1b8");
#endif

    ctx->pc = 0x19f1b8u;

    // 0x19f1b8: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19f1b8u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    ctx->pc = 0x19f1bcu;
}
