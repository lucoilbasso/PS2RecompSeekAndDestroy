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

// Function: entry_00156d8c
// Address: 0x156d8c - 0x156d90
void entry_00156d8c_0x156d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156d8c_0x156d8c");
#endif

    ctx->pc = 0x156d8cu;

    // 0x156d8c: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x156d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x156d90u;
}
