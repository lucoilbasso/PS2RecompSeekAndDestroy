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

// Function: entry_0019df5c
// Address: 0x19df5c - 0x19df60
void entry_0019df5c_0x19df5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019df5c_0x19df5c");
#endif

    ctx->pc = 0x19df5cu;

    // 0x19df5c: 0x70a210c8  pmaxw       $v0, $a1, $v0
    ctx->pc = 0x19df5cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    ctx->pc = 0x19df60u;
}
