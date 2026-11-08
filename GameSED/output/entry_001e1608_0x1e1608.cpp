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

// Function: entry_001e1608
// Address: 0x1e1608 - 0x1e160c
void entry_001e1608_0x1e1608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1608_0x1e1608");
#endif

    ctx->pc = 0x1e1608u;

    // 0x1e1608: 0xac8200d8  sw          $v0, 0xD8($a0)
    ctx->pc = 0x1e1608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
    ctx->pc = 0x1e160cu;
}
