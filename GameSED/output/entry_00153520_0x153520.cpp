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

// Function: entry_00153520
// Address: 0x153520 - 0x153524
void entry_00153520_0x153520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153520_0x153520");
#endif

    ctx->pc = 0x153520u;

    // 0x153520: 0x262506dc  addiu       $a1, $s1, 0x6DC
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->pc = 0x153524u;
}
