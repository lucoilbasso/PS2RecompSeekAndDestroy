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

// Function: entry_00103ed4
// Address: 0x103ed4 - 0x103ed8
void entry_00103ed4_0x103ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103ed4_0x103ed4");
#endif

    ctx->pc = 0x103ed4u;

    // 0x103ed4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x103ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x103ed8u;
}
