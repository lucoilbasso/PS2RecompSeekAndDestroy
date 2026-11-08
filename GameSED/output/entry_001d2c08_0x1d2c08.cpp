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

// Function: entry_001d2c08
// Address: 0x1d2c08 - 0x1d2c0c
void entry_001d2c08_0x1d2c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2c08_0x1d2c08");
#endif

    ctx->pc = 0x1d2c08u;

    // 0x1d2c08: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1d2c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    ctx->pc = 0x1d2c0cu;
}
