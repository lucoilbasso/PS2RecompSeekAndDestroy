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

// Function: entry_00156ba8
// Address: 0x156ba8 - 0x156bbc
void entry_00156ba8_0x156ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ba8_0x156ba8");
#endif

    ctx->pc = 0x156ba8u;

    // 0x156ba8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x156BA8u;
    {
        const bool branch_taken_0x156ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x156BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BA8u;
        // 0x156bac: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ba8) {
            ctx->pc = 0x156BC8u;
            return;
        }
    }
    ctx->pc = 0x156BB0u;
    // 0x156bb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156bb4: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x156BB4u;
    {
        const bool branch_taken_0x156bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x156bb4) {
            ctx->pc = 0x156BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156BB4u;
            // 0x156bb8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156BD0u;
            return;
        }
    }
    ctx->pc = 0x156BBCu;
}
