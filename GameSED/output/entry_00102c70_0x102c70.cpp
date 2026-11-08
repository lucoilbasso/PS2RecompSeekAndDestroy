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

// Function: entry_00102c70
// Address: 0x102c70 - 0x102ca0
void entry_00102c70_0x102c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102c70_0x102c70");
#endif

    ctx->pc = 0x102c70u;

    // 0x102c70: 0x6430025  bgezl       $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x102C70u;
    {
        const bool branch_taken_0x102c70 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x102c70) {
            ctx->pc = 0x102C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102C70u;
            // 0x102c74: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102D08u;
            return;
        }
    }
    ctx->pc = 0x102C78u;
    // 0x102c78: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x102c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x102c7c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x102c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x102c80: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x102C80u;
    {
        const bool branch_taken_0x102c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C80u;
        // 0x102c84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c80) {
            ctx->pc = 0x102CC8u;
            return;
        }
    }
    ctx->pc = 0x102C88u;
    // 0x102c88: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x102c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x102c8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x102c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102c90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x102C90u;
    {
        const bool branch_taken_0x102c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102c90) {
            ctx->pc = 0x102C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102C90u;
            // 0x102c94: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102CA0u;
            return;
        }
    }
    ctx->pc = 0x102C98u;
    // 0x102c98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x102C98u;
    {
        const bool branch_taken_0x102c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C98u;
        // 0x102c9c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c98) {
            ctx->pc = 0x102CC8u;
            return;
        }
    }
    ctx->pc = 0x102CA0u;
}
