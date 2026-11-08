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

// Function: entry_0017a118
// Address: 0x17a118 - 0x17a11c
void entry_0017a118_0x17a118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a118_0x17a118");
#endif

    ctx->pc = 0x17a118u;

    // 0x17a118: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    ctx->pc = 0x17a11cu;
}
