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

// Function: entry_00149000
// Address: 0x149000 - 0x149004
void entry_00149000_0x149000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149000_0x149000");
#endif

    ctx->pc = 0x149000u;

    // 0x149000: 0xae030370  sw          $v1, 0x370($s0)
    ctx->pc = 0x149000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 3));
    ctx->pc = 0x149004u;
}
