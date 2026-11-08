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

// Function: entry_00189df4
// Address: 0x189df4 - 0x189df8
void entry_00189df4_0x189df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189df4_0x189df4");
#endif

    ctx->pc = 0x189df4u;

    // 0x189df4: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x189df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
    ctx->pc = 0x189df8u;
}
