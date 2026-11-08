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

// Function: entry_00191c9c
// Address: 0x191c9c - 0x191ca0
void entry_00191c9c_0x191c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191c9c_0x191c9c");
#endif

    ctx->pc = 0x191c9cu;

    // 0x191c9c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x191c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x191ca0u;
}
