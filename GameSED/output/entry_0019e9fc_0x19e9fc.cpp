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

// Function: entry_0019e9fc
// Address: 0x19e9fc - 0x19ea00
void entry_0019e9fc_0x19e9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e9fc_0x19e9fc");
#endif

    ctx->pc = 0x19e9fcu;

    // 0x19e9fc: 0x24828000  addiu       $v0, $a0, -0x8000
    ctx->pc = 0x19e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    ctx->pc = 0x19ea00u;
}
