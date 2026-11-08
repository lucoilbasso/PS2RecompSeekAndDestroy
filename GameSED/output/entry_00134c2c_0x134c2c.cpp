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

// Function: entry_00134c2c
// Address: 0x134c2c - 0x134c64
void entry_00134c2c_0x134c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c2c_0x134c2c");
#endif

    switch (ctx->pc) {
        case 0x134c40u: goto label_134c40;
        case 0x134c5cu: goto label_134c5c;
        default: break;
    }

    ctx->pc = 0x134c2cu;

    // 0x134c2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134c30: 0x5071000c  beql        $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x134C30u;
    {
        const bool branch_taken_0x134c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x134c30) {
            ctx->pc = 0x134C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134C30u;
            // 0x134c34: 0x8e63001c  lw          $v1, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C64u;
            return;
        }
    }
    ctx->pc = 0x134C38u;
    // 0x134c38: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x134C38u;
    SET_GPR_U32(ctx, 31, 0x134C40u);
    ctx->pc = 0x134C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C38u;
    // 0x134c3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x134C38u, 0x134C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C40u;
label_134c40:
    // 0x134c40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x134c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c44: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134c48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134c4c: 0x50710005  beql        $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134C4Cu;
    {
        const bool branch_taken_0x134c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x134c4c) {
            ctx->pc = 0x134C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134C4Cu;
            // 0x134c50: 0x8e63001c  lw          $v1, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C64u;
            return;
        }
    }
    ctx->pc = 0x134C54u;
    // 0x134c54: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x134C54u;
    SET_GPR_U32(ctx, 31, 0x134C5Cu);
    ctx->pc = 0x134C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C54u;
    // 0x134c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x134C54u, 0x134C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C5Cu;
label_134c5c:
    // 0x134c5c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x134c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c60: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x134c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->pc = 0x134c64u;
}
