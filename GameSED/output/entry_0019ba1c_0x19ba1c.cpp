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

// Function: entry_0019ba1c
// Address: 0x19ba1c - 0x19ba20
void entry_0019ba1c_0x19ba1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ba1c_0x19ba1c");
#endif

    ctx->pc = 0x19ba1cu;

    // 0x19ba1c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19ba1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x19ba20u;
}
