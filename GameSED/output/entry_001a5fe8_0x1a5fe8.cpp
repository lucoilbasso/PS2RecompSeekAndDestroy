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

// Function: entry_001a5fe8
// Address: 0x1a5fe8 - 0x1a5ff4
void entry_001a5fe8_0x1a5fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5fe8_0x1a5fe8");
#endif

    ctx->pc = 0x1a5fe8u;

    // 0x1a5fe8: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a5fec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5ff0: 0x8c63f4b0  lw          $v1, -0xB50($v1)
    ctx->pc = 0x1a5ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964400)));
    ctx->pc = 0x1a5ff4u;
}
