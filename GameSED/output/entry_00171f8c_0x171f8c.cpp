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

// Function: entry_00171f8c
// Address: 0x171f8c - 0x171f90
void entry_00171f8c_0x171f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171f8c_0x171f8c");
#endif

    ctx->pc = 0x171f8cu;

    // 0x171f8c: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x171f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    ctx->pc = 0x171f90u;
}
