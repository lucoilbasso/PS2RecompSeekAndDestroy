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

// Function: entry_0017fa30
// Address: 0x17fa30 - 0x17fa34
void entry_0017fa30_0x17fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fa30_0x17fa30");
#endif

    ctx->pc = 0x17fa30u;

    // 0x17fa30: 0x4a380a  movz        $a3, $v0, $t2
    ctx->pc = 0x17fa30u;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    ctx->pc = 0x17fa34u;
}
