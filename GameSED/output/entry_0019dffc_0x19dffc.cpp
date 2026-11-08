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

// Function: entry_0019dffc
// Address: 0x19dffc - 0x19e000
void entry_0019dffc_0x19dffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dffc_0x19dffc");
#endif

    ctx->pc = 0x19dffcu;

    // 0x19dffc: 0x70c210c8  pmaxw       $v0, $a2, $v0
    ctx->pc = 0x19dffcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    ctx->pc = 0x19e000u;
}
