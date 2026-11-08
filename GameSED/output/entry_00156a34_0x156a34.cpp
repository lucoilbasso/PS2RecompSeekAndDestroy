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

// Function: entry_00156a34
// Address: 0x156a34 - 0x156a38
void entry_00156a34_0x156a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156a34_0x156a34");
#endif

    ctx->pc = 0x156a34u;

    // 0x156a34: 0x24426618  addiu       $v0, $v0, 0x6618
    ctx->pc = 0x156a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26136));
    ctx->pc = 0x156a38u;
}
