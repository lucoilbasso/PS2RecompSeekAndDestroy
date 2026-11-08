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

// Function: entry_001a4bb0
// Address: 0x1a4bb0 - 0x1a4bd0
void entry_001a4bb0_0x1a4bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4bb0_0x1a4bb0");
#endif

    switch (ctx->pc) {
        case 0x1a4bc8u: goto label_1a4bc8;
        default: break;
    }

    ctx->pc = 0x1a4bb0u;

label_1a4bb0:
    // 0x1a4bb0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4bb4:
    // 0x1a4bb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a4bb8:
    if (ctx->pc == 0x1A4BB8u) {
        ctx->pc = 0x1A4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BB4u;
        // 0x1a4bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BBCu;
        goto label_1a4bbc;
    }
    ctx->pc = 0x1A4BB4u;
    {
        const bool branch_taken_0x1a4bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BB4u;
        // 0x1a4bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bb4) {
            ctx->pc = 0x1A4BD0u;
            return;
        }
    }
    ctx->pc = 0x1A4BBCu;
label_1a4bbc:
    // 0x1a4bbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a4bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4bc0:
    // 0x1a4bc0: 0x40f809  jalr        $v0
label_1a4bc4:
    if (ctx->pc == 0x1A4BC4u) {
        ctx->pc = 0x1A4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BC0u;
        // 0x1a4bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BC8u;
        goto label_1a4bc8;
    }
    ctx->pc = 0x1A4BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4BC8u);
        ctx->pc = 0x1A4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BC0u;
        // 0x1a4bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BC0u, 0x1A4BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4BC8u;
label_1a4bc8:
    // 0x1a4bc8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a4bcc:
    if (ctx->pc == 0x1A4BCCu) {
        ctx->pc = 0x1A4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BC8u;
        // 0x1a4bcc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BD0u;
        goto label_fallthrough_0x1a4bc8;
    }
    ctx->pc = 0x1A4BC8u;
    {
        const bool branch_taken_0x1a4bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BC8u;
        // 0x1a4bcc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bc8) {
            ctx->pc = 0x1A4BFCu;
            return;
        }
    }
label_fallthrough_0x1a4bc8:
    ctx->pc = 0x1A4BD0u;
}
