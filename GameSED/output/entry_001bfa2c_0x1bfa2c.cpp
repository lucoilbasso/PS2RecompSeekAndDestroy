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

// Function: entry_001bfa2c
// Address: 0x1bfa2c - 0x1bfa60
void entry_001bfa2c_0x1bfa2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfa2c_0x1bfa2c");
#endif

    ctx->pc = 0x1bfa2cu;

    // 0x1bfa2c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1bfa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bfa30: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1bfa30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bfa34: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1bfa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bfa38: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1bfa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bfa3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bfa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bfa40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFA40u;
    {
        const bool branch_taken_0x1bfa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA40u;
        // 0x1bfa44: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa40) {
            ctx->pc = 0x1BFA60u;
            return;
        }
    }
    ctx->pc = 0x1BFA48u;
    // 0x1bfa48: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x1bfa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
    // 0x1bfa4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFA4Cu;
    {
        const bool branch_taken_0x1bfa4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA4Cu;
        // 0x1bfa50: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa4c) {
            ctx->pc = 0x1BFA60u;
            return;
        }
    }
    ctx->pc = 0x1BFA54u;
    // 0x1bfa54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bfa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa58: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1BFA58u;
    SET_GPR_U32(ctx, 31, 0x1BFA60u);
    ctx->pc = 0x1BFA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA58u;
    // 0x1bfa5c: 0x24a5b4d8  addiu       $a1, $a1, -0x4B28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BFA58u, 0x1BFA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA60u;
}
