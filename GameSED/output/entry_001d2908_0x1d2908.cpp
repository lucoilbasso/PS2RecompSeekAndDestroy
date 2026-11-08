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

// Function: entry_001d2908
// Address: 0x1d2908 - 0x1d290c
void entry_001d2908_0x1d2908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2908_0x1d2908");
#endif

    ctx->pc = 0x1d2908u;

    // 0x1d2908: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x1d2908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    ctx->pc = 0x1d290cu;
}
