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

// Function: entry_001d61a8
// Address: 0x1d61a8 - 0x1d61c8
void entry_001d61a8_0x1d61a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d61a8_0x1d61a8");
#endif

    switch (ctx->pc) {
        case 0x1d61c0u: goto label_1d61c0;
        default: break;
    }

    ctx->pc = 0x1d61a8u;

    // 0x1d61a8: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x1d61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x1d61ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d61acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d61b0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1d61b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1d61b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d61b8: 0xc07558c  jal         func_1D5630
    ctx->pc = 0x1D61B8u;
    SET_GPR_U32(ctx, 31, 0x1D61C0u);
    ctx->pc = 0x1D61BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D61B8u;
    // 0x1d61bc: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5630u, 0x1D61B8u, 0x1D61C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D61C0u;
label_1d61c0:
    // 0x1d61c0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1d61c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1d61c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1d61c8u;
}
