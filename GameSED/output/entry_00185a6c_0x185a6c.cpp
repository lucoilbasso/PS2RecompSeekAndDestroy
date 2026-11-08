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

// Function: entry_00185a6c
// Address: 0x185a6c - 0x185ac0
void entry_00185a6c_0x185a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185a6c_0x185a6c");
#endif

    ctx->pc = 0x185a6cu;

    // 0x185a6c: 0x54400149  bnel        $v0, $zero, . + 4 + (0x149 << 2)
    ctx->pc = 0x185A6Cu;
    {
        const bool branch_taken_0x185a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185a6c) {
            ctx->pc = 0x185A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185A6Cu;
            // 0x185a70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185F94u;
            return;
        }
    }
    ctx->pc = 0x185A74u;
    // 0x185a74: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x185a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x185a78: 0x122200e5  beq         $s1, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x185A78u;
    {
        const bool branch_taken_0x185a78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A78u;
        // 0x185a7c: 0x2a220019  slti        $v0, $s1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a78) {
            ctx->pc = 0x185E10u;
            return;
        }
    }
    ctx->pc = 0x185A80u;
    // 0x185a80: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x185A80u;
    {
        const bool branch_taken_0x185a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A80u;
        // 0x185a84: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a80) {
            ctx->pc = 0x185AF8u;
            return;
        }
    }
    ctx->pc = 0x185A88u;
    // 0x185a88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x185a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x185a8c: 0x1223003e  beq         $s1, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x185A8Cu;
    {
        const bool branch_taken_0x185a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x185A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A8Cu;
        // 0x185a90: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a8c) {
            ctx->pc = 0x185B88u;
            return;
        }
    }
    ctx->pc = 0x185A94u;
    // 0x185a94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x185A94u;
    {
        const bool branch_taken_0x185a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A94u;
        // 0x185a98: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a94) {
            ctx->pc = 0x185AC0u;
            return;
        }
    }
    ctx->pc = 0x185A9Cu;
    // 0x185a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185aa0: 0x12220035  beq         $s1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x185AA0u;
    {
        const bool branch_taken_0x185aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AA0u;
        // 0x185aa4: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185aa0) {
            ctx->pc = 0x185B78u;
            return;
        }
    }
    ctx->pc = 0x185AA8u;
    // 0x185aa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x185aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185aac: 0x12220034  beq         $s1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x185AACu;
    {
        const bool branch_taken_0x185aac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AACu;
        // 0x185ab0: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185aac) {
            ctx->pc = 0x185B80u;
            return;
        }
    }
    ctx->pc = 0x185AB4u;
    // 0x185ab4: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x185AB4u;
    {
        const bool branch_taken_0x185ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AB4u;
        // 0x185ab8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ab4) {
            ctx->pc = 0x185F94u;
            return;
        }
    }
    ctx->pc = 0x185ABCu;
    // 0x185abc: 0x0  nop
    ctx->pc = 0x185abcu;
    // NOP
    ctx->pc = 0x185ac0u;
}
