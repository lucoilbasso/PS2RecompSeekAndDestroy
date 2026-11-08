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

// Function: entry_001b0388
// Address: 0x1b0388 - 0x1b038c
void entry_001b0388_0x1b0388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0388_0x1b0388");
#endif

    ctx->pc = 0x1b0388u;

    // 0x1b0388: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b0388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1b038cu;
}
