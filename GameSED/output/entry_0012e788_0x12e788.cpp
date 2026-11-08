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

// Function: entry_0012e788
// Address: 0x12e788 - 0x12e7b8
void entry_0012e788_0x12e788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e788_0x12e788");
#endif

    switch (ctx->pc) {
        case 0x12e790u: goto label_12e790;
        case 0x12e7acu: goto label_12e7ac;
        default: break;
    }

    ctx->pc = 0x12e788u;

    // 0x12e788: 0xc04c0be  jal         func_1302F8
    ctx->pc = 0x12E788u;
    SET_GPR_U32(ctx, 31, 0x12E790u);
    ctx->pc = 0x12E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E788u;
    // 0x12e78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1302F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1302F8u, 0x12E788u, 0x12E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E790u;
label_12e790:
    // 0x12e790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12e794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e798: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E798u;
    {
        const bool branch_taken_0x12e798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E798u;
        // 0x12e79c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e798) {
            ctx->pc = 0x12E7B8u;
            return;
        }
    }
    ctx->pc = 0x12E7A0u;
    // 0x12e7a0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x12e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x12e7a4: 0xc04baee  jal         func_12EBB8
    ctx->pc = 0x12E7A4u;
    SET_GPR_U32(ctx, 31, 0x12E7ACu);
    ctx->pc = 0x12E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7A4u;
    // 0x12e7a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBB8u, 0x12E7A4u, 0x12E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7ACu;
label_12e7ac:
    // 0x12e7ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12E7ACu;
    {
        const bool branch_taken_0x12e7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e7ac) {
            ctx->pc = 0x12E7F8u;
            return;
        }
    }
    ctx->pc = 0x12E7B4u;
    // 0x12e7b4: 0x0  nop
    ctx->pc = 0x12e7b4u;
    // NOP
    ctx->pc = 0x12e7b8u;
}
