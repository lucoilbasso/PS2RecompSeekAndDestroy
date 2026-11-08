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

// Function: entry_00116a50
// Address: 0x116a50 - 0x116a54
void entry_00116a50_0x116a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a50_0x116a50");
#endif

    ctx->pc = 0x116a50u;

    // 0x116a50: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x116a50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x116a54u;
}
