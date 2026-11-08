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

// Function: entry_0016e030
// Address: 0x16e030 - 0x16e048
void entry_0016e030_0x16e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e030_0x16e030");
#endif

    ctx->pc = 0x16e030u;

    // 0x16e030: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16E030u;
    {
        const bool branch_taken_0x16e030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E030u;
        // 0x16e034: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e030) {
            ctx->pc = 0x16E050u;
            return;
        }
    }
    ctx->pc = 0x16E038u;
    // 0x16e038: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E038u;
    {
        const bool branch_taken_0x16e038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16e038) {
            ctx->pc = 0x16E03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E038u;
            // 0x16e03c: 0x269305d0  addiu       $s3, $s4, 0x5D0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1488));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E054u;
            return;
        }
    }
    ctx->pc = 0x16E040u;
    // 0x16e040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16E040u;
    {
        const bool branch_taken_0x16e040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e040) {
            ctx->pc = 0x16E054u;
            return;
        }
    }
    ctx->pc = 0x16E048u;
}
