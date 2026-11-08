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

// Function: entry_0014dd88
// Address: 0x14dd88 - 0x14dda0
void entry_0014dd88_0x14dd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dd88_0x14dd88");
#endif

    ctx->pc = 0x14dd88u;

    // 0x14dd88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dd8c: 0x3a040201  xori        $a0, $s0, 0x201
    ctx->pc = 0x14dd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)513);
    // 0x14dd90: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x14dd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x14dd94: 0xa4980a  movz        $s3, $a1, $a0
    ctx->pc = 0x14dd94u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
    // 0x14dd98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dd9c: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x14dd9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    ctx->pc = 0x14dda0u;
}
