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

// Function: entry_0014efc8
// Address: 0x14efc8 - 0x14efec
void entry_0014efc8_0x14efc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014efc8_0x14efc8");
#endif

    ctx->pc = 0x14efc8u;

    // 0x14efc8: 0x51200011  beql        $t1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x14EFC8u;
    {
        const bool branch_taken_0x14efc8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x14efc8) {
            ctx->pc = 0x14EFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EFC8u;
            // 0x14efcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F010u;
            return;
        }
    }
    ctx->pc = 0x14EFD0u;
    // 0x14efd0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14efd4: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x14efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x14efd8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x14efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x14efdc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EFDCu;
    {
        const bool branch_taken_0x14efdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFDCu;
        // 0x14efe0: 0xae030698  sw          $v1, 0x698($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efdc) {
            ctx->pc = 0x14EFECu;
            return;
        }
    }
    ctx->pc = 0x14EFE4u;
    // 0x14efe4: 0xc0540a4  jal         func_150290
    ctx->pc = 0x14EFE4u;
    SET_GPR_U32(ctx, 31, 0x14EFECu);
    ctx->pc = 0x14EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EFE4u;
    // 0x14efe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150290u, 0x14EFE4u, 0x14EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EFECu;
}
