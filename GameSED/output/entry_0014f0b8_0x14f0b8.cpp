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

// Function: entry_0014f0b8
// Address: 0x14f0b8 - 0x14f0ec
void entry_0014f0b8_0x14f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f0b8_0x14f0b8");
#endif

    switch (ctx->pc) {
        case 0x14f0d4u: goto label_14f0d4;
        case 0x14f0e8u: goto label_14f0e8;
        default: break;
    }

    ctx->pc = 0x14f0b8u;

    // 0x14f0b8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x14f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x14f0bc: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x14F0BCu;
    {
        const bool branch_taken_0x14f0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f0bc) {
            ctx->pc = 0x14F0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F0BCu;
            // 0x14f0c0: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F124u;
            return;
        }
    }
    ctx->pc = 0x14F0C4u;
    // 0x14f0c4: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f0c8: 0x8e2507f0  lw          $a1, 0x7F0($s1)
    ctx->pc = 0x14f0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
    // 0x14f0cc: 0xc058562  jal         func_161588
    ctx->pc = 0x14F0CCu;
    SET_GPR_U32(ctx, 31, 0x14F0D4u);
    ctx->pc = 0x14F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F0CCu;
    // 0x14f0d0: 0x8e260310  lw          $a2, 0x310($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161588u, 0x14F0CCu, 0x14F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0D4u;
label_14f0d4:
    // 0x14f0d4: 0x8e24076c  lw          $a0, 0x76C($s1)
    ctx->pc = 0x14f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1900)));
    // 0x14f0d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F0D8u;
    {
        const bool branch_taken_0x14f0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f0d8) {
            ctx->pc = 0x14F0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F0D8u;
            // 0x14f0dc: 0x8e220184  lw          $v0, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F0ECu;
            return;
        }
    }
    ctx->pc = 0x14F0E0u;
    // 0x14f0e0: 0xc061944  jal         func_186510
    ctx->pc = 0x14F0E0u;
    SET_GPR_U32(ctx, 31, 0x14F0E8u);
    ctx->pc = 0x186510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186510u, 0x14F0E0u, 0x14F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0E8u;
label_14f0e8:
    // 0x14f0e8: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x14f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    ctx->pc = 0x14f0ecu;
}
