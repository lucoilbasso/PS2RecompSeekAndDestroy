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

// Function: entry_00197dc4
// Address: 0x197dc4 - 0x197dcc
void entry_00197dc4_0x197dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197dc4_0x197dc4");
#endif

    ctx->pc = 0x197dc4u;

    // 0x197dc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x197dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197dc8: 0xae230130  sw          $v1, 0x130($s1)
    ctx->pc = 0x197dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x197dccu;
}
