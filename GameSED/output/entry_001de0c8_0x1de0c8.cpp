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

// Function: entry_001de0c8
// Address: 0x1de0c8 - 0x1de0dc
void entry_001de0c8_0x1de0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de0c8_0x1de0c8");
#endif

    ctx->pc = 0x1de0c8u;

    // 0x1de0c8: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x1de0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x1de0cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1de0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1de0d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1de0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1de0d4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1de0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1de0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1de0dcu;
}
