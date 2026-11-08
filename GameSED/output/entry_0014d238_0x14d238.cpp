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

// Function: entry_0014d238
// Address: 0x14d238 - 0x14d23c
void entry_0014d238_0x14d238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d238_0x14d238");
#endif

    ctx->pc = 0x14d238u;

    // 0x14d238: 0xae030180  sw          $v1, 0x180($s0)
    ctx->pc = 0x14d238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 3));
    ctx->pc = 0x14d23cu;
}
