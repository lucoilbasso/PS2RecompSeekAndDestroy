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

// Function: entry_00142ea8
// Address: 0x142ea8 - 0x142ee4
void entry_00142ea8_0x142ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142ea8_0x142ea8");
#endif

    switch (ctx->pc) {
        case 0x142ed0u: goto label_142ed0;
        default: break;
    }

    ctx->pc = 0x142ea8u;

    // 0x142ea8: 0x1520000e  bnez        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x142EA8u;
    {
        const bool branch_taken_0x142ea8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x142EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EA8u;
        // 0x142eac: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ea8) {
            ctx->pc = 0x142EE4u;
            return;
        }
    }
    ctx->pc = 0x142EB0u;
    // 0x142eb0: 0x8e250304  lw          $a1, 0x304($s1)
    ctx->pc = 0x142eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x142eb4: 0x8e260308  lw          $a2, 0x308($s1)
    ctx->pc = 0x142eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
    // 0x142eb8: 0x24846940  addiu       $a0, $a0, 0x6940
    ctx->pc = 0x142eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26944));
    // 0x142ebc: 0x8e27030c  lw          $a3, 0x30C($s1)
    ctx->pc = 0x142ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x142ec0: 0x8e280310  lw          $t0, 0x310($s1)
    ctx->pc = 0x142ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x142ec4: 0x8e290314  lw          $t1, 0x314($s1)
    ctx->pc = 0x142ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x142ec8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x142EC8u;
    SET_GPR_U32(ctx, 31, 0x142ED0u);
    ctx->pc = 0x142ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EC8u;
    // 0x142ecc: 0x8e2a0318  lw          $t2, 0x318($s1) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x142EC8u, 0x142ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142ED0u;
label_142ed0:
    // 0x142ed0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x142ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x142ed4: 0x24a56968  addiu       $a1, $a1, 0x6968
    ctx->pc = 0x142ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26984));
    // 0x142ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142edc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x142EDCu;
    SET_GPR_U32(ctx, 31, 0x142EE4u);
    ctx->pc = 0x142EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EDCu;
    // 0x142ee0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x142EDCu, 0x142EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EE4u;
}
