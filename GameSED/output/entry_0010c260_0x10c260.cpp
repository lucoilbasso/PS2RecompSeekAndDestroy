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

// Function: entry_0010c260
// Address: 0x10c260 - 0x10c264
void entry_0010c260_0x10c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c260_0x10c260");
#endif

    ctx->pc = 0x10c260u;

    // 0x10c260: 0x2443a430  addiu       $v1, $v0, -0x5BD0
    ctx->pc = 0x10c260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    ctx->pc = 0x10c264u;
}
