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

// Function: entry_0012601c
// Address: 0x12601c - 0x126038
void entry_0012601c_0x12601c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012601c_0x12601c");
#endif

    ctx->pc = 0x12601cu;

    // 0x12601c: 0x16c20007  bne         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12601Cu;
    {
        const bool branch_taken_0x12601c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x126020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12601Cu;
        // 0x126020: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12601c) {
            ctx->pc = 0x12603Cu;
            return;
        }
    }
    ctx->pc = 0x126024u;
    // 0x126024: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x126024u;
    {
        const bool branch_taken_0x126024 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x126028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126024u;
        // 0x126028: 0x3aa30078  xori        $v1, $s5, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126024) {
            ctx->pc = 0x126040u;
            return;
        }
    }
    ctx->pc = 0x12602Cu;
    // 0x12602c: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x12602Cu;
    {
        const bool branch_taken_0x12602c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x126030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12602Cu;
        // 0x126030: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12602c) {
            ctx->pc = 0x126038u;
            return;
        }
    }
    ctx->pc = 0x126034u;
    // 0x126034: 0x53880b  movn        $s1, $v0, $s3
    ctx->pc = 0x126034u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->pc = 0x126038u;
}
