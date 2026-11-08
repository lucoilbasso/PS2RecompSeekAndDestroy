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

// Function: entry_00126adc
// Address: 0x126adc - 0x126b00
void entry_00126adc_0x126adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126adc_0x126adc");
#endif

    ctx->pc = 0x126adcu;

    // 0x126adc: 0x3aa3001b  xori        $v1, $s5, 0x1B
    ctx->pc = 0x126adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)27);
    // 0x126ae0: 0x24041323  addiu       $a0, $zero, 0x1323
    ctx->pc = 0x126ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4899));
    // 0x126ae4: 0x16c40006  bne         $s6, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126AE4u;
    {
        const bool branch_taken_0x126ae4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x126AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AE4u;
        // 0x126ae8: 0x43900a  movz        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ae4) {
            ctx->pc = 0x126B00u;
            return;
        }
    }
    ctx->pc = 0x126AECu;
    // 0x126aec: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x126AECu;
    {
        const bool branch_taken_0x126aec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AECu;
        // 0x126af0: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126aec) {
            ctx->pc = 0x126B04u;
            return;
        }
    }
    ctx->pc = 0x126AF4u;
    // 0x126af4: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x126AF4u;
    {
        const bool branch_taken_0x126af4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AF4u;
        // 0x126af8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126af4) {
            ctx->pc = 0x126B00u;
            return;
        }
    }
    ctx->pc = 0x126AFCu;
    // 0x126afc: 0x51900b  movn        $s2, $v0, $s1
    ctx->pc = 0x126afcu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    ctx->pc = 0x126b00u;
}
