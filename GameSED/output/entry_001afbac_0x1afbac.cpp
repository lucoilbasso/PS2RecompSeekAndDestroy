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

// Function: entry_001afbac
// Address: 0x1afbac - 0x1afbb0
void entry_001afbac_0x1afbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afbac_0x1afbac");
#endif

    ctx->pc = 0x1afbacu;

    // 0x1afbac: 0x8e42a96c  lw          $v0, -0x5694($s2)
    ctx->pc = 0x1afbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945132)));
    ctx->pc = 0x1afbb0u;
}
