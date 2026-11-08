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

// Function: entry_00142854
// Address: 0x142854 - 0x142860
void entry_00142854_0x142854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142854_0x142854");
#endif

    ctx->pc = 0x142854u;

    // 0x142854: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x142854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142858: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x142858u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14285c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x14285cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x142860u;
}
