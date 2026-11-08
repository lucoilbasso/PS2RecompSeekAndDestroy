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

// Function: entry_00199830
// Address: 0x199830 - 0x199840
void entry_00199830_0x199830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199830_0x199830");
#endif

    ctx->pc = 0x199830u;

    // 0x199830: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x199830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x199834: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x199834u;
    {
        const bool branch_taken_0x199834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199834u;
        // 0x199838: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199834) {
            ctx->pc = 0x199868u;
            return;
        }
    }
    ctx->pc = 0x19983Cu;
    // 0x19983c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x19983cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x199840u;
}
