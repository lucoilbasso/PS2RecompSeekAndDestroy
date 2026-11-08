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

// Function: entry_00178c54
// Address: 0x178c54 - 0x178c58
void entry_00178c54_0x178c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178c54_0x178c54");
#endif

    ctx->pc = 0x178c54u;

    // 0x178c54: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x178c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    ctx->pc = 0x178c58u;
}
