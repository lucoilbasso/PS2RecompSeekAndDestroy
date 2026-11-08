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

// Function: entry_00130c04
// Address: 0x130c04 - 0x130c08
void entry_00130c04_0x130c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130c04_0x130c04");
#endif

    ctx->pc = 0x130c04u;

    // 0x130c04: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x130c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    ctx->pc = 0x130c08u;
}
