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

// Function: entry_0010d2ec
// Address: 0x10d2ec - 0x10d328
void entry_0010d2ec_0x10d2ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d2ec_0x10d2ec");
#endif

    switch (ctx->pc) {
        case 0x10d30cu: goto label_10d30c;
        default: break;
    }

    ctx->pc = 0x10d2ecu;

    // 0x10d2ec: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x10d2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x10d2f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10d2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10d2f4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x10d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x10d2f8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10d2fc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10d300: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x10d300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d304: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D304u;
    SET_GPR_U32(ctx, 31, 0x10D30Cu);
    ctx->pc = 0x10D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D304u;
    // 0x10d308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D304u, 0x10D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D30Cu;
label_10d30c:
    // 0x10d30c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d310: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x10d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10d314: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x10d314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d318: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D318u;
    {
        const bool branch_taken_0x10d318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D318u;
        // 0x10d31c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d318) {
            ctx->pc = 0x10D328u;
            return;
        }
    }
    ctx->pc = 0x10D320u;
    // 0x10d320: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10D320u;
    {
        const bool branch_taken_0x10d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D320u;
        // 0x10d324: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d320) {
            ctx->pc = 0x10D350u;
            return;
        }
    }
    ctx->pc = 0x10D328u;
}
