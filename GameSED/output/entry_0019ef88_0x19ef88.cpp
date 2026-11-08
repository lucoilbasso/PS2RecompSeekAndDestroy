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

// Function: entry_0019ef88
// Address: 0x19ef88 - 0x19ef8c
void entry_0019ef88_0x19ef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef88_0x19ef88");
#endif

    ctx->pc = 0x19ef88u;

    // 0x19ef88: 0x70c518e8  pminw       $v1, $a2, $a1
    ctx->pc = 0x19ef88u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    ctx->pc = 0x19ef8cu;
}
