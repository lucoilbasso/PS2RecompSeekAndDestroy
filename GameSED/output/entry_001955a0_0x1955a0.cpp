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

// Function: entry_001955a0
// Address: 0x1955a0 - 0x1955ac
void entry_001955a0_0x1955a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001955a0_0x1955a0");
#endif

    ctx->pc = 0x1955a0u;

    // 0x1955a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1955a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1955a4: 0x8c8201ac  lw          $v0, 0x1AC($a0)
    ctx->pc = 0x1955a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x1955a8: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->pc = 0x1955acu;
}
