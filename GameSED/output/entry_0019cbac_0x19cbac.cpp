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

// Function: entry_0019cbac
// Address: 0x19cbac - 0x19cbb0
void entry_0019cbac_0x19cbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cbac_0x19cbac");
#endif

    ctx->pc = 0x19cbacu;

    // 0x19cbac: 0xa2040019  sb          $a0, 0x19($s0)
    ctx->pc = 0x19cbacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x19cbb0u;
}
