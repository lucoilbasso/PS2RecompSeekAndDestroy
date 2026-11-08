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

// Function: entry_00157360
// Address: 0x157360 - 0x157398
void entry_00157360_0x157360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157360_0x157360");
#endif

    switch (ctx->pc) {
        case 0x15736cu: goto label_15736c;
        case 0x15737cu: goto label_15737c;
        case 0x157388u: goto label_157388;
        default: break;
    }

    ctx->pc = 0x157360u;

    // 0x157360: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x157360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x157364: 0xc04171a  jal         func_105C68
    ctx->pc = 0x157364u;
    SET_GPR_U32(ctx, 31, 0x15736Cu);
    ctx->pc = 0x157368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157364u;
    // 0x157368: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x157364u, 0x15736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15736Cu;
label_15736c:
    // 0x15736c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15736Cu;
    {
        const bool branch_taken_0x15736c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15736Cu;
        // 0x157370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15736c) {
            ctx->pc = 0x1573A4u;
            return;
        }
    }
    ctx->pc = 0x157374u;
    // 0x157374: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x157374u;
    SET_GPR_U32(ctx, 31, 0x15737Cu);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x157374u, 0x15737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15737Cu;
label_15737c:
    // 0x15737c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157380: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x157380u;
    SET_GPR_U32(ctx, 31, 0x157388u);
    ctx->pc = 0x157384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157380u;
    // 0x157384: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x157380u, 0x157388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157388u;
label_157388:
    // 0x157388: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x157388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15738c: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15738Cu;
    {
        const bool branch_taken_0x15738c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x157390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15738Cu;
        // 0x157390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15738c) {
            ctx->pc = 0x157398u;
            return;
        }
    }
    ctx->pc = 0x157394u;
    // 0x157394: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x157394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x157398u;
}
