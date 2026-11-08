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

// Function: entry_00184974
// Address: 0x184974 - 0x184978
void entry_00184974_0x184974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184974_0x184974");
#endif

    ctx->pc = 0x184974u;

    // 0x184974: 0x2404e000  addiu       $a0, $zero, -0x2000
    ctx->pc = 0x184974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
    ctx->pc = 0x184978u;
}
