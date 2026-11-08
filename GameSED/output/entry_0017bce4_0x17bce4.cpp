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

// Function: entry_0017bce4
// Address: 0x17bce4 - 0x17bce8
void entry_0017bce4_0x17bce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bce4_0x17bce4");
#endif

    ctx->pc = 0x17bce4u;

    // 0x17bce4: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x17bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    ctx->pc = 0x17bce8u;
}
