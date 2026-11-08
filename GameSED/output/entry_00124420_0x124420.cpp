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

// Function: entry_00124420
// Address: 0x124420 - 0x124448
void entry_00124420_0x124420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124420_0x124420");
#endif

    switch (ctx->pc) {
        case 0x124428u: goto label_124428;
        case 0x124434u: goto label_124434;
        case 0x12443cu: goto label_12443c;
        default: break;
    }

    ctx->pc = 0x124420u;

    // 0x124420: 0xc047ac8  jal         func_11EB20
    ctx->pc = 0x124420u;
    SET_GPR_U32(ctx, 31, 0x124428u);
    ctx->pc = 0x124424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124420u;
    // 0x124424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB20u, 0x124420u, 0x124428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124428u;
label_124428:
    // 0x124428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12442c: 0xc0484ae  jal         func_1212B8
    ctx->pc = 0x12442Cu;
    SET_GPR_U32(ctx, 31, 0x124434u);
    ctx->pc = 0x124430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12442Cu;
    // 0x124430: 0x8e25010c  lw          $a1, 0x10C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1212B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1212B8u, 0x12442Cu, 0x124434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124434u;
label_124434:
    // 0x124434: 0xc048d8e  jal         func_123638
    ctx->pc = 0x124434u;
    SET_GPR_U32(ctx, 31, 0x12443Cu);
    ctx->pc = 0x124438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124434u;
    // 0x124438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123638u, 0x124434u, 0x12443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12443Cu;
label_12443c:
    // 0x12443c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12443Cu;
    {
        const bool branch_taken_0x12443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12443Cu;
        // 0x124440: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12443c) {
            ctx->pc = 0x12444Cu;
            return;
        }
    }
    ctx->pc = 0x124444u;
    // 0x124444: 0x0  nop
    ctx->pc = 0x124444u;
    // NOP
    ctx->pc = 0x124448u;
}
