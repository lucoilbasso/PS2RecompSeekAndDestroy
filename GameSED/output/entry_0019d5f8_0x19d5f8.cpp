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

// Function: entry_0019d5f8
// Address: 0x19d5f8 - 0x19d604
void entry_0019d5f8_0x19d5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d5f8_0x19d5f8");
#endif

    ctx->pc = 0x19d5f8u;

    // 0x19d5f8: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x19d5f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x19d5fc: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x19d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x19d600: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x19d600u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    ctx->pc = 0x19d604u;
}
