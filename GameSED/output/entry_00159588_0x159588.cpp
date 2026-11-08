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

// Function: entry_00159588
// Address: 0x159588 - 0x15958c
void entry_00159588_0x159588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159588_0x159588");
#endif

    ctx->pc = 0x159588u;

    // 0x159588: 0x26a303d0  addiu       $v1, $s5, 0x3D0
    ctx->pc = 0x159588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 976));
    ctx->pc = 0x15958cu;
}
