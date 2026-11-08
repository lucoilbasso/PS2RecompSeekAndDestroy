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

// Function: entry_001cf39c
// Address: 0x1cf39c - 0x1cf3a0
void entry_001cf39c_0x1cf39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf39c_0x1cf39c");
#endif

    ctx->pc = 0x1cf39cu;

    // 0x1cf39c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cf39cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1cf3a0u;
}
