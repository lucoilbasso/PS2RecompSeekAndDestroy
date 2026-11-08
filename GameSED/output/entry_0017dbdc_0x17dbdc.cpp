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

// Function: entry_0017dbdc
// Address: 0x17dbdc - 0x17dbe0
void entry_0017dbdc_0x17dbdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dbdc_0x17dbdc");
#endif

    ctx->pc = 0x17dbdcu;

    // 0x17dbdc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x17dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x17dbe0u;
}
