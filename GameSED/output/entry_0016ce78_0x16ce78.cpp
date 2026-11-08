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

// Function: entry_0016ce78
// Address: 0x16ce78 - 0x16ce84
void entry_0016ce78_0x16ce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ce78_0x16ce78");
#endif

    ctx->pc = 0x16ce78u;

    // 0x16ce78: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x16ce78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16ce7c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16ce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16ce80: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16ce80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x16ce84u;
}
