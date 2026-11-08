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

// Function: entry_001b6560
// Address: 0x1b6560 - 0x1b6568
void entry_001b6560_0x1b6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6560_0x1b6560");
#endif

    ctx->pc = 0x1b6560u;

    // 0x1b6560: 0x8ea2b400  lw          $v0, -0x4C00($s5)
    ctx->pc = 0x1b6560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947840)));
    // 0x1b6564: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1b6564u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1b6568u;
}
