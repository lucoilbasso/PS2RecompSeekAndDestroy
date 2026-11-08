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

// Function: caseD_15
// Address: 0x169d78 - 0x169da8
void caseD_15_0x169d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x169d78");
#endif

    ctx->pc = 0x169d78u;

    // 0x169d78: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x169d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x169d7c: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x169D7Cu;
    {
        const bool branch_taken_0x169d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D7Cu;
        // 0x169d80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d7c) {
            ctx->pc = 0x169DC8u;
            return;
        }
    }
    ctx->pc = 0x169D84u;
    // 0x169d84: 0x28820016  slti        $v0, $a0, 0x16
    ctx->pc = 0x169d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x169d88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169D88u;
    {
        const bool branch_taken_0x169d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D88u;
        // 0x169d8c: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d88) {
            ctx->pc = 0x169DA8u;
            return;
        }
    }
    ctx->pc = 0x169D90u;
    // 0x169d90: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x169d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x169d94: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x169D94u;
    {
        const bool branch_taken_0x169d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D94u;
        // 0x169d98: 0x26c50ccc  addiu       $a1, $s6, 0xCCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d94) {
            ctx->pc = 0x169DC0u;
            return;
        }
    }
    ctx->pc = 0x169D9Cu;
    // 0x169d9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x169D9Cu;
    {
        const bool branch_taken_0x169d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D9Cu;
        // 0x169da0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d9c) {
            ctx->pc = 0x169DE4u;
            return;
        }
    }
    ctx->pc = 0x169DA4u;
    // 0x169da4: 0x0  nop
    ctx->pc = 0x169da4u;
    // NOP
    ctx->pc = 0x169da8u;
}
