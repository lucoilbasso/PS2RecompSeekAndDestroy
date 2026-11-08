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

// Function: entry_0019ba20
// Address: 0x19ba20 - 0x19ba50
void entry_0019ba20_0x19ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ba20_0x19ba20");
#endif

    ctx->pc = 0x19ba20u;

    // 0x19ba20: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19BA20u;
    {
        const bool branch_taken_0x19ba20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA20u;
        // 0x19ba24: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba20) {
            ctx->pc = 0x19BA64u;
            return;
        }
    }
    ctx->pc = 0x19BA28u;
    // 0x19ba28: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x19ba28u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ba2c: 0x24e2ff9f  addiu       $v0, $a3, -0x61
    ctx->pc = 0x19ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967199));
    // 0x19ba30: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x19ba30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x19ba34: 0x24c3ff9f  addiu       $v1, $a2, -0x61
    ctx->pc = 0x19ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967199));
    // 0x19ba38: 0x24c8ffe0  addiu       $t0, $a2, -0x20
    ctx->pc = 0x19ba38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x19ba3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BA3Cu;
    {
        const bool branch_taken_0x19ba3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA3Cu;
        // 0x19ba40: 0x2c63001a  sltiu       $v1, $v1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba3c) {
            ctx->pc = 0x19BA50u;
            return;
        }
    }
    ctx->pc = 0x19BA44u;
    // 0x19ba44: 0x24e2ffe0  addiu       $v0, $a3, -0x20
    ctx->pc = 0x19ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x19ba48: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19ba4c: 0x23e03  sra         $a3, $v0, 24
    ctx->pc = 0x19ba4cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 24));
    ctx->pc = 0x19ba50u;
}
