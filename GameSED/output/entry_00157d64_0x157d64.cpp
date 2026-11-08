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

// Function: entry_00157d64
// Address: 0x157d64 - 0x157d70
void entry_00157d64_0x157d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157d64_0x157d64");
#endif

    ctx->pc = 0x157d64u;

    // 0x157d64: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x157d64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157d68: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x157d68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x157d6c: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x157d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    ctx->pc = 0x157d70u;
}
