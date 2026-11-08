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

// Function: entry_00152560
// Address: 0x152560 - 0x152574
void entry_00152560_0x152560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152560_0x152560");
#endif

    ctx->pc = 0x152560u;

    // 0x152560: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x152560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x152564: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x152564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152568: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x152568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15256c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x15256cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x152570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x152574u;
}
