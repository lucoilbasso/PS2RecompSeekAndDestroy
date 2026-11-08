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

// Function: entry_001422a4
// Address: 0x1422a4 - 0x1422ac
void entry_001422a4_0x1422a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001422a4_0x1422a4");
#endif

    ctx->pc = 0x1422a4u;

    // 0x1422a4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1422a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1422a8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1422a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1422acu;
}
