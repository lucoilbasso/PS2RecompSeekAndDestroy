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

// Function: entry_001929fc
// Address: 0x1929fc - 0x192a00
void entry_001929fc_0x1929fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001929fc_0x1929fc");
#endif

    ctx->pc = 0x1929fcu;

    // 0x1929fc: 0x248201d0  addiu       $v0, $a0, 0x1D0
    ctx->pc = 0x1929fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    ctx->pc = 0x192a00u;
}
