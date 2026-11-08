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

// Function: entry_001a1ac0
// Address: 0x1a1ac0 - 0x1a1ac4
void entry_001a1ac0_0x1a1ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ac0_0x1a1ac0");
#endif

    ctx->pc = 0x1a1ac0u;

    // 0x1a1ac0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1a1ac4u;
}
