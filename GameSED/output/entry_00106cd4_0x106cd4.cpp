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

// Function: entry_00106cd4
// Address: 0x106cd4 - 0x106cd8
void entry_00106cd4_0x106cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106cd4_0x106cd4");
#endif

    ctx->pc = 0x106cd4u;

    // 0x106cd4: 0x704810e8  pminw       $v0, $v0, $t0
    ctx->pc = 0x106cd4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    ctx->pc = 0x106cd8u;
}
