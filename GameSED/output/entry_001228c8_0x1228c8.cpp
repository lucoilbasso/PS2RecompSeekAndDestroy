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

// Function: entry_001228c8
// Address: 0x1228c8 - 0x1228d0
void entry_001228c8_0x1228c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001228c8_0x1228c8");
#endif

    ctx->pc = 0x1228c8u;

    // 0x1228c8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1228c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1228cc: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x1228ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    ctx->pc = 0x1228d0u;
}
