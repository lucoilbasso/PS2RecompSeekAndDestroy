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

// Function: entry_001927c8
// Address: 0x1927c8 - 0x1927cc
void entry_001927c8_0x1927c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001927c8_0x1927c8");
#endif

    ctx->pc = 0x1927c8u;

    // 0x1927c8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1927c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x1927ccu;
}
