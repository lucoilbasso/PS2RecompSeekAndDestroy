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

// Function: entry_00157e20
// Address: 0x157e20 - 0x157e80
void entry_00157e20_0x157e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157e20_0x157e20");
#endif

    switch (ctx->pc) {
        case 0x157e40u: goto label_157e40;
        case 0x157e5cu: goto label_157e5c;
        case 0x157e78u: goto label_157e78;
        default: break;
    }

    ctx->pc = 0x157e20u;

    // 0x157e20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x157e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x157e24: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x157E24u;
    {
        const bool branch_taken_0x157e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E24u;
        // 0x157e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e24) {
            ctx->pc = 0x157E80u;
            return;
        }
    }
    ctx->pc = 0x157E2Cu;
    // 0x157e2c: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x157e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x157e30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x157e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e34: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e38: 0xc055fb6  jal         func_157ED8
    ctx->pc = 0x157E38u;
    SET_GPR_U32(ctx, 31, 0x157E40u);
    ctx->pc = 0x157E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E38u;
    // 0x157e3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157ED8u, 0x157E38u, 0x157E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E40u;
label_157e40:
    // 0x157e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x157e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e48: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e4c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x157E4Cu;
    {
        const bool branch_taken_0x157e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E4Cu;
        // 0x157e50: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e4c) {
            ctx->pc = 0x157E9Cu;
            return;
        }
    }
    ctx->pc = 0x157E54u;
    // 0x157e54: 0xc055fb6  jal         func_157ED8
    ctx->pc = 0x157E54u;
    SET_GPR_U32(ctx, 31, 0x157E5Cu);
    ctx->pc = 0x157E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E54u;
    // 0x157e58: 0x8e250160  lw          $a1, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157ED8u, 0x157E54u, 0x157E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E5Cu;
label_157e5c:
    // 0x157e5c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x157E5Cu;
    {
        const bool branch_taken_0x157e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E5Cu;
        // 0x157e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e5c) {
            ctx->pc = 0x157E9Cu;
            return;
        }
    }
    ctx->pc = 0x157E64u;
    // 0x157e64: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x157e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x157e68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x157e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e6c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e70: 0xc056028  jal         func_1580A0
    ctx->pc = 0x157E70u;
    SET_GPR_U32(ctx, 31, 0x157E78u);
    ctx->pc = 0x157E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E70u;
    // 0x157e74: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1580A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1580A0u, 0x157E70u, 0x157E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E78u;
label_157e78:
    // 0x157e78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x157E78u;
    {
        const bool branch_taken_0x157e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e78) {
            ctx->pc = 0x157E94u;
            return;
        }
    }
    ctx->pc = 0x157E80u;
}
