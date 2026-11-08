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

// Function: entry_00109dd8
// Address: 0x109dd8 - 0x109e18
void entry_00109dd8_0x109dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109dd8_0x109dd8");
#endif

    switch (ctx->pc) {
        case 0x109df8u: goto label_109df8;
        case 0x109e0cu: goto label_109e0c;
        default: break;
    }

    ctx->pc = 0x109dd8u;

    // 0x109dd8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x109dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109ddc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109de0: 0x1067000d  beq         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x109DE0u;
    {
        const bool branch_taken_0x109de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x109DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DE0u;
        // 0x109de4: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109de0) {
            ctx->pc = 0x109E18u;
            return;
        }
    }
    ctx->pc = 0x109DE8u;
    // 0x109de8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x109de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x109dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109df0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109DF0u;
    SET_GPR_U32(ctx, 31, 0x109DF8u);
    ctx->pc = 0x109DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DF0u;
    // 0x109df4: 0x8c500044  lw          $s0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109DF0u, 0x109DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DF8u;
label_109df8:
    // 0x109df8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109dfc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x109dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e04: 0xc040438  jal         func_1010E0
    ctx->pc = 0x109E04u;
    SET_GPR_U32(ctx, 31, 0x109E0Cu);
    ctx->pc = 0x109E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E04u;
    // 0x109e08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010E0u, 0x109E04u, 0x109E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E0Cu;
label_109e0c:
    // 0x109e0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x109E0Cu;
    {
        const bool branch_taken_0x109e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E0Cu;
        // 0x109e10: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e0c) {
            ctx->pc = 0x109E60u;
            return;
        }
    }
    ctx->pc = 0x109E14u;
    // 0x109e14: 0x0  nop
    ctx->pc = 0x109e14u;
    // NOP
    ctx->pc = 0x109e18u;
}
