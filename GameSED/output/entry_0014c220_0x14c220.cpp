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

// Function: entry_0014c220
// Address: 0x14c220 - 0x14c224
void entry_0014c220_0x14c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c220_0x14c220");
#endif

    ctx->pc = 0x14c220u;

    // 0x14c220: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x14c220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
    ctx->pc = 0x14c224u;
}
