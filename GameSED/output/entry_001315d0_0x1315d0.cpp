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

// Function: entry_001315d0
// Address: 0x1315d0 - 0x131608
void entry_001315d0_0x1315d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001315d0_0x1315d0");
#endif

    switch (ctx->pc) {
        case 0x131600u: goto label_131600;
        default: break;
    }

    ctx->pc = 0x1315d0u;

    // 0x1315d0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1315D0u;
    {
        const bool branch_taken_0x1315d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1315D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1315D0u;
        // 0x1315d4: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1315d0) {
            ctx->pc = 0x1316A0u;
            return;
        }
    }
    ctx->pc = 0x1315D8u;
    // 0x1315d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1315d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315dc: 0xaf808a08  sw          $zero, -0x75F8($gp)
    ctx->pc = 0x1315dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 0));
    // 0x1315e0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1315e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1315e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1315e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1315e8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1315e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1315ec: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1315ECu;
    {
        const bool branch_taken_0x1315ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1315ec) {
            ctx->pc = 0x1315F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1315ECu;
            // 0x1315f0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131608u;
            return;
        }
    }
    ctx->pc = 0x1315F4u;
    // 0x1315f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1315f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315f8: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1315F8u;
    SET_GPR_U32(ctx, 31, 0x131600u);
    ctx->pc = 0x1315FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315F8u;
    // 0x1315fc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1315F8u, 0x131600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131600u;
label_131600:
    // 0x131600: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131600u;
    {
        const bool branch_taken_0x131600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131600u;
        // 0x131604: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131600) {
            ctx->pc = 0x131620u;
            return;
        }
    }
    ctx->pc = 0x131608u;
}
