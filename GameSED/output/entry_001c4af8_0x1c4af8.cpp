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

// Function: entry_001c4af8
// Address: 0x1c4af8 - 0x1c4b18
void entry_001c4af8_0x1c4af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4af8_0x1c4af8");
#endif

    ctx->pc = 0x1c4af8u;

    // 0x1c4af8: 0x2610dc80  addiu       $s0, $s0, -0x2380
    ctx->pc = 0x1c4af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958208));
    // 0x1c4afc: 0x340381d0  ori         $v1, $zero, 0x81D0
    ctx->pc = 0x1c4afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33232);
    // 0x1c4b00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c4b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c4b04: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1c4b04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c4b08: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4B08u;
    {
        const bool branch_taken_0x1c4b08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B08u;
        // 0x1c4b0c: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b08) {
            ctx->pc = 0x1C4B18u;
            return;
        }
    }
    ctx->pc = 0x1C4B10u;
    // 0x1c4b10: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1c4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c4b14: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1c4b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1c4b18u;
}
