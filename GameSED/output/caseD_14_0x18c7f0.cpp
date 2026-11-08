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

// Function: caseD_14
// Address: 0x18c7f0 - 0x18c820
void caseD_14_0x18c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x18c7f0");
#endif

    switch (ctx->pc) {
        case 0x18c800u: goto label_18c800;
        default: break;
    }

    ctx->pc = 0x18c7f0u;

    // 0x18c7f0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c7f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18c7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7f8: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C7F8u;
    SET_GPR_U32(ctx, 31, 0x18C800u);
    ctx->pc = 0x18C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7F8u;
    // 0x18c7fc: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C7F8u, 0x18C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C800u;
label_18c800:
    // 0x18c800: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x18c800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c804: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x18c804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18c808: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x18c808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x18c80c: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x18c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x18c810: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x18c810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x18c814: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x18C814u;
    {
        const bool branch_taken_0x18c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C814u;
        // 0x18c818: 0xac640018  sw          $a0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c814) {
            ctx->pc = 0x18C8F4u;
            return;
        }
    }
    ctx->pc = 0x18C81Cu;
    // 0x18c81c: 0x0  nop
    ctx->pc = 0x18c81cu;
    // NOP
    ctx->pc = 0x18c820u;
}
