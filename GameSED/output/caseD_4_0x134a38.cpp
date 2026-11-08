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

// Function: caseD_4
// Address: 0x134a38 - 0x134a60
void caseD_4_0x134a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x134a38");
#endif

    switch (ctx->pc) {
        case 0x134a58u: goto label_134a58;
        default: break;
    }

    ctx->pc = 0x134a38u;

    // 0x134a38: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x134a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x134a3c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x134A3Cu;
    {
        const bool branch_taken_0x134a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134a3c) {
            ctx->pc = 0x134A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134A3Cu;
            // 0x134a40: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134A60u;
            return;
        }
    }
    ctx->pc = 0x134A44u;
    // 0x134a44: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x134a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134a48: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x134a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134a4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a50: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x134A50u;
    SET_GPR_U32(ctx, 31, 0x134A58u);
    ctx->pc = 0x134A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A50u;
    // 0x134a54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x134A50u, 0x134A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A58u;
label_134a58:
    // 0x134a58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x134A58u;
    {
        const bool branch_taken_0x134a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A58u;
        // 0x134a5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a58) {
            ctx->pc = 0x134A64u;
            return;
        }
    }
    ctx->pc = 0x134A60u;
}
