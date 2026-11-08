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

// Function: entry_0018dcc8
// Address: 0x18dcc8 - 0x18dd18
void entry_0018dcc8_0x18dcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dcc8_0x18dcc8");
#endif

    ctx->pc = 0x18dcc8u;

    // 0x18dcc8: 0x8e020244  lw          $v0, 0x244($s0)
    ctx->pc = 0x18dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x18dccc: 0x2611023c  addiu       $s1, $s0, 0x23C
    ctx->pc = 0x18dcccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x18dcd0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18dcd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dcd4: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x18dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x18dcd8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x18dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x18dcdc: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x18dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x18dce0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x18dce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x18dce4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x18dce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x18dce8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x18dce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18dcec: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x18dcecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18dcf0: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x18dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x18dcf4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18dcf8: 0x44202b  sltu        $a0, $v0, $a0
    ctx->pc = 0x18dcf8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x18dcfc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DCFCu;
    {
        const bool branch_taken_0x18dcfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCFCu;
        // 0x18dd00: 0xae02025c  sw          $v0, 0x25C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcfc) {
            ctx->pc = 0x18DD18u;
            return;
        }
    }
    ctx->pc = 0x18DD04u;
    // 0x18dd04: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18dd04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18dd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd0c: 0x24a58118  addiu       $a1, $a1, -0x7EE8
    ctx->pc = 0x18dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934808));
    // 0x18dd10: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18DD10u;
    SET_GPR_U32(ctx, 31, 0x18DD18u);
    ctx->pc = 0x18DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD10u;
    // 0x18dd14: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18DD10u, 0x18DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD18u;
}
