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

// Function: entry_001a4c98
// Address: 0x1a4c98 - 0x1a4cc8
void entry_001a4c98_0x1a4c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4c98_0x1a4c98");
#endif

    switch (ctx->pc) {
        case 0x1a4cc0u: goto label_1a4cc0;
        default: break;
    }

    ctx->pc = 0x1a4c98u;

label_1a4c98:
    // 0x1a4c98: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x1a4c98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a4c9c:
    // 0x1a4c9c: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x1a4c9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a4ca0:
    // 0x1a4ca0: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x1a4ca0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a4ca4:
    // 0x1a4ca4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4ca8:
    // 0x1a4ca8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a4cac:
    if (ctx->pc == 0x1A4CACu) {
        ctx->pc = 0x1A4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CA8u;
        // 0x1a4cac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CB0u;
        goto label_1a4cb0;
    }
    ctx->pc = 0x1A4CA8u;
    {
        const bool branch_taken_0x1a4ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CA8u;
        // 0x1a4cac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ca8) {
            ctx->pc = 0x1A4CC8u;
            return;
        }
    }
    ctx->pc = 0x1A4CB0u;
label_1a4cb0:
    // 0x1a4cb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a4cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4cb4:
    // 0x1a4cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4cb8:
    // 0x1a4cb8: 0x40f809  jalr        $v0
label_1a4cbc:
    if (ctx->pc == 0x1A4CBCu) {
        ctx->pc = 0x1A4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CB8u;
        // 0x1a4cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CC0u;
        goto label_1a4cc0;
    }
    ctx->pc = 0x1A4CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4CC0u);
        ctx->pc = 0x1A4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CB8u;
        // 0x1a4cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4CB8u, 0x1A4CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4CC0u;
label_1a4cc0:
    // 0x1a4cc0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a4cc4:
    if (ctx->pc == 0x1A4CC4u) {
        ctx->pc = 0x1A4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CC0u;
        // 0x1a4cc4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CC8u;
        goto label_fallthrough_0x1a4cc0;
    }
    ctx->pc = 0x1A4CC0u;
    {
        const bool branch_taken_0x1a4cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CC0u;
        // 0x1a4cc4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cc0) {
            ctx->pc = 0x1A4CF4u;
            return;
        }
    }
label_fallthrough_0x1a4cc0:
    ctx->pc = 0x1A4CC8u;
}
