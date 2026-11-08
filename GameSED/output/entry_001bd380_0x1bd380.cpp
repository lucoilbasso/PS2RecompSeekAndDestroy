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

// Function: entry_001bd380
// Address: 0x1bd380 - 0x1bd384
void entry_001bd380_0x1bd380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd380_0x1bd380");
#endif

    ctx->pc = 0x1bd380u;

    // 0x1bd380: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x1bd380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->pc = 0x1bd384u;
}
