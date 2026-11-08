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

// Function: entry_0019fbb0
// Address: 0x19fbb0 - 0x19fbd8
void entry_0019fbb0_0x19fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fbb0_0x19fbb0");
#endif

    ctx->pc = 0x19fbb0u;

    // 0x19fbb0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19fbb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19fbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19fbb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19fbbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19fbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19fbc0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19FBC0u;
    {
        const bool branch_taken_0x19fbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fbc0) {
            ctx->pc = 0x19FC08u;
            return;
        }
    }
    ctx->pc = 0x19FBC8u;
    // 0x19fbc8: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x19fbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x19fbcc: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x19fbccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x19fbd0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x19fbd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x19fbd4: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x19fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    ctx->pc = 0x19fbd8u;
}
