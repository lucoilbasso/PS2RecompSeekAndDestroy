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

// Function: entry_0017b0e0
// Address: 0x17b0e0 - 0x17b0e8
void entry_0017b0e0_0x17b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b0e0_0x17b0e0");
#endif

    ctx->pc = 0x17b0e0u;

    // 0x17b0e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17b0e4: 0xac52003c  sw          $s2, 0x3C($v0)
    ctx->pc = 0x17b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 18));
    ctx->pc = 0x17b0e8u;
}
