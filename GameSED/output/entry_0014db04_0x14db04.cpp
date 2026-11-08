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

// Function: entry_0014db04
// Address: 0x14db04 - 0x14db20
void entry_0014db04_0x14db04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014db04_0x14db04");
#endif

    ctx->pc = 0x14db04u;

    // 0x14db04: 0x56020018  bnel        $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14DB04u;
    {
        const bool branch_taken_0x14db04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14db04) {
            ctx->pc = 0x14DB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DB04u;
            // 0x14db08: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DB68u;
            return;
        }
    }
    ctx->pc = 0x14DB0Cu;
    // 0x14db0c: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14db10: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x14db10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x14db14: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14DB14u;
    {
        const bool branch_taken_0x14db14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB14u;
        // 0x14db18: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db14) {
            ctx->pc = 0x14DB64u;
            return;
        }
    }
    ctx->pc = 0x14DB1Cu;
    // 0x14db1c: 0x0  nop
    ctx->pc = 0x14db1cu;
    // NOP
    ctx->pc = 0x14db20u;
}
