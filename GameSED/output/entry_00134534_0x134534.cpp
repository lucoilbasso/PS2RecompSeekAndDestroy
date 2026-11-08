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

// Function: entry_00134534
// Address: 0x134534 - 0x134558
void entry_00134534_0x134534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134534_0x134534");
#endif

    switch (ctx->pc) {
        case 0x13454cu: goto label_13454c;
        default: break;
    }

    ctx->pc = 0x134534u;

    // 0x134534: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134534u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134538: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x134538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13453c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x13453cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134540: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x134540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134544: 0xc04dfac  jal         func_137EB0
    ctx->pc = 0x134544u;
    SET_GPR_U32(ctx, 31, 0x13454Cu);
    ctx->pc = 0x134548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134544u;
    // 0x134548: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137EB0u, 0x134544u, 0x13454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13454Cu;
label_13454c:
    // 0x13454c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x13454Cu;
    {
        const bool branch_taken_0x13454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13454Cu;
        // 0x134550: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13454c) {
            ctx->pc = 0x134684u;
            return;
        }
    }
    ctx->pc = 0x134554u;
    // 0x134554: 0x0  nop
    ctx->pc = 0x134554u;
    // NOP
    ctx->pc = 0x134558u;
}
