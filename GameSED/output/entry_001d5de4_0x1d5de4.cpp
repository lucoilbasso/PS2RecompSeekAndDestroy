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

// Function: entry_001d5de4
// Address: 0x1d5de4 - 0x1d5de8
void entry_001d5de4_0x1d5de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5de4_0x1d5de4");
#endif

    ctx->pc = 0x1d5de4u;

    // 0x1d5de4: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x1d5de4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
    ctx->pc = 0x1d5de8u;
}
