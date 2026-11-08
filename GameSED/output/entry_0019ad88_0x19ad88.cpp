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

// Function: entry_0019ad88
// Address: 0x19ad88 - 0x19ad8c
void entry_0019ad88_0x19ad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ad88_0x19ad88");
#endif

    ctx->pc = 0x19ad88u;

    // 0x19ad88: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19ad88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x19ad8cu;
}
