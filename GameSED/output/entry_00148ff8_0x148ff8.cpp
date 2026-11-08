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

// Function: entry_00148ff8
// Address: 0x148ff8 - 0x148ffc
void entry_00148ff8_0x148ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148ff8_0x148ff8");
#endif

    ctx->pc = 0x148ff8u;

    // 0x148ff8: 0x248476f8  addiu       $a0, $a0, 0x76F8
    ctx->pc = 0x148ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30456));
    ctx->pc = 0x148ffcu;
}
