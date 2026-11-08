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

// Function: entry_0015a0fc
// Address: 0x15a0fc - 0x15a100
void entry_0015a0fc_0x15a0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a0fc_0x15a0fc");
#endif

    ctx->pc = 0x15a0fcu;

    // 0x15a0fc: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x15a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    ctx->pc = 0x15a100u;
}
