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

// Function: entry_00118cdc
// Address: 0x118cdc - 0x118ce0
void entry_00118cdc_0x118cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118cdc_0x118cdc");
#endif

    ctx->pc = 0x118cdcu;

    // 0x118cdc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x118cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x118ce0u;
}
