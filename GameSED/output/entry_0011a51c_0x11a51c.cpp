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

// Function: entry_0011a51c
// Address: 0x11a51c - 0x11a524
void entry_0011a51c_0x11a51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a51c_0x11a51c");
#endif

    ctx->pc = 0x11a51cu;

    // 0x11a51c: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x11a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x11a520: 0xe31806  srlv        $v1, $v1, $a3
    ctx->pc = 0x11a520u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    ctx->pc = 0x11a524u;
}
