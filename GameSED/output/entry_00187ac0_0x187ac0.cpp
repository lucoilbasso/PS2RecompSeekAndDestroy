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

// Function: entry_00187ac0
// Address: 0x187ac0 - 0x187ac4
void entry_00187ac0_0x187ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187ac0_0x187ac0");
#endif

    ctx->pc = 0x187ac0u;

    // 0x187ac0: 0xaf808d68  sw          $zero, -0x7298($gp)
    ctx->pc = 0x187ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), GPR_U32(ctx, 0));
    ctx->pc = 0x187ac4u;
}
