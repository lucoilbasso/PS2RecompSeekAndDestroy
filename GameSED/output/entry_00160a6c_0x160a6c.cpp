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

// Function: entry_00160a6c
// Address: 0x160a6c - 0x160a70
void entry_00160a6c_0x160a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a6c_0x160a6c");
#endif

    ctx->pc = 0x160a6cu;

    // 0x160a6c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x160a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    ctx->pc = 0x160a70u;
}
