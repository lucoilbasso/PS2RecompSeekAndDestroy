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

// Function: entry_00118fb8
// Address: 0x118fb8 - 0x118fc4
void entry_00118fb8_0x118fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118fb8_0x118fb8");
#endif

    ctx->pc = 0x118fb8u;

    // 0x118fb8: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x118fb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x118fbc: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x118fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x118fc0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x118fc0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x118fc4u;
}
