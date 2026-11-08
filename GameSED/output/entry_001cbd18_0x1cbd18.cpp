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

// Function: entry_001cbd18
// Address: 0x1cbd18 - 0x1cbd1c
void entry_001cbd18_0x1cbd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbd18_0x1cbd18");
#endif

    ctx->pc = 0x1cbd18u;

    // 0x1cbd18: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1cbd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x1cbd1cu;
}
