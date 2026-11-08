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

// Function: entry_0015da1c
// Address: 0x15da1c - 0x15da20
void entry_0015da1c_0x15da1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015da1c_0x15da1c");
#endif

    ctx->pc = 0x15da1cu;

    // 0x15da1c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x15da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    ctx->pc = 0x15da20u;
}
