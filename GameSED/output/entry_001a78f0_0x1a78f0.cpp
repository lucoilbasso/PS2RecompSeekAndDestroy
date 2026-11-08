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

// Function: entry_001a78f0
// Address: 0x1a78f0 - 0x1a78f4
void entry_001a78f0_0x1a78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a78f0_0x1a78f0");
#endif

    ctx->pc = 0x1a78f0u;

    // 0x1a78f0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1a78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1a78f4u;
}
