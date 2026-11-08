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

// Function: entry_00138db8
// Address: 0x138db8 - 0x138dbc
void entry_00138db8_0x138db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138db8_0x138db8");
#endif

    ctx->pc = 0x138db8u;

    // 0x138db8: 0x2443a430  addiu       $v1, $v0, -0x5BD0
    ctx->pc = 0x138db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    ctx->pc = 0x138dbcu;
}
