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

// Function: entry_0017bd0c
// Address: 0x17bd0c - 0x17bd40
void entry_0017bd0c_0x17bd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bd0c_0x17bd0c");
#endif

    ctx->pc = 0x17bd0cu;

    // 0x17bd0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bd10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bd14: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x17bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17bd18: 0x3411c034  ori         $s1, $zero, 0xC034
    ctx->pc = 0x17bd18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17bd1c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x17bd1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x17bd20: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x17bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x17bd24: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17BD24u;
    {
        const bool branch_taken_0x17bd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD24u;
        // 0x17bd28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd24) {
            ctx->pc = 0x17BD94u;
            return;
        }
    }
    ctx->pc = 0x17BD2Cu;
    // 0x17bd2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17bd2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd30: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17bd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17bd34: 0x24440250  addiu       $a0, $v0, 0x250
    ctx->pc = 0x17bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x17bd38: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x17bd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x17bd3c: 0x0  nop
    ctx->pc = 0x17bd3cu;
    // NOP
    ctx->pc = 0x17bd40u;
}
