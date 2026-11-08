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

// Function: entry_00162d94
// Address: 0x162d94 - 0x162dc8
void entry_00162d94_0x162d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162d94_0x162d94");
#endif

    switch (ctx->pc) {
        case 0x162d9cu: goto label_162d9c;
        case 0x162db4u: goto label_162db4;
        default: break;
    }

    ctx->pc = 0x162d94u;

    // 0x162d94: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x162D94u;
    SET_GPR_U32(ctx, 31, 0x162D9Cu);
    ctx->pc = 0x162D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D94u;
    // 0x162d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x162D94u, 0x162D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D9Cu;
label_162d9c:
    // 0x162d9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x162d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162da0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x162da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x162da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162da8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x162da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162dac: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x162DACu;
    SET_GPR_U32(ctx, 31, 0x162DB4u);
    ctx->pc = 0x162DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DACu;
    // 0x162db0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x162DACu, 0x162DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162DB4u;
label_162db4:
    // 0x162db4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x162DB4u;
    {
        const bool branch_taken_0x162db4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x162DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DB4u;
        // 0x162db8: 0x8e430600  lw          $v1, 0x600($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162db4) {
            ctx->pc = 0x162DC8u;
            return;
        }
    }
    ctx->pc = 0x162DBCu;
    // 0x162dbc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x162DBCu;
    {
        const bool branch_taken_0x162dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DBCu;
        // 0x162dc0: 0x8c6301b4  lw          $v1, 0x1B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dbc) {
            ctx->pc = 0x162E08u;
            return;
        }
    }
    ctx->pc = 0x162DC4u;
    // 0x162dc4: 0x0  nop
    ctx->pc = 0x162dc4u;
    // NOP
    ctx->pc = 0x162dc8u;
}
