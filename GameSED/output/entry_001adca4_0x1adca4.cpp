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

// Function: entry_001adca4
// Address: 0x1adca4 - 0x1adcbc
void entry_001adca4_0x1adca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adca4_0x1adca4");
#endif

    ctx->pc = 0x1adca4u;

    // 0x1adca4: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x1adca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adca8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1adca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1adcac: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1ADCACu;
    {
        const bool branch_taken_0x1adcac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCACu;
        // 0x1adcb0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcac) {
            ctx->pc = 0x1ADC40u;
            return;
        }
    }
    ctx->pc = 0x1ADCB4u;
    // 0x1adcb4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1ADCB4u;
    {
        const bool branch_taken_0x1adcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCB4u;
        // 0x1adcb8: 0xdfbe0090  ld          $fp, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcb4) {
            ctx->pc = 0x1ADD10u;
            return;
        }
    }
    ctx->pc = 0x1ADCBCu;
}
