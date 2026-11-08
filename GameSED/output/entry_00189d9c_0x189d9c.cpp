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

// Function: entry_00189d9c
// Address: 0x189d9c - 0x189da0
void entry_00189d9c_0x189d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189d9c_0x189d9c");
#endif

    ctx->pc = 0x189d9cu;

    // 0x189d9c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x189d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x189da0u;
}
