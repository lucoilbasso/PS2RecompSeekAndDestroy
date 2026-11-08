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

// Function: entry_0013c310
// Address: 0x13c310 - 0x13c34c
void entry_0013c310_0x13c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c310_0x13c310");
#endif

    switch (ctx->pc) {
        case 0x13c318u: goto label_13c318;
        case 0x13c328u: goto label_13c328;
        default: break;
    }

    ctx->pc = 0x13c310u;

    // 0x13c310: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13C310u;
    SET_GPR_U32(ctx, 31, 0x13C318u);
    ctx->pc = 0x13C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C310u;
    // 0x13c314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13C310u, 0x13C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C318u;
label_13c318:
    // 0x13c318: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13c318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c31c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c320: 0xc0410e4  jal         func_104390
    ctx->pc = 0x13C320u;
    SET_GPR_U32(ctx, 31, 0x13C328u);
    ctx->pc = 0x13C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C320u;
    // 0x13c324: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104390u, 0x13C320u, 0x13C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C328u;
label_13c328:
    // 0x13c328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c32c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13c32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c330: 0x26e56890  addiu       $a1, $s7, 0x6890
    ctx->pc = 0x13c330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 26768));
    // 0x13c334: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x13c334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x13c338: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C338u;
    {
        const bool branch_taken_0x13c338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C338u;
        // 0x13c33c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c338) {
            ctx->pc = 0x13C34Cu;
            return;
        }
    }
    ctx->pc = 0x13C340u;
    // 0x13c340: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x13c340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c344: 0x505e0004  beql        $v0, $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C344u;
    {
        const bool branch_taken_0x13c344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x13c344) {
            ctx->pc = 0x13C348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C344u;
            // 0x13c348: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C358u;
            return;
        }
    }
    ctx->pc = 0x13C34Cu;
}
