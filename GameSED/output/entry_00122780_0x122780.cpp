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

// Function: entry_00122780
// Address: 0x122780 - 0x1227b8
void entry_00122780_0x122780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122780_0x122780");
#endif

    switch (ctx->pc) {
        case 0x1227b0u: goto label_1227b0;
        default: break;
    }

    ctx->pc = 0x122780u;

    // 0x122780: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x122780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x122784: 0x10530018  beq         $v0, $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x122784u;
    {
        const bool branch_taken_0x122784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x122784) {
            ctx->pc = 0x1227E8u;
            return;
        }
    }
    ctx->pc = 0x12278Cu;
    // 0x12278c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12278Cu;
    {
        const bool branch_taken_0x12278c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12278c) {
            ctx->pc = 0x122790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12278Cu;
            // 0x122790: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1227B8u;
            return;
        }
    }
    ctx->pc = 0x122794u;
    // 0x122794: 0x5055001c  beql        $v0, $s5, . + 4 + (0x1C << 2)
    ctx->pc = 0x122794u;
    {
        const bool branch_taken_0x122794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x122794) {
            ctx->pc = 0x122798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122794u;
            // 0x122798: 0xae140014  sw          $s4, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122808u;
            return;
        }
    }
    ctx->pc = 0x12279Cu;
    // 0x12279c: 0x1454001b  bne         $v0, $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x12279Cu;
    {
        const bool branch_taken_0x12279c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1227A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12279Cu;
        // 0x1227a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12279c) {
            ctx->pc = 0x12280Cu;
            return;
        }
    }
    ctx->pc = 0x1227A4u;
    // 0x1227a4: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1227a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1227a8: 0xc04899e  jal         func_122678
    ctx->pc = 0x1227A8u;
    SET_GPR_U32(ctx, 31, 0x1227B0u);
    ctx->pc = 0x1227ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227A8u;
    // 0x1227ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122678u, 0x1227A8u, 0x1227B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227B0u;
label_1227b0:
    // 0x1227b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1227B0u;
    {
        const bool branch_taken_0x1227b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1227b0) {
            ctx->pc = 0x12280Cu;
            return;
        }
    }
    ctx->pc = 0x1227B8u;
}
