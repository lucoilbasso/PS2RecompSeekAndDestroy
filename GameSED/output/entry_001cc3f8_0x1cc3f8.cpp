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

// Function: entry_001cc3f8
// Address: 0x1cc3f8 - 0x1cc420
void entry_001cc3f8_0x1cc3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc3f8_0x1cc3f8");
#endif

    ctx->pc = 0x1cc3f8u;

    // 0x1cc3f8: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC3F8u;
    {
        const bool branch_taken_0x1cc3f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3f8) {
            ctx->pc = 0x1CC3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC3F8u;
            // 0x1cc3fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC420u;
            return;
        }
    }
    ctx->pc = 0x1CC400u;
    // 0x1cc400: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1cc400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1cc404: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1cc404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1cc408: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1cc408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc40c: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x1cc40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1cc410: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x1cc410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1cc414: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CC414u;
    {
        const bool branch_taken_0x1cc414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC414u;
        // 0x1cc418: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc414) {
            ctx->pc = 0x1CC47Cu;
            return;
        }
    }
    ctx->pc = 0x1CC41Cu;
    // 0x1cc41c: 0x0  nop
    ctx->pc = 0x1cc41cu;
    // NOP
    ctx->pc = 0x1cc420u;
}
