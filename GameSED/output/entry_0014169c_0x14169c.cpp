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

// Function: entry_0014169c
// Address: 0x14169c - 0x1416a0
void entry_0014169c_0x14169c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014169c_0x14169c");
#endif

    ctx->pc = 0x14169cu;

    // 0x14169c: 0xad260010  sw          $a2, 0x10($t1)
    ctx->pc = 0x14169cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 6));
    ctx->pc = 0x1416a0u;
}
