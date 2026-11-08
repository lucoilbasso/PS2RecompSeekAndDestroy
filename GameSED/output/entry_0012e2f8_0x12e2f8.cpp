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

// Function: entry_0012e2f8
// Address: 0x12e2f8 - 0x12e328
void entry_0012e2f8_0x12e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e2f8_0x12e2f8");
#endif

    switch (ctx->pc) {
        case 0x12e310u: goto label_12e310;
        case 0x12e324u: goto label_12e324;
        default: break;
    }

    ctx->pc = 0x12e2f8u;

    // 0x12e2f8: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x12e2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12e2fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12E2FCu;
    {
        const bool branch_taken_0x12e2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e2fc) {
            ctx->pc = 0x12E300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E2FCu;
            // 0x12e300: 0xae720038  sw          $s2, 0x38($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E32Cu;
            return;
        }
    }
    ctx->pc = 0x12E304u;
    // 0x12e304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e308: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E308u;
    SET_GPR_U32(ctx, 31, 0x12E310u);
    ctx->pc = 0x12E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E308u;
    // 0x12e30c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E308u, 0x12E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E310u;
label_12e310:
    // 0x12e310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e314: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x12E314u;
    {
        const bool branch_taken_0x12e314 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e314) {
            ctx->pc = 0x12E318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E314u;
            // 0x12e318: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E2E0u;
            return;
        }
    }
    ctx->pc = 0x12E31Cu;
    // 0x12e31c: 0xc04c852  jal         func_132148
    ctx->pc = 0x12E31Cu;
    SET_GPR_U32(ctx, 31, 0x12E324u);
    ctx->pc = 0x12E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E31Cu;
    // 0x12e320: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132148u, 0x12E31Cu, 0x12E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E324u;
label_12e324:
    // 0x12e324: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12e324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x12e328u;
}
