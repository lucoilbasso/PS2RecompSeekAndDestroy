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

// Function: entry_00174bfc
// Address: 0x174bfc - 0x174c00
void entry_00174bfc_0x174bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174bfc_0x174bfc");
#endif

    ctx->pc = 0x174bfcu;

    // 0x174bfc: 0xaf8091a0  sw          $zero, -0x6E60($gp)
    ctx->pc = 0x174bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939040), GPR_U32(ctx, 0));
    ctx->pc = 0x174c00u;
}
