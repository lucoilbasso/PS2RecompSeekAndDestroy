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

// Function: entry_0012fd04
// Address: 0x12fd04 - 0x12fd38
void entry_0012fd04_0x12fd04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fd04_0x12fd04");
#endif

    ctx->pc = 0x12fd04u;

label_12fd04:
    // 0x12fd04: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_12fd08:
    if (ctx->pc == 0x12FD08u) {
        ctx->pc = 0x12FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD04u;
        // 0x12fd08: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FD0Cu;
        goto label_12fd0c;
    }
    ctx->pc = 0x12FD04u;
    {
        const bool branch_taken_0x12fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD04u;
        // 0x12fd08: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd04) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FD0Cu;
label_12fd0c:
    // 0x12fd0c: 0x8e630108  lw          $v1, 0x108($s3)
    ctx->pc = 0x12fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_12fd10:
    // 0x12fd10: 0x4600068  bltz        $v1, . + 4 + (0x68 << 2)
label_12fd14:
    if (ctx->pc == 0x12FD14u) {
        ctx->pc = 0x12FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD10u;
        // 0x12fd14: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FD18u;
        goto label_12fd18;
    }
    ctx->pc = 0x12FD10u;
    {
        const bool branch_taken_0x12fd10 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD10u;
        // 0x12fd14: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd10) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FD18u;
label_12fd18:
    // 0x12fd18: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_12fd1c:
    if (ctx->pc == 0x12FD1Cu) {
        ctx->pc = 0x12FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD18u;
        // 0x12fd1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12FD20u;
        goto label_12fd20;
    }
    ctx->pc = 0x12FD18u;
    {
        const bool branch_taken_0x12fd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD18u;
        // 0x12fd1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd18) {
            ctx->pc = 0x12FEB8u;
            return;
        }
    }
    ctx->pc = 0x12FD20u;
label_12fd20:
    // 0x12fd20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12fd24:
    // 0x12fd24: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x12fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_12fd28:
    // 0x12fd28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12fd2c:
    // 0x12fd2c: 0x8c6360a0  lw          $v1, 0x60A0($v1)
    ctx->pc = 0x12fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24736)));
label_12fd30:
    // 0x12fd30: 0x600008  jr          $v1
label_12fd34:
    if (ctx->pc == 0x12FD34u) {
        ctx->pc = 0x12FD38u;
        goto label_fallthrough_0x12fd30;
    }
    ctx->pc = 0x12FD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FD30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x12fd30:
    ctx->pc = 0x12FD38u;
}
