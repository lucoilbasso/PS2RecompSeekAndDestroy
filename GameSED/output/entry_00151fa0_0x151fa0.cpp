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

// Function: entry_00151fa0
// Address: 0x151fa0 - 0x151fac
void entry_00151fa0_0x151fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151fa0_0x151fa0");
#endif

    ctx->pc = 0x151fa0u;

    // 0x151fa0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x151fa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x151fa4: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x151fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x151fa8: 0x8e420184  lw          $v0, 0x184($s2)
    ctx->pc = 0x151fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    ctx->pc = 0x151facu;
}
