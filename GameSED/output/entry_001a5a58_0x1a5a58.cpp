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

// Function: entry_001a5a58
// Address: 0x1a5a58 - 0x1a5a64
void entry_001a5a58_0x1a5a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5a58_0x1a5a58");
#endif

    ctx->pc = 0x1a5a58u;

    // 0x1a5a58: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x1a5a58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x1a5a5c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a5a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a5a60: 0x8e10f4b0  lw          $s0, -0xB50($s0)
    ctx->pc = 0x1a5a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964400)));
    ctx->pc = 0x1a5a64u;
}
