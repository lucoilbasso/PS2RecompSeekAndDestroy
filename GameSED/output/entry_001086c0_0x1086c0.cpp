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

// Function: entry_001086c0
// Address: 0x1086c0 - 0x1086c4
void entry_001086c0_0x1086c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001086c0_0x1086c0");
#endif

    ctx->pc = 0x1086c0u;

    // 0x1086c0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1086c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1086c4u;
}
