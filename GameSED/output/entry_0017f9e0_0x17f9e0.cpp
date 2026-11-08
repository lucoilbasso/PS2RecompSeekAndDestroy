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

// Function: entry_0017f9e0
// Address: 0x17f9e0 - 0x17fa08
void entry_0017f9e0_0x17f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f9e0_0x17f9e0");
#endif

    ctx->pc = 0x17f9e0u;

    // 0x17f9e0: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x17f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x17f9e4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17f9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x17f9e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f9e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f9f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f9f4: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x17f9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f9f8: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17F9F8u;
    {
        const bool branch_taken_0x17f9f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9F8u;
        // 0x17f9fc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9f8) {
            ctx->pc = 0x17FA3Cu;
            return;
        }
    }
    ctx->pc = 0x17FA00u;
    // 0x17fa00: 0x29aa0004  slti        $t2, $t5, 0x4
    ctx->pc = 0x17fa00u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17fa04: 0x0  nop
    ctx->pc = 0x17fa04u;
    // NOP
    ctx->pc = 0x17fa08u;
}
