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

// Function: entry_00131ed4
// Address: 0x131ed4 - 0x131ed8
void entry_00131ed4_0x131ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131ed4_0x131ed4");
#endif

    ctx->pc = 0x131ed4u;

    // 0x131ed4: 0xa4c00118  sh          $zero, 0x118($a2)
    ctx->pc = 0x131ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x131ed8u;
}
