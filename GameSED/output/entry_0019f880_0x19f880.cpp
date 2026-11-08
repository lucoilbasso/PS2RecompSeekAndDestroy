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

// Function: entry_0019f880
// Address: 0x19f880 - 0x19f884
void entry_0019f880_0x19f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f880_0x19f880");
#endif

    ctx->pc = 0x19f880u;

    // 0x19f880: 0x244ad670  addiu       $t2, $v0, -0x2990
    ctx->pc = 0x19f880u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956656));
    ctx->pc = 0x19f884u;
}
