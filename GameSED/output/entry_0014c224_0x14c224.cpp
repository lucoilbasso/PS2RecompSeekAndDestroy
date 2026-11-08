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

// Function: entry_0014c224
// Address: 0x14c224 - 0x14c228
void entry_0014c224_0x14c224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c224_0x14c224");
#endif

    ctx->pc = 0x14c224u;

    // 0x14c224: 0xae240248  sw          $a0, 0x248($s1)
    ctx->pc = 0x14c224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 4));
    ctx->pc = 0x14c228u;
}
