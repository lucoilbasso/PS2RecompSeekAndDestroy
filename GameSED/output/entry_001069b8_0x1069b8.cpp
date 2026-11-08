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

// Function: entry_001069b8
// Address: 0x1069b8 - 0x1069dc
void entry_001069b8_0x1069b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001069b8_0x1069b8");
#endif

    ctx->pc = 0x1069b8u;

    // 0x1069b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1069b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1069bc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1069BCu;
    {
        const bool branch_taken_0x1069bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1069bc) {
            ctx->pc = 0x1069C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1069BCu;
            // 0x1069c0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1069E8u;
            return;
        }
    }
    ctx->pc = 0x1069C4u;
    // 0x1069c4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1069C4u;
    {
        const bool branch_taken_0x1069c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1069c4) {
            ctx->pc = 0x1069DCu;
            return;
        }
    }
    ctx->pc = 0x1069CCu;
    // 0x1069cc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1069ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1069d0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1069d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1069d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1069D4u;
    {
        const bool branch_taken_0x1069d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1069d4) {
            ctx->pc = 0x1069D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1069D4u;
            // 0x1069d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1069E8u;
            return;
        }
    }
    ctx->pc = 0x1069DCu;
}
