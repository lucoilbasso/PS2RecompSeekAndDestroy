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

// Function: entry_00190e0c
// Address: 0x190e0c - 0x190e10
void entry_00190e0c_0x190e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190e0c_0x190e0c");
#endif

    ctx->pc = 0x190e0cu;

    // 0x190e0c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x190e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    ctx->pc = 0x190e10u;
}
