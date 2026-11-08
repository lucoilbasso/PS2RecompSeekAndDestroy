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

// Function: entry_0017936c
// Address: 0x17936c - 0x179370
void entry_0017936c_0x17936c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017936c_0x17936c");
#endif

    ctx->pc = 0x17936cu;

    // 0x17936c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    ctx->pc = 0x179370u;
}
