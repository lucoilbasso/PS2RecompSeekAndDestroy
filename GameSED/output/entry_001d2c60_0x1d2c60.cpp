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

// Function: entry_001d2c60
// Address: 0x1d2c60 - 0x1d2c64
void entry_001d2c60_0x1d2c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2c60_0x1d2c60");
#endif

    ctx->pc = 0x1d2c60u;

    // 0x1d2c60: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x1d2c60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d2c64u;
}
