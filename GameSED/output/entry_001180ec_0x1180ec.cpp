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

// Function: entry_001180ec
// Address: 0x1180ec - 0x118100
void entry_001180ec_0x1180ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001180ec_0x1180ec");
#endif

    ctx->pc = 0x1180ecu;

    // 0x1180ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1180ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1180f0: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x1180f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1180f4: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x1180F4u;
    {
        const bool branch_taken_0x1180f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1180F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180F4u;
        // 0x1180f8: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180f4) {
            ctx->pc = 0x117FC0u;
            return;
        }
    }
    ctx->pc = 0x1180FCu;
    // 0x1180fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1180fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118100u;
}
