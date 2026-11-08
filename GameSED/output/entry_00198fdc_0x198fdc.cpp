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

// Function: entry_00198fdc
// Address: 0x198fdc - 0x198fe0
void entry_00198fdc_0x198fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198fdc_0x198fdc");
#endif

    ctx->pc = 0x198fdcu;

    // 0x198fdc: 0x3c050600  lui         $a1, 0x600
    ctx->pc = 0x198fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1536 << 16));
    ctx->pc = 0x198fe0u;
}
