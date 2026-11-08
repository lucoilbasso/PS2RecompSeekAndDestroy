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

// Function: entry_001135b4
// Address: 0x1135b4 - 0x1135bc
void entry_001135b4_0x1135b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001135b4_0x1135b4");
#endif

    ctx->pc = 0x1135b4u;

    // 0x1135b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1135b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1135b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1135b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x1135bcu;
}
