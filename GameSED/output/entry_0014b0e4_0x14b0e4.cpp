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

// Function: entry_0014b0e4
// Address: 0x14b0e4 - 0x14b114
void entry_0014b0e4_0x14b0e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b0e4_0x14b0e4");
#endif

    switch (ctx->pc) {
        case 0x14b0f4u: goto label_14b0f4;
        default: break;
    }

    ctx->pc = 0x14b0e4u;

    // 0x14b0e4: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x14b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x14b0e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0ec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14B0ECu;
    SET_GPR_U32(ctx, 31, 0x14B0F4u);
    ctx->pc = 0x14B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0ECu;
    // 0x14b0f0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14B0ECu, 0x14B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0F4u;
label_14b0f4:
    // 0x14b0f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14b0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0f8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B0F8u;
    {
        const bool branch_taken_0x14b0f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b0f8) {
            ctx->pc = 0x14B11Cu;
            return;
        }
    }
    ctx->pc = 0x14B100u;
    // 0x14b100: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14b100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b104: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B104u;
    {
        const bool branch_taken_0x14b104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b104) {
            ctx->pc = 0x14B108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B104u;
            // 0x14b108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B114u;
            return;
        }
    }
    ctx->pc = 0x14B10Cu;
    // 0x14b10c: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x14b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x14b110: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14b110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->pc = 0x14b114u;
}
