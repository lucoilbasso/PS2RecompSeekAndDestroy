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

// Function: entry_001a99fc
// Address: 0x1a99fc - 0x1a9a00
void entry_001a99fc_0x1a99fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a99fc_0x1a99fc");
#endif

    ctx->pc = 0x1a99fcu;

    // 0x1a99fc: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x1a99fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x1a9a00u;
}
