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

// Function: entry_00114cfc
// Address: 0x114cfc - 0x114d00
void entry_00114cfc_0x114cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114cfc_0x114cfc");
#endif

    ctx->pc = 0x114cfcu;

    // 0x114cfc: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x114cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->pc = 0x114d00u;
}
