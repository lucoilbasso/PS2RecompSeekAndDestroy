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

// Function: entry_001add08
// Address: 0x1add08 - 0x1add10
void entry_001add08_0x1add08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001add08_0x1add08");
#endif

    ctx->pc = 0x1add08u;

    // 0x1add08: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1add08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1add0c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1add0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->pc = 0x1add10u;
}
