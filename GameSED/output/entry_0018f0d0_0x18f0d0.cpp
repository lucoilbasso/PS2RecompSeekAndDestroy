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

// Function: entry_0018f0d0
// Address: 0x18f0d0 - 0x18f0f8
void entry_0018f0d0_0x18f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f0d0_0x18f0d0");
#endif

    ctx->pc = 0x18f0d0u;

    // 0x18f0d0: 0x8e02024c  lw          $v0, 0x24C($s0)
    ctx->pc = 0x18f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x18f0d4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x18F0D4u;
    {
        const bool branch_taken_0x18f0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f0d4) {
            ctx->pc = 0x18F0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F0D4u;
            // 0x18f0d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F10Cu;
            return;
        }
    }
    ctx->pc = 0x18F0DCu;
    // 0x18f0dc: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18f0e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18f0e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F0E4u;
    {
        const bool branch_taken_0x18f0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0E4u;
        // 0x18f0e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0e4) {
            ctx->pc = 0x18F108u;
            return;
        }
    }
    ctx->pc = 0x18F0ECu;
    // 0x18f0ec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x18f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x18f0f0: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x18F0F0u;
    SET_GPR_U32(ctx, 31, 0x18F0F8u);
    ctx->pc = 0x18F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F0F0u;
    // 0x18f0f4: 0x24841be8  addiu       $a0, $a0, 0x1BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x18F0F0u, 0x18F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F0F8u;
}
