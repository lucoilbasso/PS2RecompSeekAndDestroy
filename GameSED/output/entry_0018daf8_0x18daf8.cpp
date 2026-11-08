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

// Function: entry_0018daf8
// Address: 0x18daf8 - 0x18db18
void entry_0018daf8_0x18daf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018daf8_0x18daf8");
#endif

    ctx->pc = 0x18daf8u;

    // 0x18daf8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x18daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x18dafc: 0xae22025c  sw          $v0, 0x25C($s1)
    ctx->pc = 0x18dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 2));
    // 0x18db00: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x18db00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x18db04: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x18db04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x18db08: 0xb2230243  sdl         $v1, 0x243($s1)
    ctx->pc = 0x18db08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 579); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18db0c: 0xb623023c  sdr         $v1, 0x23C($s1)
    ctx->pc = 0x18db0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 572); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18db10: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x18DB10u;
    {
        const bool branch_taken_0x18db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB10u;
        // 0x18db14: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db10) {
            ctx->pc = 0x18DBE8u;
            return;
        }
    }
    ctx->pc = 0x18DB18u;
}
