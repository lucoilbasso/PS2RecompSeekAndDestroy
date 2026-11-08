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

// Function: entry_0012f0fc
// Address: 0x12f0fc - 0x12f100
void entry_0012f0fc_0x12f0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f0fc_0x12f0fc");
#endif

    ctx->pc = 0x12f0fcu;

    // 0x12f0fc: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x12f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    ctx->pc = 0x12f100u;
}
