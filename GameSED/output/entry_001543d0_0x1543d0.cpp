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

// Function: entry_001543d0
// Address: 0x1543d0 - 0x1543dc
void entry_001543d0_0x1543d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001543d0_0x1543d0");
#endif

    ctx->pc = 0x1543d0u;

    // 0x1543d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1543d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1543d4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1543d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543d8: 0xe2800a  movz        $s0, $a3, $v0
    ctx->pc = 0x1543d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    ctx->pc = 0x1543dcu;
}
