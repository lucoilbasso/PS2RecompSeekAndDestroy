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

// Function: entry_00185828
// Address: 0x185828 - 0x185858
void entry_00185828_0x185828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185828_0x185828");
#endif

    ctx->pc = 0x185828u;

    // 0x185828: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x185828u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x18582c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x185830: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x185830u;
    {
        const bool branch_taken_0x185830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185830u;
        // 0x185834: 0x26460148  addiu       $a2, $s2, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185830) {
            ctx->pc = 0x185898u;
            return;
        }
    }
    ctx->pc = 0x185838u;
    // 0x185838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18583c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x185840: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x185840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185844: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x185844u;
    {
        const bool branch_taken_0x185844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185844u;
        // 0x185848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185844) {
            ctx->pc = 0x185890u;
            return;
        }
    }
    ctx->pc = 0x18584Cu;
    // 0x18584c: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18584Cu;
    {
        const bool branch_taken_0x18584c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x18584c) {
            ctx->pc = 0x18586Cu;
            return;
        }
    }
    ctx->pc = 0x185854u;
    // 0x185854: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x185854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x185858u;
}
