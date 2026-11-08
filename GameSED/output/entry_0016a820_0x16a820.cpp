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

// Function: entry_0016a820
// Address: 0x16a820 - 0x16a838
void entry_0016a820_0x16a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a820_0x16a820");
#endif

    ctx->pc = 0x16a820u;

    // 0x16a820: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a824: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A824u;
    {
        const bool branch_taken_0x16a824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A824u;
        // 0x16a828: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a824) {
            ctx->pc = 0x16A838u;
            return;
        }
    }
    ctx->pc = 0x16A82Cu;
    // 0x16a82c: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16a830: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A830u;
    {
        const bool branch_taken_0x16a830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A830u;
        // 0x16a834: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a830) {
            ctx->pc = 0x16A83Cu;
            return;
        }
    }
    ctx->pc = 0x16A838u;
}
