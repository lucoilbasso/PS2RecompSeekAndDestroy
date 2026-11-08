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

// Function: entry_00186710
// Address: 0x186710 - 0x186714
void entry_00186710_0x186710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186710_0x186710");
#endif

    ctx->pc = 0x186710u;

    // 0x186710: 0xaf808d5c  sw          $zero, -0x72A4($gp)
    ctx->pc = 0x186710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937948), GPR_U32(ctx, 0));
    ctx->pc = 0x186714u;
}
