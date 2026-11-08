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

// Function: entry_0010a3f0
// Address: 0x10a3f0 - 0x10a430
void entry_0010a3f0_0x10a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a3f0_0x10a3f0");
#endif

    switch (ctx->pc) {
        case 0x10a410u: goto label_10a410;
        case 0x10a424u: goto label_10a424;
        default: break;
    }

    ctx->pc = 0x10a3f0u;

    // 0x10a3f0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10a3f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a3f8: 0x1067000d  beq         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x10A3F8u;
    {
        const bool branch_taken_0x10a3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x10A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3F8u;
        // 0x10a3fc: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3f8) {
            ctx->pc = 0x10A430u;
            return;
        }
    }
    ctx->pc = 0x10A400u;
    // 0x10a400: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10a404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a408: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A408u;
    SET_GPR_U32(ctx, 31, 0x10A410u);
    ctx->pc = 0x10A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A408u;
    // 0x10a40c: 0x8c500044  lw          $s0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A408u, 0x10A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A410u;
label_10a410:
    // 0x10a410: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10a410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a414: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10a414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a41c: 0xc040438  jal         func_1010E0
    ctx->pc = 0x10A41Cu;
    SET_GPR_U32(ctx, 31, 0x10A424u);
    ctx->pc = 0x10A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A41Cu;
    // 0x10a420: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010E0u, 0x10A41Cu, 0x10A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A424u;
label_10a424:
    // 0x10a424: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10A424u;
    {
        const bool branch_taken_0x10a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A424u;
        // 0x10a428: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a424) {
            ctx->pc = 0x10A478u;
            return;
        }
    }
    ctx->pc = 0x10A42Cu;
    // 0x10a42c: 0x0  nop
    ctx->pc = 0x10a42cu;
    // NOP
    ctx->pc = 0x10a430u;
}
