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

// Function: entry_00138cfc
// Address: 0x138cfc - 0x138d00
void entry_00138cfc_0x138cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138cfc_0x138cfc");
#endif

    ctx->pc = 0x138cfcu;

    // 0x138cfc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x138cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    ctx->pc = 0x138d00u;
}
