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

// Function: entry_00127704
// Address: 0x127704 - 0x127708
void entry_00127704_0x127704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127704_0x127704");
#endif

    ctx->pc = 0x127704u;

    // 0x127704: 0x8f9089e0  lw          $s0, -0x7620($gp)
    ctx->pc = 0x127704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
    ctx->pc = 0x127708u;
}
