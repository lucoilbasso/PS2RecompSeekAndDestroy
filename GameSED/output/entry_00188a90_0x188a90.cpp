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

// Function: entry_00188a90
// Address: 0x188a90 - 0x188a94
void entry_00188a90_0x188a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188a90_0x188a90");
#endif

    ctx->pc = 0x188a90u;

    // 0x188a90: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x188a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    ctx->pc = 0x188a94u;
}
