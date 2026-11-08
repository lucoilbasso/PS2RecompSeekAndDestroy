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

// Function: entry_0012dc8c
// Address: 0x12dc8c - 0x12dc98
void entry_0012dc8c_0x12dc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dc8c_0x12dc8c");
#endif

    ctx->pc = 0x12dc8cu;

    // 0x12dc8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12dc90: 0x38820013  xori        $v0, $a0, 0x13
    ctx->pc = 0x12dc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)19);
    // 0x12dc94: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x12dc94u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    ctx->pc = 0x12dc98u;
}
