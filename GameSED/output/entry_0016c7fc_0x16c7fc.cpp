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

// Function: entry_0016c7fc
// Address: 0x16c7fc - 0x16c800
void entry_0016c7fc_0x16c7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c7fc_0x16c7fc");
#endif

    ctx->pc = 0x16c7fcu;

    // 0x16c7fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16c800u;
}
