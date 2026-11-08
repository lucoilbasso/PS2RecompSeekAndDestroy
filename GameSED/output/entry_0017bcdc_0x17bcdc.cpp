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

// Function: entry_0017bcdc
// Address: 0x17bcdc - 0x17bce0
void entry_0017bcdc_0x17bcdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bcdc_0x17bcdc");
#endif

    ctx->pc = 0x17bcdcu;

    // 0x17bcdc: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x17bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    ctx->pc = 0x17bce0u;
}
