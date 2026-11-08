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

// Function: entry_00179ed0
// Address: 0x179ed0 - 0x179ef0
void entry_00179ed0_0x179ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ed0_0x179ed0");
#endif

    ctx->pc = 0x179ed0u;

    // 0x179ed0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x179ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x179ed4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179ED4u;
    {
        const bool branch_taken_0x179ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x179ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ED4u;
        // 0x179ed8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ed4) {
            ctx->pc = 0x179EF0u;
            return;
        }
    }
    ctx->pc = 0x179EDCu;
    // 0x179edc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x179edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x179ee0: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x179EE0u;
    {
        const bool branch_taken_0x179ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x179ee0) {
            ctx->pc = 0x179EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179EE0u;
            // 0x179ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179F00u;
            return;
        }
    }
    ctx->pc = 0x179EE8u;
    // 0x179ee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x179EE8u;
    {
        const bool branch_taken_0x179ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EE8u;
        // 0x179eec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ee8) {
            ctx->pc = 0x179F00u;
            return;
        }
    }
    ctx->pc = 0x179EF0u;
}
