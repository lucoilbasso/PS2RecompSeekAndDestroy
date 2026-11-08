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

// Function: entry_0018da88
// Address: 0x18da88 - 0x18dad0
void entry_0018da88_0x18da88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018da88_0x18da88");
#endif

    switch (ctx->pc) {
        case 0x18dac8u: goto label_18dac8;
        default: break;
    }

    ctx->pc = 0x18da88u;

    // 0x18da88: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x18da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x18da8c: 0x262402a0  addiu       $a0, $s1, 0x2A0
    ctx->pc = 0x18da8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x18da90: 0x6a230243  ldl         $v1, 0x243($s1)
    ctx->pc = 0x18da90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 579); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x18da94: 0x6e23023c  ldr         $v1, 0x23C($s1)
    ctx->pc = 0x18da94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 572); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x18da98: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x18da98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18da9c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x18da9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18daa0: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x18daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x18daa4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18daa8: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x18daa8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x18daac: 0x1480004d  bnez        $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x18DAACu;
    {
        const bool branch_taken_0x18daac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAACu;
        // 0x18dab0: 0xae23025c  sw          $v1, 0x25C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18daac) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18DAB4u;
    // 0x18dab4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18dab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18dab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dabc: 0x24a58118  addiu       $a1, $a1, -0x7EE8
    ctx->pc = 0x18dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934808));
    // 0x18dac0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18DAC0u;
    SET_GPR_U32(ctx, 31, 0x18DAC8u);
    ctx->pc = 0x18DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAC0u;
    // 0x18dac4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18DAC0u, 0x18DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAC8u;
label_18dac8:
    // 0x18dac8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x18DAC8u;
    {
        const bool branch_taken_0x18dac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAC8u;
        // 0x18dacc: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dac8) {
            ctx->pc = 0x18DBE8u;
            return;
        }
    }
    ctx->pc = 0x18DAD0u;
}
