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

// Function: entry_0018f0b4
// Address: 0x18f0b4 - 0x18f0d0
void entry_0018f0b4_0x18f0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f0b4_0x18f0b4");
#endif

    ctx->pc = 0x18f0b4u;

    // 0x18f0b4: 0x304300f0  andi        $v1, $v0, 0xF0
    ctx->pc = 0x18f0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x18f0b8: 0x0  nop
    ctx->pc = 0x18f0b8u;
    // NOP
    // 0x18f0bc: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18F0BCu;
    {
        const bool branch_taken_0x18f0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0BCu;
        // 0x18f0c0: 0x31903  sra         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0bc) {
            ctx->pc = 0x18F0A0u;
            return;
        }
    }
    ctx->pc = 0x18F0C4u;
    // 0x18f0c4: 0x3042ff0f  andi        $v0, $v0, 0xFF0F
    ctx->pc = 0x18f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65295);
    // 0x18f0c8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x18f0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f0cc: 0xae03024c  sw          $v1, 0x24C($s0)
    ctx->pc = 0x18f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 3));
    ctx->pc = 0x18f0d0u;
}
