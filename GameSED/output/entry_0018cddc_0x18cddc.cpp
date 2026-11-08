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

// Function: entry_0018cddc
// Address: 0x18cddc - 0x18cde0
void entry_0018cddc_0x18cddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cddc_0x18cddc");
#endif

    ctx->pc = 0x18cddcu;

    // 0x18cddc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x18cddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->pc = 0x18cde0u;
}
