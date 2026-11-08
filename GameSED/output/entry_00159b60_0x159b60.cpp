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

// Function: entry_00159b60
// Address: 0x159b60 - 0x159b68
void entry_00159b60_0x159b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159b60_0x159b60");
#endif

    ctx->pc = 0x159b60u;

    // 0x159b60: 0x24e303d0  addiu       $v1, $a3, 0x3D0
    ctx->pc = 0x159b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
    // 0x159b64: 0x24e203b0  addiu       $v0, $a3, 0x3B0
    ctx->pc = 0x159b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 944));
    ctx->pc = 0x159b68u;
}
