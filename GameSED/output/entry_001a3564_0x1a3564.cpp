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

// Function: entry_001a3564
// Address: 0x1a3564 - 0x1a3590
void entry_001a3564_0x1a3564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3564_0x1a3564");
#endif

    switch (ctx->pc) {
        case 0x1a3584u: goto label_1a3584;
        default: break;
    }

    ctx->pc = 0x1a3564u;

label_1a3564:
    // 0x1a3564: 0x6610018  bgez        $s3, . + 4 + (0x18 << 2)
label_1a3568:
    if (ctx->pc == 0x1A3568u) {
        ctx->pc = 0x1A356Cu;
        goto label_1a356c;
    }
    ctx->pc = 0x1A3564u;
    {
        const bool branch_taken_0x1a3564 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1a3564) {
            ctx->pc = 0x1A35C8u;
            return;
        }
    }
    ctx->pc = 0x1A356Cu;
label_1a356c:
    // 0x1a356c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1a3570:
    // 0x1a3570: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3574:
    if (ctx->pc == 0x1A3574u) {
        ctx->pc = 0x1A3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3570u;
        // 0x1a3574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3578u;
        goto label_1a3578;
    }
    ctx->pc = 0x1A3570u;
    {
        const bool branch_taken_0x1a3570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3570u;
        // 0x1a3574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3570) {
            ctx->pc = 0x1A3590u;
            return;
        }
    }
    ctx->pc = 0x1A3578u;
label_1a3578:
    // 0x1a3578: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a3578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a357c:
    // 0x1a357c: 0x40f809  jalr        $v0
label_1a3580:
    if (ctx->pc == 0x1A3580u) {
        ctx->pc = 0x1A3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A357Cu;
        // 0x1a3580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3584u;
        goto label_1a3584;
    }
    ctx->pc = 0x1A357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3584u);
        ctx->pc = 0x1A3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A357Cu;
        // 0x1a3580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A357Cu, 0x1A3584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3584u;
label_1a3584:
    // 0x1a3584: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_1a3588:
    if (ctx->pc == 0x1A3588u) {
        ctx->pc = 0x1A3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3584u;
        // 0x1a3588: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A358Cu;
        goto label_1a358c;
    }
    ctx->pc = 0x1A3584u;
    {
        const bool branch_taken_0x1a3584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3584u;
        // 0x1a3588: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3584) {
            ctx->pc = 0x1A3818u;
            return;
        }
    }
    ctx->pc = 0x1A358Cu;
label_1a358c:
    // 0x1a358c: 0x0  nop
    ctx->pc = 0x1a358cu;
    // NOP
    ctx->pc = 0x1a3590u;
}
