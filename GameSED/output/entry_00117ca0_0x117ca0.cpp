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

// Function: entry_00117ca0
// Address: 0x117ca0 - 0x117cac
void entry_00117ca0_0x117ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117ca0_0x117ca0");
#endif

    ctx->pc = 0x117ca0u;

    // 0x117ca0: 0x81630000  lb          $v1, 0x0($t3)
    ctx->pc = 0x117ca0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x117ca4: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x117ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x117ca8: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x117ca8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x117cacu;
}
