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

// Function: entry_0019bb08
// Address: 0x19bb08 - 0x19bb0c
void entry_0019bb08_0x19bb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb08_0x19bb08");
#endif

    ctx->pc = 0x19bb08u;

    // 0x19bb08: 0x102180a  movz        $v1, $t0, $v0
    ctx->pc = 0x19bb08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    ctx->pc = 0x19bb0cu;
}
