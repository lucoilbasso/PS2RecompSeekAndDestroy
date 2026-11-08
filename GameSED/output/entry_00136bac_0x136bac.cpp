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

// Function: entry_00136bac
// Address: 0x136bac - 0x136bb0
void entry_00136bac_0x136bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136bac_0x136bac");
#endif

    ctx->pc = 0x136bacu;

    // 0x136bac: 0x2452fcb0  addiu       $s2, $v0, -0x350
    ctx->pc = 0x136bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    ctx->pc = 0x136bb0u;
}
