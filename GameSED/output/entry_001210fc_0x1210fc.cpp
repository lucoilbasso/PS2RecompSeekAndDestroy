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

// Function: entry_001210fc
// Address: 0x1210fc - 0x121100
void entry_001210fc_0x1210fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001210fc_0x1210fc");
#endif

    ctx->pc = 0x1210fcu;

    // 0x1210fc: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1210fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x121100u;
}
