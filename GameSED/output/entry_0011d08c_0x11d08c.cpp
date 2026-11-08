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

// Function: entry_0011d08c
// Address: 0x11d08c - 0x11d0a0
void entry_0011d08c_0x11d08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d08c_0x11d08c");
#endif

    ctx->pc = 0x11d08cu;

    // 0x11d08c: 0x24a34604  addiu       $v1, $a1, 0x4604
    ctx->pc = 0x11d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 17924));
    // 0x11d090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11d090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d098: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11d098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d09c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x11d0a0u;
}
