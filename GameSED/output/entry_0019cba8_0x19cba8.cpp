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

// Function: entry_0019cba8
// Address: 0x19cba8 - 0x19cbac
void entry_0019cba8_0x19cba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cba8_0x19cba8");
#endif

    ctx->pc = 0x19cba8u;

    // 0x19cba8: 0xa200001a  sb          $zero, 0x1A($s0)
    ctx->pc = 0x19cba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19cbacu;
}
