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

// Function: entry_0015c238
// Address: 0x15c238 - 0x15c240
void entry_0015c238_0x15c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c238_0x15c238");
#endif

    ctx->pc = 0x15c238u;

    // 0x15c238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c23c: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x15c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x15c240u;
}
