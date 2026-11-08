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

// Function: entry_0018a1fc
// Address: 0x18a1fc - 0x18a200
void entry_0018a1fc_0x18a1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a1fc_0x18a1fc");
#endif

    ctx->pc = 0x18a1fcu;

    // 0x18a1fc: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x18a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    ctx->pc = 0x18a200u;
}
