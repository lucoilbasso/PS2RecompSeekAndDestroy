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

// Function: entry_001c59e8
// Address: 0x1c59e8 - 0x1c59ec
void entry_001c59e8_0x1c59e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c59e8_0x1c59e8");
#endif

    ctx->pc = 0x1c59e8u;

    // 0x1c59e8: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1c59e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1c59ecu;
}
