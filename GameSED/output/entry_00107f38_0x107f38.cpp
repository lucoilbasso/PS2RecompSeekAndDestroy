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

// Function: entry_00107f38
// Address: 0x107f38 - 0x107f60
void entry_00107f38_0x107f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f38_0x107f38");
#endif

    ctx->pc = 0x107f38u;

label_107f38:
    // 0x107f38: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x107F38u;
    {
        const bool branch_taken_0x107f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F38u;
        // 0x107f3c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f38) {
            ctx->pc = 0x107F60u;
            return;
        }
    }
    ctx->pc = 0x107F40u;
    // 0x107f40: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x107f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107f44: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x107f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x107f48: 0x0  nop
    ctx->pc = 0x107f48u;
    // NOP
    // 0x107f4c: 0x0  nop
    ctx->pc = 0x107f4cu;
    // NOP
    // 0x107f50: 0x0  nop
    ctx->pc = 0x107f50u;
    // NOP
    // 0x107f54: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x107F54u;
    {
        const bool branch_taken_0x107f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F54u;
        // 0x107f58: 0x8c63001c  lw          $v1, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f54) {
            ctx->pc = 0x107F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107f38;
        }
    }
    ctx->pc = 0x107F5Cu;
    // 0x107f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107f60u;
}
