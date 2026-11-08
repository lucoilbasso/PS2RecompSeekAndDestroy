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

// Function: entry_00185ac0
// Address: 0x185ac0 - 0x185ae8
void entry_00185ac0_0x185ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185ac0_0x185ac0");
#endif

    ctx->pc = 0x185ac0u;

    // 0x185ac0: 0x1222004f  beq         $s1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x185AC0u;
    {
        const bool branch_taken_0x185ac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AC0u;
        // 0x185ac4: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ac0) {
            ctx->pc = 0x185C00u;
            return;
        }
    }
    ctx->pc = 0x185AC8u;
    // 0x185ac8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185AC8u;
    {
        const bool branch_taken_0x185ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AC8u;
        // 0x185acc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ac8) {
            ctx->pc = 0x185AE8u;
            return;
        }
    }
    ctx->pc = 0x185AD0u;
    // 0x185ad0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x185ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x185ad4: 0x122200ae  beq         $s1, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x185AD4u;
    {
        const bool branch_taken_0x185ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AD4u;
        // 0x185ad8: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ad4) {
            ctx->pc = 0x185D90u;
            return;
        }
    }
    ctx->pc = 0x185ADCu;
    // 0x185adc: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x185ADCu;
    {
        const bool branch_taken_0x185adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185ADCu;
        // 0x185ae0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185adc) {
            ctx->pc = 0x185F94u;
            return;
        }
    }
    ctx->pc = 0x185AE4u;
    // 0x185ae4: 0x0  nop
    ctx->pc = 0x185ae4u;
    // NOP
    ctx->pc = 0x185ae8u;
}
