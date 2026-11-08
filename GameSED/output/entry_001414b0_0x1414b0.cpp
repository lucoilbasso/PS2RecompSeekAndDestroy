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

// Function: entry_001414b0
// Address: 0x1414b0 - 0x1414c0
void entry_001414b0_0x1414b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001414b0_0x1414b0");
#endif

    ctx->pc = 0x1414b0u;

    // 0x1414b0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1414b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1414b4: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x1414b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1414b8: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x1414b8u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1414bc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1414bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1414c0u;
}
