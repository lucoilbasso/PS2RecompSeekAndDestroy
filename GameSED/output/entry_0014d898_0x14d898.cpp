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

// Function: entry_0014d898
// Address: 0x14d898 - 0x14d89c
void entry_0014d898_0x14d898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d898_0x14d898");
#endif

    ctx->pc = 0x14d898u;

    // 0x14d898: 0xae300260  sw          $s0, 0x260($s1)
    ctx->pc = 0x14d898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 16));
    ctx->pc = 0x14d89cu;
}
