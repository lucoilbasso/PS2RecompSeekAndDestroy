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

// Function: entry_0017c398
// Address: 0x17c398 - 0x17c39c
void entry_0017c398_0x17c398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c398_0x17c398");
#endif

    ctx->pc = 0x17c398u;

    // 0x17c398: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x17c398u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x17c39cu;
}
