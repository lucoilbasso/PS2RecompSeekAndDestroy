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

// Function: entry_0016c1a8
// Address: 0x16c1a8 - 0x16c1d0
void entry_0016c1a8_0x16c1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c1a8_0x16c1a8");
#endif

    ctx->pc = 0x16c1a8u;

    // 0x16c1a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c1ac: 0x262301f0  addiu       $v1, $s1, 0x1F0
    ctx->pc = 0x16c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x16c1b0: 0xae2401e0  sw          $a0, 0x1E0($s1)
    ctx->pc = 0x16c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 4));
    // 0x16c1b4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x16c1b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16c1b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16c1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16c1bc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x16c1c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1c4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16c1c8: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x16C1C8u;
    {
        const bool branch_taken_0x16c1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1C8u;
        // 0x16c1cc: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1c8) {
            ctx->pc = 0x16C434u;
            return;
        }
    }
    ctx->pc = 0x16C1D0u;
}
