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

// Function: entry_0013efe4
// Address: 0x13efe4 - 0x13f000
void entry_0013efe4_0x13efe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013efe4_0x13efe4");
#endif

    ctx->pc = 0x13efe4u;

    // 0x13efe4: 0x24030126  addiu       $v1, $zero, 0x126
    ctx->pc = 0x13efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13efe8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13efe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13efec: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13EFECu;
    {
        const bool branch_taken_0x13efec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFECu;
        // 0x13eff0: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efec) {
            ctx->pc = 0x13F020u;
            return;
        }
    }
    ctx->pc = 0x13EFF4u;
    // 0x13eff4: 0x8e700018  lw          $s0, 0x18($s3)
    ctx->pc = 0x13eff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x13eff8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13EFF8u;
    {
        const bool branch_taken_0x13eff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFF8u;
        // 0x13effc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eff8) {
            ctx->pc = 0x13F01Cu;
            return;
        }
    }
    ctx->pc = 0x13F000u;
}
