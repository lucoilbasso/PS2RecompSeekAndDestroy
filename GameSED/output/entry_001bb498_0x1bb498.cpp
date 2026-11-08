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

// Function: entry_001bb498
// Address: 0x1bb498 - 0x1bb4c4
void entry_001bb498_0x1bb498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb498_0x1bb498");
#endif

    ctx->pc = 0x1bb498u;

    // 0x1bb498: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x1bb498u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x1bb49c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1bb49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1bb4a0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1bb4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1bb4a4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1bb4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1bb4a8: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x1bb4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb4ac: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x1bb4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb4b0: 0x8e63c090  lw          $v1, -0x3F70($s3)
    ctx->pc = 0x1bb4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951056)));
    // 0x1bb4b4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB4B4u;
    {
        const bool branch_taken_0x1bb4b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4B4u;
        // 0x1bb4b8: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4b4) {
            ctx->pc = 0x1BB4C4u;
            return;
        }
    }
    ctx->pc = 0x1BB4BCu;
    // 0x1bb4bc: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BB4BCu;
    SET_GPR_U32(ctx, 31, 0x1BB4C4u);
    ctx->pc = 0x1BB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4BCu;
    // 0x1bb4c0: 0x2484b0e0  addiu       $a0, $a0, -0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BB4BCu, 0x1BB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4C4u;
}
