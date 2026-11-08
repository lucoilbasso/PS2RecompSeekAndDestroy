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

// Function: entry_00104490
// Address: 0x104490 - 0x104494
void entry_00104490_0x104490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104490_0x104490");
#endif

    ctx->pc = 0x104490u;

    // 0x104490: 0xaf929114  sw          $s2, -0x6EEC($gp)
    ctx->pc = 0x104490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938900), GPR_U32(ctx, 18));
    ctx->pc = 0x104494u;
}
