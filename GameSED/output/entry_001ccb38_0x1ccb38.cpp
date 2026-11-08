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

// Function: entry_001ccb38
// Address: 0x1ccb38 - 0x1ccb40
void entry_001ccb38_0x1ccb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccb38_0x1ccb38");
#endif

    ctx->pc = 0x1ccb38u;

    // 0x1ccb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccb3c: 0xdc850020  ld          $a1, 0x20($a0)
    ctx->pc = 0x1ccb3cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    ctx->pc = 0x1ccb40u;
}
