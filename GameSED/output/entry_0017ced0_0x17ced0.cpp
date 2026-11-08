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

// Function: entry_0017ced0
// Address: 0x17ced0 - 0x17ced4
void entry_0017ced0_0x17ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ced0_0x17ced0");
#endif

    ctx->pc = 0x17ced0u;

    // 0x17ced0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x17ced4u;
}
