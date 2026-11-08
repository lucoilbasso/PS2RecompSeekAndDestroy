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

// Function: entry_00157cbc
// Address: 0x157cbc - 0x157cc8
void entry_00157cbc_0x157cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157cbc_0x157cbc");
#endif

    ctx->pc = 0x157cbcu;

    // 0x157cbc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x157cbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157cc0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x157cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x157cc4: 0x266503c0  addiu       $a1, $s3, 0x3C0
    ctx->pc = 0x157cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
    ctx->pc = 0x157cc8u;
}
