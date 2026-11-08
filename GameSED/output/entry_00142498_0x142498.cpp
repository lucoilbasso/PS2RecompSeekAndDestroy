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

// Function: entry_00142498
// Address: 0x142498 - 0x14249c
void entry_00142498_0x142498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142498_0x142498");
#endif

    ctx->pc = 0x142498u;

    // 0x142498: 0xacb00190  sw          $s0, 0x190($a1)
    ctx->pc = 0x142498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 400), GPR_U32(ctx, 16));
    ctx->pc = 0x14249cu;
}
