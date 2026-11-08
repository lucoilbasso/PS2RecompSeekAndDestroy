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

// Function: entry_0018f3c8
// Address: 0x18f3c8 - 0x18f3e8
void entry_0018f3c8_0x18f3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f3c8_0x18f3c8");
#endif

    ctx->pc = 0x18f3c8u;

    // 0x18f3c8: 0x96020158  lhu         $v0, 0x158($s0)
    ctx->pc = 0x18f3c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x18f3cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18f3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18f3d0: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x18F3D0u;
    {
        const bool branch_taken_0x18f3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f3d0) {
            ctx->pc = 0x18F3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F3D0u;
            // 0x18f3d4: 0x26020154  addiu       $v0, $s0, 0x154 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F45Cu;
            return;
        }
    }
    ctx->pc = 0x18F3D8u;
    // 0x18f3d8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x18f3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x18f3dc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F3DCu;
    {
        const bool branch_taken_0x18f3dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3DCu;
        // 0x18f3e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3dc) {
            ctx->pc = 0x18F3E8u;
            return;
        }
    }
    ctx->pc = 0x18F3E4u;
    // 0x18f3e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x18f3e8u;
}
