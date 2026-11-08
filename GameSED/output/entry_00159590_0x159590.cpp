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

// Function: entry_00159590
// Address: 0x159590 - 0x159594
void entry_00159590_0x159590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159590_0x159590");
#endif

    ctx->pc = 0x159590u;

    // 0x159590: 0x26a403e0  addiu       $a0, $s5, 0x3E0
    ctx->pc = 0x159590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 992));
    ctx->pc = 0x159594u;
}
