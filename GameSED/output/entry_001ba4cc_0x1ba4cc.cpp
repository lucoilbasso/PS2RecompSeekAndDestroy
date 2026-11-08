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

// Function: entry_001ba4cc
// Address: 0x1ba4cc - 0x1ba568
void entry_001ba4cc_0x1ba4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba4cc_0x1ba4cc");
#endif

    switch (ctx->pc) {
        case 0x1ba538u: goto label_1ba538;
        case 0x1ba550u: goto label_1ba550;
        default: break;
    }

    ctx->pc = 0x1ba4ccu;

    // 0x1ba4cc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1ba4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1ba4d0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1ba4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ba4d4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1ba4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ba4d8: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x1ba4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ba4dc: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x1ba4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ba4e0: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x1ba4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ba4e4: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x1ba4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ba4e8: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x1ba4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ba4ec: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x1ba4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ba4f0: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x1ba4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba4f4: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x1ba4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba4f8: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x1ba4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba4fc: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x1ba4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba500: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x1ba500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba504: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x1ba504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba508: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x1ba508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba50c: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x1ba50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ba510: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x1ba510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1ba514: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x1ba514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1ba518: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x1ba518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ba51c: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x1ba51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ba520: 0x8e83c090  lw          $v1, -0x3F70($s4)
    ctx->pc = 0x1ba520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
    // 0x1ba524: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BA524u;
    {
        const bool branch_taken_0x1ba524 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA524u;
        // 0x1ba528: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba524) {
            ctx->pc = 0x1BA568u;
            return;
        }
    }
    ctx->pc = 0x1BA52Cu;
    // 0x1ba52c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x1ba52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1ba530: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA530u;
    SET_GPR_U32(ctx, 31, 0x1BA538u);
    ctx->pc = 0x1BA534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA530u;
    // 0x1ba534: 0x2484af38  addiu       $a0, $a0, -0x50C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA530u, 0x1BA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA538u;
label_1ba538:
    // 0x1ba538: 0x8e82c090  lw          $v0, -0x3F70($s4)
    ctx->pc = 0x1ba538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
    // 0x1ba53c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BA53Cu;
    {
        const bool branch_taken_0x1ba53c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA53Cu;
        // 0x1ba540: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba53c) {
            ctx->pc = 0x1BA568u;
            return;
        }
    }
    ctx->pc = 0x1BA544u;
    // 0x1ba544: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1ba544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ba548: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA548u;
    SET_GPR_U32(ctx, 31, 0x1BA550u);
    ctx->pc = 0x1BA54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA548u;
    // 0x1ba54c: 0x2484af48  addiu       $a0, $a0, -0x50B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA548u, 0x1BA550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA550u;
label_1ba550:
    // 0x1ba550: 0x8e82c090  lw          $v0, -0x3F70($s4)
    ctx->pc = 0x1ba550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
    // 0x1ba554: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA554u;
    {
        const bool branch_taken_0x1ba554 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA554u;
        // 0x1ba558: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba554) {
            ctx->pc = 0x1BA568u;
            return;
        }
    }
    ctx->pc = 0x1BA55Cu;
    // 0x1ba55c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1ba55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ba560: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA560u;
    SET_GPR_U32(ctx, 31, 0x1BA568u);
    ctx->pc = 0x1BA564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA560u;
    // 0x1ba564: 0x2484af58  addiu       $a0, $a0, -0x50A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA560u, 0x1BA568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA568u;
}
