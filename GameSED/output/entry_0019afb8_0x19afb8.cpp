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

// Function: entry_0019afb8
// Address: 0x19afb8 - 0x19afe8
void entry_0019afb8_0x19afb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019afb8_0x19afb8");
#endif

    ctx->pc = 0x19afb8u;

label_19afb8:
    // 0x19afb8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19afbc: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x19afbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19afc0: 0x0  nop
    ctx->pc = 0x19afc0u;
    // NOP
    // 0x19afc4: 0x0  nop
    ctx->pc = 0x19afc4u;
    // NOP
    // 0x19afc8: 0x0  nop
    ctx->pc = 0x19afc8u;
    // NOP
    // 0x19afcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AFCCu;
    {
        const bool branch_taken_0x19afcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFCCu;
        // 0x19afd0: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afcc) {
            ctx->pc = 0x19AFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19afb8;
        }
    }
    ctx->pc = 0x19AFD4u;
    // 0x19afd4: 0x1109002e  beq         $t0, $t1, . + 4 + (0x2E << 2)
    ctx->pc = 0x19AFD4u;
    {
        const bool branch_taken_0x19afd4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x19AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFD4u;
        // 0x19afd8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afd4) {
            ctx->pc = 0x19B090u;
            return;
        }
    }
    ctx->pc = 0x19AFDCu;
    // 0x19afdc: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x19afdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19afe0: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x19afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x19afe4: 0x0  nop
    ctx->pc = 0x19afe4u;
    // NOP
    ctx->pc = 0x19afe8u;
}
