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

// Function: caseD_25
// Address: 0x16a7d0 - 0x16a7f0
void caseD_25_0x16a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_25_0x16a7d0");
#endif

    ctx->pc = 0x16a7d0u;

    // 0x16a7d0: 0x8e240ca0  lw          $a0, 0xCA0($s1)
    ctx->pc = 0x16a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3232)));
    // 0x16a7d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a7d8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A7D8u;
    {
        const bool branch_taken_0x16a7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7D8u;
        // 0x16a7dc: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7d8) {
            ctx->pc = 0x16A7F0u;
            return;
        }
    }
    ctx->pc = 0x16A7E0u;
    // 0x16a7e0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16a7e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A7E4u;
    {
        const bool branch_taken_0x16a7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7E4u;
        // 0x16a7e8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7e4) {
            ctx->pc = 0x16A7F4u;
            return;
        }
    }
    ctx->pc = 0x16A7ECu;
    // 0x16a7ec: 0x0  nop
    ctx->pc = 0x16a7ecu;
    // NOP
    ctx->pc = 0x16a7f0u;
}
