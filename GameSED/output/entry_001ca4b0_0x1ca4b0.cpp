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

// Function: entry_001ca4b0
// Address: 0x1ca4b0 - 0x1ca4b4
void entry_001ca4b0_0x1ca4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca4b0_0x1ca4b0");
#endif

    ctx->pc = 0x1ca4b0u;

    // 0x1ca4b0: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x1ca4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    ctx->pc = 0x1ca4b4u;
}
