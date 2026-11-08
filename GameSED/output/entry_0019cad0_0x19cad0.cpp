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

// Function: entry_0019cad0
// Address: 0x19cad0 - 0x19cad4
void entry_0019cad0_0x19cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cad0_0x19cad0");
#endif

    ctx->pc = 0x19cad0u;

    // 0x19cad0: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x19cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    ctx->pc = 0x19cad4u;
}
