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

// Function: entry_0010a630
// Address: 0x10a630 - 0x10a634
void entry_0010a630_0x10a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a630_0x10a630");
#endif

    ctx->pc = 0x10a630u;

    // 0x10a630: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x10a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    ctx->pc = 0x10a634u;
}
