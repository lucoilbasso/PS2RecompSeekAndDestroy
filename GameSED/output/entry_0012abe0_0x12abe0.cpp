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

// Function: entry_0012abe0
// Address: 0x12abe0 - 0x12abf8
void entry_0012abe0_0x12abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012abe0_0x12abe0");
#endif

    ctx->pc = 0x12abe0u;

    // 0x12abe0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12abe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12abe4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12abe4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x12abe8: 0x24e40240  addiu       $a0, $a3, 0x240
    ctx->pc = 0x12abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 576));
    // 0x12abec: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x12abecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12abf0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12abf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12abf4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12abf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    ctx->pc = 0x12abf8u;
}
