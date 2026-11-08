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

// Function: entry_001d13a0
// Address: 0x1d13a0 - 0x1d13e0
void entry_001d13a0_0x1d13a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d13a0_0x1d13a0");
#endif

    switch (ctx->pc) {
        case 0x1d13c0u: goto label_1d13c0;
        default: break;
    }

    ctx->pc = 0x1d13a0u;

label_1d13a0:
    // 0x1d13a0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d13a4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1d13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1d13a8: 0x8c44e1b0  lw          $a0, -0x1E50($v0)
    ctx->pc = 0x1d13a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24E1B0u));
    // 0x1d13ac: 0x27a501d4  addiu       $a1, $sp, 0x1D4
    ctx->pc = 0x1d13acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x1d13b0: 0x8c67e618  lw          $a3, -0x19E8($v1)
    ctx->pc = 0x1d13b0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x24E618u));
    // 0x1d13b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d13b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13b8: 0xc075442  jal         func_1D5108
    ctx->pc = 0x1D13B8u;
    SET_GPR_U32(ctx, 31, 0x1D13C0u);
    ctx->pc = 0x1D13BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13B8u;
    // 0x1d13bc: 0x27a801d8  addiu       $t0, $sp, 0x1D8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5108u, 0x1D13B8u, 0x1D13C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D13C0u;
label_1d13c0:
    // 0x1d13c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d13c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13c4: 0x5a000006  blezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D13C4u;
    {
        const bool branch_taken_0x1d13c4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1d13c4) {
            ctx->pc = 0x1D13C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D13C4u;
            // 0x1d13c8: 0x2558823  subu        $s1, $s2, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D13E0u;
            return;
        }
    }
    ctx->pc = 0x1D13CCu;
    // 0x1d13cc: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1d13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1d13d0: 0x1451fff3  bne         $v0, $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D13D0u;
    {
        const bool branch_taken_0x1d13d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1D13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13D0u;
        // 0x1d13d4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13d0) {
            ctx->pc = 0x1D13A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d13a0;
        }
    }
    ctx->pc = 0x1D13D8u;
    // 0x1d13d8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d13d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d13dc: 0x2558823  subu        $s1, $s2, $s5
    ctx->pc = 0x1d13dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    ctx->pc = 0x1d13e0u;
}
