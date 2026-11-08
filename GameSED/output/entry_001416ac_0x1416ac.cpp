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

// Function: entry_001416ac
// Address: 0x1416ac - 0x1416b0
void entry_001416ac_0x1416ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001416ac_0x1416ac");
#endif

    ctx->pc = 0x1416acu;

    // 0x1416ac: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1416acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    ctx->pc = 0x1416b0u;
}
