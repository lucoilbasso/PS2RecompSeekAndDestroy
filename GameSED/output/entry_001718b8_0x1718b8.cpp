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

// Function: entry_001718b8
// Address: 0x1718b8 - 0x17194c
void entry_001718b8_0x1718b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001718b8_0x1718b8");
#endif

    switch (ctx->pc) {
        case 0x1718dcu: goto label_1718dc;
        case 0x171934u: goto label_171934;
        case 0x171944u: goto label_171944;
        default: break;
    }

    ctx->pc = 0x1718b8u;

    // 0x1718b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1718b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1718bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1718bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1718c0: 0x244bd468  addiu       $t3, $v0, -0x2B98
    ctx->pc = 0x1718c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956136));
    // 0x1718c4: 0x89630003  lwl         $v1, 0x3($t3)
    ctx->pc = 0x1718c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1718c8: 0x99630000  lwr         $v1, 0x0($t3)
    ctx->pc = 0x1718c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1718cc: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x1718ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1718d0: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x1718d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1718d4: 0xc05c5e0  jal         func_171780
    ctx->pc = 0x1718D4u;
    SET_GPR_U32(ctx, 31, 0x1718DCu);
    ctx->pc = 0x1718D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1718D4u;
    // 0x1718d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171780u, 0x1718D4u, 0x1718DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1718DCu;
label_1718dc:
    // 0x1718dc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1718dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1718e0: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x1718e0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x1718e4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1718e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1718e8: 0x3c0d2000  lui         $t5, 0x2000
    ctx->pc = 0x1718e8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8192 << 16));
    // 0x1718ec: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1718ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718f0: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x1718f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x1718f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1718f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1718f8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1718f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718fc: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1718fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x171900: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x171900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x171904: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x171904u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171908: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x171908u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17190c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17190cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171910: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x171910u;
    {
        const bool branch_taken_0x171910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171910u;
        // 0x171914: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171910) {
            ctx->pc = 0x171960u;
            return;
        }
    }
    ctx->pc = 0x171918u;
    // 0x171918: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x171918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17191c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x17191cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171920: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x171920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x171924: 0xcc3024  and         $a2, $a2, $t4
    ctx->pc = 0x171924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 12));
    // 0x171928: 0x8d2025  or          $a0, $a0, $t5
    ctx->pc = 0x171928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
    // 0x17192c: 0xc05c750  jal         func_171D40
    ctx->pc = 0x17192Cu;
    SET_GPR_U32(ctx, 31, 0x171934u);
    ctx->pc = 0x171930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17192Cu;
    // 0x171930: 0xcd3025  or          $a2, $a2, $t5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D40u, 0x17192Cu, 0x171934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171934u;
label_171934:
    // 0x171934: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x171934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x171938: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17193c: 0xc05c5e6  jal         func_171798
    ctx->pc = 0x17193Cu;
    SET_GPR_U32(ctx, 31, 0x171944u);
    ctx->pc = 0x171940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17193Cu;
    // 0x171940: 0x24841368  addiu       $a0, $a0, 0x1368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171798u, 0x17193Cu, 0x171944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171944u;
label_171944:
    // 0x171944: 0xc05d6d4  jal         func_175B50
    ctx->pc = 0x171944u;
    SET_GPR_U32(ctx, 31, 0x17194Cu);
    ctx->pc = 0x171948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171944u;
    // 0x171948: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175B50u, 0x171944u, 0x17194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17194Cu;
}
