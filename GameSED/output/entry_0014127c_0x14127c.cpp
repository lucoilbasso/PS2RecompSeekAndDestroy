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

// Function: entry_0014127c
// Address: 0x14127c - 0x141280
void entry_0014127c_0x14127c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014127c_0x14127c");
#endif

    ctx->pc = 0x14127cu;

    // 0x14127c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x14127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    ctx->pc = 0x141280u;
}
