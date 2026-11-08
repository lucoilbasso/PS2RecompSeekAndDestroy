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

// Function: entry_0017c69c
// Address: 0x17c69c - 0x17c6a4
void entry_0017c69c_0x17c69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c69c_0x17c69c");
#endif

    ctx->pc = 0x17c69cu;

    // 0x17c69c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17c69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17c6a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17c6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x17c6a4u;
}
