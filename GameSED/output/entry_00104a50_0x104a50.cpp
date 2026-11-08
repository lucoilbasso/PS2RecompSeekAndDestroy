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

// Function: entry_00104a50
// Address: 0x104a50 - 0x104a7c
void entry_00104a50_0x104a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104a50_0x104a50");
#endif

    ctx->pc = 0x104a50u;

    // 0x104a50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104a54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x104a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x104a5c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x104a5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104a60: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x104A60u;
    {
        const bool branch_taken_0x104a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x104A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A60u;
        // 0x104a64: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a60) {
            ctx->pc = 0x104A7Cu;
            return;
        }
    }
    ctx->pc = 0x104A68u;
    // 0x104a68: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a70: 0x24a52010  addiu       $a1, $a1, 0x2010
    ctx->pc = 0x104a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
    // 0x104a74: 0xc068186  jal         func_1A0618
    ctx->pc = 0x104A74u;
    SET_GPR_U32(ctx, 31, 0x104A7Cu);
    ctx->pc = 0x104A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A74u;
    // 0x104a78: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x104A74u, 0x104A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A7Cu;
}
