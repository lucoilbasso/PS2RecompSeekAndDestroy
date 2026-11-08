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

// Function: entry_0013d59c
// Address: 0x13d59c - 0x13d5a0
void entry_0013d59c_0x13d59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d59c_0x13d59c");
#endif

    ctx->pc = 0x13d59cu;

    // 0x13d59c: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x13d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    ctx->pc = 0x13d5a0u;
}
