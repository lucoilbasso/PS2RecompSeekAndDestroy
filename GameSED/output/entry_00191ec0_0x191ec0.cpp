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

// Function: entry_00191ec0
// Address: 0x191ec0 - 0x191edc
void entry_00191ec0_0x191ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191ec0_0x191ec0");
#endif

    ctx->pc = 0x191ec0u;

    // 0x191ec0: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x191EC0u;
    {
        const bool branch_taken_0x191ec0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x191EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EC0u;
        // 0x191ec4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ec0) {
            ctx->pc = 0x191EDCu;
            return;
        }
    }
    ctx->pc = 0x191EC8u;
    // 0x191ec8: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x191ec8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x191ecc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x191eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x191ed0: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x191ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x191ed4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x191ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x191ed8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x191ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x191edcu;
}
