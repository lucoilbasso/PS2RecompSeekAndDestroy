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

// Function: entry_001cfe18
// Address: 0x1cfe18 - 0x1cfe50
void entry_001cfe18_0x1cfe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfe18_0x1cfe18");
#endif

    switch (ctx->pc) {
        case 0x1cfe20u: goto label_1cfe20;
        default: break;
    }

    ctx->pc = 0x1cfe18u;

    // 0x1cfe18: 0xc073d84  jal         func_1CF610
    ctx->pc = 0x1CFE18u;
    SET_GPR_U32(ctx, 31, 0x1CFE20u);
    ctx->pc = 0x1CFE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE18u;
    // 0x1cfe1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF610u, 0x1CFE18u, 0x1CFE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE20u;
label_1cfe20:
    // 0x1cfe20: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1cfe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cfe24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cfe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cfe28: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x1cfe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x1cfe2c: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1cfe2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cfe30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFE30u;
    {
        const bool branch_taken_0x1cfe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE30u;
        // 0x1cfe34: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe30) {
            ctx->pc = 0x1CFE50u;
            return;
        }
    }
    ctx->pc = 0x1CFE38u;
    // 0x1cfe38: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x1cfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cfe3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cfe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cfe40: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1cfe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1cfe44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFE44u;
    {
        const bool branch_taken_0x1cfe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE44u;
        // 0x1cfe48: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe44) {
            ctx->pc = 0x1CFE58u;
            return;
        }
    }
    ctx->pc = 0x1CFE4Cu;
    // 0x1cfe4c: 0x0  nop
    ctx->pc = 0x1cfe4cu;
    // NOP
    ctx->pc = 0x1cfe50u;
}
