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

// Function: entry_001202c0
// Address: 0x1202c0 - 0x1202d8
void entry_001202c0_0x1202c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001202c0_0x1202c0");
#endif

    ctx->pc = 0x1202c0u;

    // 0x1202c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1202c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1202c4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1202c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1202c8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1202c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1202cc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1202ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1202d0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1202d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1202d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1202d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1202d8u;
}
