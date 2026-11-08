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

// Function: entry_0019f428
// Address: 0x19f428 - 0x19f42c
void entry_0019f428_0x19f428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f428_0x19f428");
#endif

    ctx->pc = 0x19f428u;

    // 0x19f428: 0xad840010  sw          $a0, 0x10($t4)
    ctx->pc = 0x19f428u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 4));
    ctx->pc = 0x19f42cu;
}
