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

// Function: entry_001961e8
// Address: 0x1961e8 - 0x1961ec
void entry_001961e8_0x1961e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001961e8_0x1961e8");
#endif

    ctx->pc = 0x1961e8u;

    // 0x1961e8: 0xae1101b0  sw          $s1, 0x1B0($s0)
    ctx->pc = 0x1961e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 17));
    ctx->pc = 0x1961ecu;
}
