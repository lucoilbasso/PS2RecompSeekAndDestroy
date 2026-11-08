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

// Function: entry_001240c8
// Address: 0x1240c8 - 0x1240cc
void entry_001240c8_0x1240c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001240c8_0x1240c8");
#endif

    ctx->pc = 0x1240c8u;

    // 0x1240c8: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x1240c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    ctx->pc = 0x1240ccu;
}
