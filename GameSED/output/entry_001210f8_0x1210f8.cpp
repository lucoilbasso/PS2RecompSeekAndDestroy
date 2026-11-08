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

// Function: entry_001210f8
// Address: 0x1210f8 - 0x1210fc
void entry_001210f8_0x1210f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001210f8_0x1210f8");
#endif

    ctx->pc = 0x1210f8u;

    // 0x1210f8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1210f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x1210fcu;
}
