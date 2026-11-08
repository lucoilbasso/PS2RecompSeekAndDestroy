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

// Function: entry_0017b010
// Address: 0x17b010 - 0x17b050
void entry_0017b010_0x17b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b010_0x17b010");
#endif

    ctx->pc = 0x17b010u;

    // 0x17b010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b014: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17b014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b01c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b020: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x17b020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17b024: 0x3401c034  ori         $at, $zero, 0xC034
    ctx->pc = 0x17b024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17b028: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x17b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x17b02c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b030: 0x1051001b  beq         $v0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x17B030u;
    {
        const bool branch_taken_0x17b030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x17B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B030u;
        // 0x17b034: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b030) {
            ctx->pc = 0x17B0A0u;
            return;
        }
    }
    ctx->pc = 0x17B038u;
    // 0x17b038: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x17b038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x17b03c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17b03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17b040: 0x24440250  addiu       $a0, $v0, 0x250
    ctx->pc = 0x17b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x17b044: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b048: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17b048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b04c: 0x0  nop
    ctx->pc = 0x17b04cu;
    // NOP
    ctx->pc = 0x17b050u;
}
