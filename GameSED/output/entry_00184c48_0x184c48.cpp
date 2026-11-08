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

// Function: entry_00184c48
// Address: 0x184c48 - 0x184c6c
void entry_00184c48_0x184c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184c48_0x184c48");
#endif

    ctx->pc = 0x184c48u;

label_184c48:
    // 0x184c48: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x184c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x184c4c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x184C4Cu;
    {
        const bool branch_taken_0x184c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C4Cu;
        // 0x184c50: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c4c) {
            ctx->pc = 0x184C70u;
            return;
        }
    }
    ctx->pc = 0x184C54u;
    // 0x184c54: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x184c54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184c58: 0x0  nop
    ctx->pc = 0x184c58u;
    // NOP
    // 0x184c5c: 0x0  nop
    ctx->pc = 0x184c5cu;
    // NOP
    // 0x184c60: 0x0  nop
    ctx->pc = 0x184c60u;
    // NOP
    // 0x184c64: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x184C64u;
    {
        const bool branch_taken_0x184c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x184c64) {
            ctx->pc = 0x184C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184C64u;
            // 0x184c68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184c48;
        }
    }
    ctx->pc = 0x184C6Cu;
}
