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

// Function: entry_00190b18
// Address: 0x190b18 - 0x190b34
void entry_00190b18_0x190b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190b18_0x190b18");
#endif

    ctx->pc = 0x190b18u;

    // 0x190b18: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x190B18u;
    {
        const bool branch_taken_0x190b18 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B18u;
        // 0x190b1c: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b18) {
            ctx->pc = 0x190B34u;
            return;
        }
    }
    ctx->pc = 0x190B20u;
    // 0x190b20: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x190b20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x190b24: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x190b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x190b28: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x190b28u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x190b2c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190b2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190b30: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x190b30u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x190b34u;
}
