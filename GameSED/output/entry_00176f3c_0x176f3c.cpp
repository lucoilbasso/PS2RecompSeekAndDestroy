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

// Function: entry_00176f3c
// Address: 0x176f3c - 0x176f58
void entry_00176f3c_0x176f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176f3c_0x176f3c");
#endif

    ctx->pc = 0x176f3cu;

    // 0x176f3c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x176f3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176f40: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x176f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x176f44: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x176F44u;
    {
        const bool branch_taken_0x176f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176f44) {
            ctx->pc = 0x176FA4u;
            return;
        }
    }
    ctx->pc = 0x176F4Cu;
    // 0x176f4c: 0x3c10ff7f  lui         $s0, 0xFF7F
    ctx->pc = 0x176f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65407 << 16));
    // 0x176f50: 0x3c120080  lui         $s2, 0x80
    ctx->pc = 0x176f50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)128 << 16));
    // 0x176f54: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x176f54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x176f58u;
}
