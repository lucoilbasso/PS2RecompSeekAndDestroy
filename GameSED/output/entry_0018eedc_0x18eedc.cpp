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

// Function: entry_0018eedc
// Address: 0x18eedc - 0x18eee0
void entry_0018eedc_0x18eedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eedc_0x18eedc");
#endif

    ctx->pc = 0x18eedcu;

    // 0x18eedc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x18eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x18eee0u;
}
