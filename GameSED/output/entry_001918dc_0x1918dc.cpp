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

// Function: entry_001918dc
// Address: 0x1918dc - 0x1918e0
void entry_001918dc_0x1918dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001918dc_0x1918dc");
#endif

    ctx->pc = 0x1918dcu;

    // 0x1918dc: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x1918dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    ctx->pc = 0x1918e0u;
}
