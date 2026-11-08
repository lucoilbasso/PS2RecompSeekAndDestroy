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

// Function: entry_0017a2b4
// Address: 0x17a2b4 - 0x17a2b8
void entry_0017a2b4_0x17a2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a2b4_0x17a2b4");
#endif

    ctx->pc = 0x17a2b4u;

    // 0x17a2b4: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x17a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    ctx->pc = 0x17a2b8u;
}
