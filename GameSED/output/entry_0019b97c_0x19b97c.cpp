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

// Function: entry_0019b97c
// Address: 0x19b97c - 0x19b980
void entry_0019b97c_0x19b97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b97c_0x19b97c");
#endif

    ctx->pc = 0x19b97cu;

    // 0x19b97c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x19b97cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x19b980u;
}
