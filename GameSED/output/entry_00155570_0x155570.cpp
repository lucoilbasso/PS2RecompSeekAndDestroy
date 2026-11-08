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

// Function: entry_00155570
// Address: 0x155570 - 0x155574
void entry_00155570_0x155570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155570_0x155570");
#endif

    ctx->pc = 0x155570u;

    // 0x155570: 0xac8208a0  sw          $v0, 0x8A0($a0)
    ctx->pc = 0x155570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2208), GPR_U32(ctx, 2));
    ctx->pc = 0x155574u;
}
