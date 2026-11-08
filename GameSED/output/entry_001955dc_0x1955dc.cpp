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

// Function: entry_001955dc
// Address: 0x1955dc - 0x1955e0
void entry_001955dc_0x1955dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001955dc_0x1955dc");
#endif

    ctx->pc = 0x1955dcu;

    // 0x1955dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1955dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1955e0u;
}
