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

// Function: entry_001d4b88
// Address: 0x1d4b88 - 0x1d4bc0
void entry_001d4b88_0x1d4b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4b88_0x1d4b88");
#endif

    switch (ctx->pc) {
        case 0x1d4ba8u: goto label_1d4ba8;
        default: break;
    }

    ctx->pc = 0x1d4b88u;

    // 0x1d4b88: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D4B88u;
    {
        const bool branch_taken_0x1d4b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B88u;
        // 0x1d4b8c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b88) {
            ctx->pc = 0x1D4BC0u;
            return;
        }
    }
    ctx->pc = 0x1D4B90u;
    // 0x1d4b90: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1d4b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1d4b94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d4b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4b98: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x1d4b98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x1d4b9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d4b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ba0: 0xc075487  jal         func_1D521C
    ctx->pc = 0x1D4BA0u;
    SET_GPR_U32(ctx, 31, 0x1D4BA8u);
    ctx->pc = 0x1D4BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4BA0u;
    // 0x1d4ba4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D521Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D521Cu, 0x1D4BA0u, 0x1D4BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BA8u;
label_1d4ba8:
    // 0x1d4ba8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d4bac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d4bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4bb0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d4bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d4bb4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d4bb8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1D4BB8u;
    {
        const bool branch_taken_0x1d4bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BB8u;
        // 0x1d4bbc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bb8) {
            ctx->pc = 0x1D4C64u;
            return;
        }
    }
    ctx->pc = 0x1D4BC0u;
}
