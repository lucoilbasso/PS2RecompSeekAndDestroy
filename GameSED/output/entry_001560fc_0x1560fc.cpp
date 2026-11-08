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

// Function: entry_001560fc
// Address: 0x1560fc - 0x156100
void entry_001560fc_0x1560fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001560fc_0x1560fc");
#endif

    ctx->pc = 0x1560fcu;

    // 0x1560fc: 0x24061118  addiu       $a2, $zero, 0x1118
    ctx->pc = 0x1560fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    ctx->pc = 0x156100u;
}
