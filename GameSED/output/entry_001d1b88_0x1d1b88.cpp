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

// Function: entry_001d1b88
// Address: 0x1d1b88 - 0x1d1b98
void entry_001d1b88_0x1d1b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1b88_0x1d1b88");
#endif

    ctx->pc = 0x1d1b88u;

    // 0x1d1b88: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x1d1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d1b8c: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x1d1b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x1d1b90: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d1b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d1b94: 0xafa30208  sw          $v1, 0x208($sp)
    ctx->pc = 0x1d1b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 3));
    ctx->pc = 0x1d1b98u;
}
