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

// Function: entry_0016af34
// Address: 0x16af34 - 0x16af38
void entry_0016af34_0x16af34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016af34_0x16af34");
#endif

    ctx->pc = 0x16af34u;

    // 0x16af34: 0x2485111c  addiu       $a1, $a0, 0x111C
    ctx->pc = 0x16af34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4380));
    ctx->pc = 0x16af38u;
}
