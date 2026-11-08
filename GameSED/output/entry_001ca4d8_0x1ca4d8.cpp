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

// Function: entry_001ca4d8
// Address: 0x1ca4d8 - 0x1ca4fc
void entry_001ca4d8_0x1ca4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca4d8_0x1ca4d8");
#endif

    ctx->pc = 0x1ca4d8u;

label_1ca4d8:
    // 0x1ca4d8: 0x41878  dsll        $v1, $a0, 1
    ctx->pc = 0x1ca4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 1);
    // 0x1ca4dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ca4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ca4e0: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1ca4e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ca4e4: 0x0  nop
    ctx->pc = 0x1ca4e4u;
    // NOP
    // 0x1ca4e8: 0x0  nop
    ctx->pc = 0x1ca4e8u;
    // NOP
    // 0x1ca4ec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CA4ECu;
    {
        const bool branch_taken_0x1ca4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4ECu;
        // 0x1ca4f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4ec) {
            ctx->pc = 0x1CA4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4d8;
        }
    }
    ctx->pc = 0x1CA4F4u;
    // 0x1ca4f4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1ca4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1ca4f8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1ca4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->pc = 0x1ca4fcu;
}
