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

// Function: entry_00184da0
// Address: 0x184da0 - 0x184db0
void entry_00184da0_0x184da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184da0_0x184da0");
#endif

    ctx->pc = 0x184da0u;

    // 0x184da0: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x184da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x184da4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x184da4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184da8: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x184da8u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x184dac: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x184dacu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x184db0u;
}
