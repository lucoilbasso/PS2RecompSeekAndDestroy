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

// Function: entry_00131490
// Address: 0x131490 - 0x131494
void entry_00131490_0x131490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131490_0x131490");
#endif

    ctx->pc = 0x131490u;

    // 0x131490: 0xaf808a10  sw          $zero, -0x75F0($gp)
    ctx->pc = 0x131490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U32(ctx, 0));
    ctx->pc = 0x131494u;
}
