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

// Function: entry_001d1680
// Address: 0x1d1680 - 0x1d1688
void entry_001d1680_0x1d1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1680_0x1d1680");
#endif

    ctx->pc = 0x1d1680u;

    // 0x1d1680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1684: 0x54a00a  movz        $s4, $v0, $s4
    ctx->pc = 0x1d1684u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    ctx->pc = 0x1d1688u;
}
