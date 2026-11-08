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

// Function: entry_00145a8c
// Address: 0x145a8c - 0x145a90
void entry_00145a8c_0x145a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145a8c_0x145a8c");
#endif

    ctx->pc = 0x145a8cu;

    // 0x145a8c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x145a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    ctx->pc = 0x145a90u;
}
