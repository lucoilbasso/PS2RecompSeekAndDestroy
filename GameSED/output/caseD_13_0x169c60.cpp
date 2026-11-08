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

// Function: caseD_13
// Address: 0x169c60 - 0x169c90
void caseD_13_0x169c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x169c60");
#endif

    ctx->pc = 0x169c60u;

    // 0x169c60: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x169c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x169c64: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x169C64u;
    {
        const bool branch_taken_0x169c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C64u;
        // 0x169c68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c64) {
            ctx->pc = 0x169CB0u;
            return;
        }
    }
    ctx->pc = 0x169C6Cu;
    // 0x169c6c: 0x28820016  slti        $v0, $a0, 0x16
    ctx->pc = 0x169c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x169c70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169C70u;
    {
        const bool branch_taken_0x169c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C70u;
        // 0x169c74: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c70) {
            ctx->pc = 0x169C90u;
            return;
        }
    }
    ctx->pc = 0x169C78u;
    // 0x169c78: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x169c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x169c7c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x169C7Cu;
    {
        const bool branch_taken_0x169c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C7Cu;
        // 0x169c80: 0x26c50ccc  addiu       $a1, $s6, 0xCCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c7c) {
            ctx->pc = 0x169CA8u;
            return;
        }
    }
    ctx->pc = 0x169C84u;
    // 0x169c84: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x169C84u;
    {
        const bool branch_taken_0x169c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C84u;
        // 0x169c88: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c84) {
            ctx->pc = 0x169CCCu;
            return;
        }
    }
    ctx->pc = 0x169C8Cu;
    // 0x169c8c: 0x0  nop
    ctx->pc = 0x169c8cu;
    // NOP
    ctx->pc = 0x169c90u;
}
