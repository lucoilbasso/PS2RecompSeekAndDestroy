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

// Function: entry_0018efa0
// Address: 0x18efa0 - 0x18efcc
void entry_0018efa0_0x18efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018efa0_0x18efa0");
#endif

    switch (ctx->pc) {
        case 0x18efb8u: goto label_18efb8;
        default: break;
    }

    ctx->pc = 0x18efa0u;

    // 0x18efa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18efa4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EFA4u;
    {
        const bool branch_taken_0x18efa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFA4u;
        // 0x18efa8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efa4) {
            ctx->pc = 0x18EFCCu;
            return;
        }
    }
    ctx->pc = 0x18EFACu;
    // 0x18efac: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x18efacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x18efb0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x18EFB0u;
    SET_GPR_U32(ctx, 31, 0x18EFB8u);
    ctx->pc = 0x18EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFB0u;
    // 0x18efb4: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x18EFB0u, 0x18EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EFB8u;
label_18efb8:
    // 0x18efb8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18efb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18efbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18efbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18efc0: 0x24a58158  addiu       $a1, $a1, -0x7EA8
    ctx->pc = 0x18efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934872));
    // 0x18efc4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18EFC4u;
    SET_GPR_U32(ctx, 31, 0x18EFCCu);
    ctx->pc = 0x18EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFC4u;
    // 0x18efc8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18EFC4u, 0x18EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EFCCu;
}
