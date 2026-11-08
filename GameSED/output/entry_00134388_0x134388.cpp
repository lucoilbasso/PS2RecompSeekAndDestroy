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

// Function: entry_00134388
// Address: 0x134388 - 0x1343a0
void entry_00134388_0x134388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134388_0x134388");
#endif

    switch (ctx->pc) {
        case 0x134398u: goto label_134398;
        default: break;
    }

    ctx->pc = 0x134388u;

    // 0x134388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13438c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13438cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134390: 0xc04e4be  jal         func_1392F8
    ctx->pc = 0x134390u;
    SET_GPR_U32(ctx, 31, 0x134398u);
    ctx->pc = 0x134394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134390u;
    // 0x134394: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1392F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1392F8u, 0x134390u, 0x134398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134398u;
label_134398:
    // 0x134398: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x134398u;
    {
        const bool branch_taken_0x134398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134398u;
        // 0x13439c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134398) {
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x1343A0u;
}
