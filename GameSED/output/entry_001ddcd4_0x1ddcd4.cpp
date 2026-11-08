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

// Function: entry_001ddcd4
// Address: 0x1ddcd4 - 0x1ddcf8
void entry_001ddcd4_0x1ddcd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddcd4_0x1ddcd4");
#endif

    ctx->pc = 0x1ddcd4u;

    // 0x1ddcd4: 0x0  nop
    ctx->pc = 0x1ddcd4u;
    // NOP
    // 0x1ddcd8: 0x0  nop
    ctx->pc = 0x1ddcd8u;
    // NOP
    // 0x1ddcdc: 0x0  nop
    ctx->pc = 0x1ddcdcu;
    // NOP
    // 0x1ddce0: 0x0  nop
    ctx->pc = 0x1ddce0u;
    // NOP
    // 0x1ddce4: 0x1465fff8  bne         $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DDCE4u;
    {
        const bool branch_taken_0x1ddce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ddce4) {
            ctx->pc = 0x1DDCC8u;
            return;
        }
    }
    ctx->pc = 0x1DDCECu;
    // 0x1ddcec: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x1ddcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1ddcf0: 0xac820134  sw          $v0, 0x134($a0)
    ctx->pc = 0x1ddcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 2));
    // 0x1ddcf4: 0xac600134  sw          $zero, 0x134($v1)
    ctx->pc = 0x1ddcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
    ctx->pc = 0x1ddcf8u;
}
