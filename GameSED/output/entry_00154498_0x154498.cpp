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

// Function: entry_00154498
// Address: 0x154498 - 0x1544e0
void entry_00154498_0x154498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154498_0x154498");
#endif

    switch (ctx->pc) {
        case 0x1544a0u: goto label_1544a0;
        case 0x1544c4u: goto label_1544c4;
        case 0x1544d8u: goto label_1544d8;
        default: break;
    }

    ctx->pc = 0x154498u;

    // 0x154498: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154498u;
    SET_GPR_U32(ctx, 31, 0x1544A0u);
    ctx->pc = 0x15449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154498u;
    // 0x15449c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154498u, 0x1544A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544A0u;
label_1544a0:
    // 0x1544a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1544a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1544a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1544a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544a8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1544a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1544ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1544acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1544b0: 0x5043008e  beql        $v0, $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x1544B0u;
    {
        const bool branch_taken_0x1544b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1544b0) {
            ctx->pc = 0x1544B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1544B0u;
            // 0x1544b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1546ECu;
            return;
        }
    }
    ctx->pc = 0x1544B8u;
    // 0x1544b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1544b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544bc: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1544BCu;
    SET_GPR_U32(ctx, 31, 0x1544C4u);
    ctx->pc = 0x1544C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544BCu;
    // 0x1544c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1544BCu, 0x1544C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544C4u;
label_1544c4:
    // 0x1544c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1544c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544c8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1544C8u;
    {
        const bool branch_taken_0x1544c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1544CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544C8u;
        // 0x1544cc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544c8) {
            ctx->pc = 0x1544E0u;
            return;
        }
    }
    ctx->pc = 0x1544D0u;
    // 0x1544d0: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1544D0u;
    SET_GPR_U32(ctx, 31, 0x1544D8u);
    ctx->pc = 0x1544D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544D0u;
    // 0x1544d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1544D0u, 0x1544D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544D8u;
label_1544d8:
    // 0x1544d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1544D8u;
    {
        const bool branch_taken_0x1544d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544D8u;
        // 0x1544dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544d8) {
            ctx->pc = 0x1544F0u;
            return;
        }
    }
    ctx->pc = 0x1544E0u;
}
