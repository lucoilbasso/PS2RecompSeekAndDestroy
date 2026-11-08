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

// Function: entry_0014fd30
// Address: 0x14fd30 - 0x14fd3c
void entry_0014fd30_0x14fd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fd30_0x14fd30");
#endif

    ctx->pc = 0x14fd30u;

    // 0x14fd30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14fd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14fd34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14fd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14fd38: 0xae230184  sw          $v1, 0x184($s1)
    ctx->pc = 0x14fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
    ctx->pc = 0x14fd3cu;
}
