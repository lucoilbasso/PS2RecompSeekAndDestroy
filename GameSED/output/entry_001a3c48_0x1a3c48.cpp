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

// Function: entry_001a3c48
// Address: 0x1a3c48 - 0x1a3c60
void entry_001a3c48_0x1a3c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3c48_0x1a3c48");
#endif

    ctx->pc = 0x1a3c48u;

    // 0x1a3c48: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3C48u;
    {
        const bool branch_taken_0x1a3c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3c48) {
            ctx->pc = 0x1A3C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3C48u;
            // 0x1a3c4c: 0x94a20016  lhu         $v0, 0x16($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3C64u;
            return;
        }
    }
    ctx->pc = 0x1A3C50u;
    // 0x1a3c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3C58u;
    {
        const bool branch_taken_0x1a3c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C58u;
        // 0x1a3c5c: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c58) {
            ctx->pc = 0x1A3C7Cu;
            return;
        }
    }
    ctx->pc = 0x1A3C60u;
}
