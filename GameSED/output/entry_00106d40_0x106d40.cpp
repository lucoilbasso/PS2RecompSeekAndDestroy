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

// Function: entry_00106d40
// Address: 0x106d40 - 0x106d60
void entry_00106d40_0x106d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106d40_0x106d40");
#endif

    ctx->pc = 0x106d40u;

    // 0x106d40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106d44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106d4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x106d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x106d50: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x106D50u;
    {
        const bool branch_taken_0x106d50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x106D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D50u;
        // 0x106d54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d50) {
            ctx->pc = 0x106D90u;
            return;
        }
    }
    ctx->pc = 0x106D58u;
    // 0x106d58: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x106d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x106d5c: 0x0  nop
    ctx->pc = 0x106d5cu;
    // NOP
    ctx->pc = 0x106d60u;
}
