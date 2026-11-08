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

// Function: entry_001904f8
// Address: 0x1904f8 - 0x1904fc
void entry_001904f8_0x1904f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001904f8_0x1904f8");
#endif

    ctx->pc = 0x1904f8u;

    // 0x1904f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1904f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    ctx->pc = 0x1904fcu;
}
