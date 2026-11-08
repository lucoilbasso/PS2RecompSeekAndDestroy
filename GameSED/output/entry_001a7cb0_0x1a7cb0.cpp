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

// Function: entry_001a7cb0
// Address: 0x1a7cb0 - 0x1a7cb4
void entry_001a7cb0_0x1a7cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7cb0_0x1a7cb0");
#endif

    ctx->pc = 0x1a7cb0u;

    // 0x1a7cb0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a7cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a7cb4u;
}
