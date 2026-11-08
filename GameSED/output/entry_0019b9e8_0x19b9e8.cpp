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

// Function: entry_0019b9e8
// Address: 0x19b9e8 - 0x19ba18
void entry_0019b9e8_0x19b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b9e8_0x19b9e8");
#endif

    ctx->pc = 0x19b9e8u;

label_19b9e8:
    // 0x19b9e8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19b9e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b9ec: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x19B9ECu;
    {
        const bool branch_taken_0x19b9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9ec) {
            ctx->pc = 0x19B9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B9ECu;
            // 0x19b9f0: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA20u;
            return;
        }
    }
    ctx->pc = 0x19B9F4u;
    // 0x19b9f4: 0x0  nop
    ctx->pc = 0x19b9f4u;
    // NOP
    // 0x19b9f8: 0x0  nop
    ctx->pc = 0x19b9f8u;
    // NOP
    // 0x19b9fc: 0x0  nop
    ctx->pc = 0x19b9fcu;
    // NOP
    // 0x19ba00: 0x0  nop
    ctx->pc = 0x19ba00u;
    // NOP
    // 0x19ba04: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19BA04u;
    {
        const bool branch_taken_0x19ba04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19ba04) {
            ctx->pc = 0x19BA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BA04u;
            // 0x19ba08: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b9e8;
        }
    }
    ctx->pc = 0x19BA0Cu;
    // 0x19ba0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19BA0Cu;
    {
        const bool branch_taken_0x19ba0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA0Cu;
        // 0x19ba10: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba0c) {
            ctx->pc = 0x19BA20u;
            return;
        }
    }
    ctx->pc = 0x19BA14u;
    // 0x19ba14: 0x0  nop
    ctx->pc = 0x19ba14u;
    // NOP
    ctx->pc = 0x19ba18u;
}
