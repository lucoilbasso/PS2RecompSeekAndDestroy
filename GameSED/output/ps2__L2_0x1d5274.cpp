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

// Function: $L2
// Address: 0x1d5274 - 0x1d5294
void ps2__L2_0x1d5274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L2_0x1d5274");
#endif

    ctx->pc = 0x1d5274u;

    // 0x1d5274: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x1d5274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d5278: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D5278u;
    {
        const bool branch_taken_0x1d5278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5278) {
            ctx->pc = 0x1D527Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5278u;
            // 0x1d527c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D52F0u;
            return;
        }
    }
    ctx->pc = 0x1D5280u;
    // 0x1d5280: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x1d5280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d5284: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1d5284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1d5288: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5288u;
    {
        const bool branch_taken_0x1d5288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5288) {
            ctx->pc = 0x1D528Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5288u;
            // 0x1d528c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D52F0u;
            return;
        }
    }
    ctx->pc = 0x1D5290u;
    // 0x1d5290: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1d5290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d5294u;
}
