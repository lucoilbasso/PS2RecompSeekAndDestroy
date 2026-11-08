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

// Function: entry_001ce740
// Address: 0x1ce740 - 0x1ce768
void entry_001ce740_0x1ce740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce740_0x1ce740");
#endif

    ctx->pc = 0x1ce740u;

    // 0x1ce740: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE740u;
    {
        const bool branch_taken_0x1ce740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce740) {
            ctx->pc = 0x1CE744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE740u;
            // 0x1ce744: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE768u;
            return;
        }
    }
    ctx->pc = 0x1CE748u;
    // 0x1ce748: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1ce748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1ce74c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CE74Cu;
    {
        const bool branch_taken_0x1ce74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE74Cu;
        // 0x1ce750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce74c) {
            ctx->pc = 0x1CE7F0u;
            return;
        }
    }
    ctx->pc = 0x1CE754u;
    // 0x1ce754: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ce754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ce758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce75c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce760: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE760u;
        // 0x1ce764: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE768u;
}
