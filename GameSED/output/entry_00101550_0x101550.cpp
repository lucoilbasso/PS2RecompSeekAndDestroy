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

// Function: entry_00101550
// Address: 0x101550 - 0x101560
void entry_00101550_0x101550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101550_0x101550");
#endif

    ctx->pc = 0x101550u;

    // 0x101550: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x101550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x101554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101558: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x101558u;
    {
        const bool branch_taken_0x101558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101558u;
        // 0x10155c: 0x8c520374  lw          $s2, 0x374($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101558) {
            ctx->pc = 0x101578u;
            return;
        }
    }
    ctx->pc = 0x101560u;
}
