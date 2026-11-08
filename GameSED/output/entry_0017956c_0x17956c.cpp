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

// Function: entry_0017956c
// Address: 0x17956c - 0x179574
void entry_0017956c_0x17956c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017956c_0x17956c");
#endif

    ctx->pc = 0x17956cu;

    // 0x17956c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179570: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x179570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x179574u;
}
