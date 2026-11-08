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

// Function: entry_001a2178
// Address: 0x1a2178 - 0x1a2180
void entry_001a2178_0x1a2178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2178_0x1a2178");
#endif

    ctx->pc = 0x1a2178u;

    // 0x1a2178: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x1a2178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1a217c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a217cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a2180u;
}
