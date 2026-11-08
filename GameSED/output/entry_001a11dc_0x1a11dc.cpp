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

// Function: entry_001a11dc
// Address: 0x1a11dc - 0x1a11e0
void entry_001a11dc_0x1a11dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a11dc_0x1a11dc");
#endif

    ctx->pc = 0x1a11dcu;

    // 0x1a11dc: 0x2450e530  addiu       $s0, $v0, -0x1AD0
    ctx->pc = 0x1a11dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    ctx->pc = 0x1a11e0u;
}
