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

// Function: entry_0019f348
// Address: 0x19f348 - 0x19f34c
void entry_0019f348_0x19f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f348_0x19f348");
#endif

    ctx->pc = 0x19f348u;

    // 0x19f348: 0xad84000c  sw          $a0, 0xC($t4)
    ctx->pc = 0x19f348u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
    ctx->pc = 0x19f34cu;
}
