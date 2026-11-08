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

// Function: entry_0015bdc8
// Address: 0x15bdc8 - 0x15bdd0
void entry_0015bdc8_0x15bdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bdc8_0x15bdc8");
#endif

    ctx->pc = 0x15bdc8u;

    // 0x15bdc8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x15bdcc: 0x2443a4e8  addiu       $v1, $v0, -0x5B18
    ctx->pc = 0x15bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943976));
    ctx->pc = 0x15bdd0u;
}
