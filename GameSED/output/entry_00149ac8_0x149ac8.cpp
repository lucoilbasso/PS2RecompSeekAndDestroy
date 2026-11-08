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

// Function: entry_00149ac8
// Address: 0x149ac8 - 0x149af0
void entry_00149ac8_0x149ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149ac8_0x149ac8");
#endif

    ctx->pc = 0x149ac8u;

    // 0x149ac8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x149AC8u;
    {
        const bool branch_taken_0x149ac8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x149ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AC8u;
        // 0x149acc: 0x2862ffc0  slti        $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ac8) {
            ctx->pc = 0x149AF0u;
            return;
        }
    }
    ctx->pc = 0x149AD0u;
    // 0x149ad0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x149AD0u;
    {
        const bool branch_taken_0x149ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ad0) {
            ctx->pc = 0x149AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149AD0u;
            // 0x149ad4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149AF4u;
            return;
        }
    }
    ctx->pc = 0x149AD8u;
    // 0x149ad8: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x149ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x149adc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x149ADCu;
    {
        const bool branch_taken_0x149adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149adc) {
            ctx->pc = 0x149AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149ADCu;
            // 0x149ae0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149AF4u;
            return;
        }
    }
    ctx->pc = 0x149AE4u;
    // 0x149ae4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x149ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149ae8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x149ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x149aec: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x149aecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x149af0u;
}
