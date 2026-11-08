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

// Function: entry_001dc458
// Address: 0x1dc458 - 0x1dc45c
void entry_001dc458_0x1dc458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc458_0x1dc458");
#endif

    ctx->pc = 0x1dc458u;

    // 0x1dc458: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1dc458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x1dc45cu;
}
