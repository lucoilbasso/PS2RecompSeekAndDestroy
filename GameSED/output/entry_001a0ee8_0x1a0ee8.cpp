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

// Function: entry_001a0ee8
// Address: 0x1a0ee8 - 0x1a0ef4
void entry_001a0ee8_0x1a0ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0ee8_0x1a0ee8");
#endif

    ctx->pc = 0x1a0ee8u;

    // 0x1a0ee8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a0eec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a0ef0: 0x8c422c08  lw          $v0, 0x2C08($v0)
    ctx->pc = 0x1a0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11272)));
    ctx->pc = 0x1a0ef4u;
}
