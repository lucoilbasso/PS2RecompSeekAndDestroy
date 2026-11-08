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

// Function: entry_00156ad8
// Address: 0x156ad8 - 0x156adc
void entry_00156ad8_0x156ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ad8_0x156ad8");
#endif

    ctx->pc = 0x156ad8u;

    // 0x156ad8: 0xaf82914c  sw          $v0, -0x6EB4($gp)
    ctx->pc = 0x156ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938956), GPR_U32(ctx, 2));
    ctx->pc = 0x156adcu;
}
