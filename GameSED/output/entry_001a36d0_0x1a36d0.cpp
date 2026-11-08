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

// Function: entry_001a36d0
// Address: 0x1a36d0 - 0x1a36e8
void entry_001a36d0_0x1a36d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a36d0_0x1a36d0");
#endif

    ctx->pc = 0x1a36d0u;

    // 0x1a36d0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A36D0u;
    {
        const bool branch_taken_0x1a36d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a36d0) {
            ctx->pc = 0x1A36D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A36D0u;
            // 0x1a36d4: 0x9502000a  lhu         $v0, 0xA($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A36ECu;
            return;
        }
    }
    ctx->pc = 0x1A36D8u;
    // 0x1a36d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a36dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a36dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A36E0u;
    {
        const bool branch_taken_0x1a36e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36E0u;
        // 0x1a36e4: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36e0) {
            ctx->pc = 0x1A3704u;
            return;
        }
    }
    ctx->pc = 0x1A36E8u;
}
