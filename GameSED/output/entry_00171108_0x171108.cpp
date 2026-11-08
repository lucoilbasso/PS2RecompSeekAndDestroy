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

// Function: entry_00171108
// Address: 0x171108 - 0x171110
void entry_00171108_0x171108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171108_0x171108");
#endif

    ctx->pc = 0x171108u;

    // 0x171108: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x171108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x17110c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x17110cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x171110u;
}
