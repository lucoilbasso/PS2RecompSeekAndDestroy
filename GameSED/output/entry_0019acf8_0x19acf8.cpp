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

// Function: entry_0019acf8
// Address: 0x19acf8 - 0x19ad28
void entry_0019acf8_0x19acf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019acf8_0x19acf8");
#endif

    ctx->pc = 0x19acf8u;

label_19acf8:
    // 0x19acf8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19acfc: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x19acfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19ad00: 0x0  nop
    ctx->pc = 0x19ad00u;
    // NOP
    // 0x19ad04: 0x0  nop
    ctx->pc = 0x19ad04u;
    // NOP
    // 0x19ad08: 0x0  nop
    ctx->pc = 0x19ad08u;
    // NOP
    // 0x19ad0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AD0Cu;
    {
        const bool branch_taken_0x19ad0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD0Cu;
        // 0x19ad10: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad0c) {
            ctx->pc = 0x19ACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19acf8;
        }
    }
    ctx->pc = 0x19AD14u;
    // 0x19ad14: 0x10e9002e  beq         $a3, $t1, . + 4 + (0x2E << 2)
    ctx->pc = 0x19AD14u;
    {
        const bool branch_taken_0x19ad14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x19AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD14u;
        // 0x19ad18: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad14) {
            ctx->pc = 0x19ADD0u;
            return;
        }
    }
    ctx->pc = 0x19AD1Cu;
    // 0x19ad1c: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x19ad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19ad20: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x19ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x19ad24: 0x0  nop
    ctx->pc = 0x19ad24u;
    // NOP
    ctx->pc = 0x19ad28u;
}
