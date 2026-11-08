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

// Function: entry_00139af8
// Address: 0x139af8 - 0x139afc
void entry_00139af8_0x139af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139af8_0x139af8");
#endif

    ctx->pc = 0x139af8u;

    // 0x139af8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x139af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x139afcu;
}
