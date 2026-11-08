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

// Function: entry_00134944
// Address: 0x134944 - 0x134948
void entry_00134944_0x134944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134944_0x134944");
#endif

    ctx->pc = 0x134944u;

    // 0x134944: 0xaf808d90  sw          $zero, -0x7270($gp)
    ctx->pc = 0x134944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 0));
    ctx->pc = 0x134948u;
}
