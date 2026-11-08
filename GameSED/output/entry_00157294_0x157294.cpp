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

// Function: entry_00157294
// Address: 0x157294 - 0x157298
void entry_00157294_0x157294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157294_0x157294");
#endif

    ctx->pc = 0x157294u;

    // 0x157294: 0x24062118  addiu       $a2, $zero, 0x2118
    ctx->pc = 0x157294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    ctx->pc = 0x157298u;
}
