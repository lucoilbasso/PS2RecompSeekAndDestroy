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

// Function: _sceFs_Rcv_Intr
// Address: 0x1b20d8 - 0x1b245c
void _sceFs_Rcv_Intr_0x1b20d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFs_Rcv_Intr_0x1b20d8");
#endif

    switch (ctx->pc) {
        case 0x1b2174u: goto label_1b2174;
        case 0x1b21c0u: goto label_1b21c0;
        case 0x1b21e0u: goto label_1b21e0;
        case 0x1b2200u: goto label_1b2200;
        case 0x1b2250u: goto label_1b2250;
        case 0x1b22acu: goto label_1b22ac;
        case 0x1b23d0u: goto label_1b23d0;
        case 0x1b23d8u: goto label_1b23d8;
        case 0x1b23dcu: goto label_1b23dc;
        case 0x1b2414u: goto label_1b2414;
        case 0x1b244cu: goto label_1b244c;
        default: break;
    }

    ctx->pc = 0x1b20d8u;

    // 0x1b20d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b20dc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b20dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b20e0: 0x8c43aa08  lw          $v1, -0x55F8($v0)
    ctx->pc = 0x1b20e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA08u));
    // 0x1b20e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b20e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b20e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b20ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B20ECu;
    {
        const bool branch_taken_0x1b20ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20ECu;
        // 0x1b20f0: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20ec) {
            ctx->pc = 0x1B20F8u;
            goto label_1b20f8;
        }
    }
    ctx->pc = 0x1B20F4u;
    // 0x1b20f4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1b20f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b20f8:
    // 0x1b20f8: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x1b20f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x1b20fc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b2100: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1b2100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b2104: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b2104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b2108: 0xac45aa00  sw          $a1, -0x5600($v0)
    ctx->pc = 0x1b2108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945280), GPR_U32(ctx, 5));
    // 0x1b210c: 0x2484a700  addiu       $a0, $a0, -0x5900
    ctx->pc = 0x1b210cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944512));
    // 0x1b2110: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1b2110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1b2114: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b2114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b2118: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x1b2118u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1b211c: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x1b211cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1b2120: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x1b2120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1b2124: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x1b2124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b2128: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x1b2128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b212c: 0x8a060007  lwl         $a2, 0x7($s0)
    ctx->pc = 0x1b212cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x1b2130: 0x9a060004  lwr         $a2, 0x4($s0)
    ctx->pc = 0x1b2130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x1b2134: 0xaba60007  swl         $a2, 0x7($sp)
    ctx->pc = 0x1b2134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b2138: 0xbba60004  swr         $a2, 0x4($sp)
    ctx->pc = 0x1b2138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b213c: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x1b213cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1b2140: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x1b2140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1b2144: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x1b2144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b2148: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x1b2148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b214c: 0x8a07000f  lwl         $a3, 0xF($s0)
    ctx->pc = 0x1b214cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x1b2150: 0x9a07000c  lwr         $a3, 0xC($s0)
    ctx->pc = 0x1b2150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x1b2154: 0xaba7000f  swl         $a3, 0xF($sp)
    ctx->pc = 0x1b2154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b2158: 0xbba7000c  swr         $a3, 0xC($sp)
    ctx->pc = 0x1b2158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b215c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2160: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2160u;
    {
        const bool branch_taken_0x1b2160 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2160u;
        // 0x1b2164: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2160) {
            ctx->pc = 0x1B2174u;
            goto label_1b2174;
        }
    }
    ctx->pc = 0x1B2168u;
    // 0x1b2168: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1b2168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b216c: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1B216Cu;
    SET_GPR_U32(ctx, 31, 0x1B2174u);
    ctx->pc = 0x1B2170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B216Cu;
    // 0x1b2170: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1B216Cu, 0x1B2174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2174u;
label_1b2174:
    // 0x1b2174: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b2174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b2178: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x1b2178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1b217c: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x1b217cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1b2180: 0x10600095  beqz        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x1B2180u;
    {
        const bool branch_taken_0x1b2180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2180u;
        // 0x1b2184: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2180) {
            ctx->pc = 0x1B23D8u;
            goto label_1b23d8;
        }
    }
    ctx->pc = 0x1B2188u;
    // 0x1b2188: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b2188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b218c: 0x2442ac20  addiu       $v0, $v0, -0x53E0
    ctx->pc = 0x1b218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
    // 0x1b2190: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2194: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b2194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2198: 0x800008  jr          $a0
    ctx->pc = 0x1B2198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B21A0u: goto label_1b21a0;
            case 0x1B2228u: goto label_1b2228;
            case 0x1B22F4u: goto label_1b22f4;
            case 0x1B2390u: goto label_1b2390;
            case 0x1B23D8u: goto label_1b23d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2198u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B21A0u;
label_1b21a0:
    // 0x1b21a0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b21a4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B21A4u;
    {
        const bool branch_taken_0x1b21a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21A4u;
        // 0x1b21a8: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21a4) {
            ctx->pc = 0x1B21E0u;
            goto label_1b21e0;
        }
    }
    ctx->pc = 0x1B21ACu;
    // 0x1b21ac: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x1b21acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b21b0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B21B0u;
    {
        const bool branch_taken_0x1b21b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21B0u;
        // 0x1b21b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21b0) {
            ctx->pc = 0x1B21E0u;
            goto label_1b21e0;
        }
    }
    ctx->pc = 0x1B21B8u;
    // 0x1b21b8: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x1b21b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1b21bc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1b21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b21c0:
    // 0x1b21c0: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x1b21c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1b21c4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b21c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b21c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b21c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b21cc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b21ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b21d0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1b21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b21d4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1b21d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b21d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B21D8u;
    {
        const bool branch_taken_0x1b21d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21D8u;
        // 0x1b21dc: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21d8) {
            ctx->pc = 0x1B21C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b21c0;
        }
    }
    ctx->pc = 0x1B21E0u;
label_1b21e0:
    // 0x1b21e0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1b21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1b21e4: 0x1840007d  blez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1B21E4u;
    {
        const bool branch_taken_0x1b21e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21E4u;
        // 0x1b21e8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21e4) {
            ctx->pc = 0x1B23DCu;
            goto label_1b23dc;
        }
    }
    ctx->pc = 0x1B21ECu;
    // 0x1b21ec: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x1b21ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1b21f0: 0x1840007a  blez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1B21F0u;
    {
        const bool branch_taken_0x1b21f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21F0u;
        // 0x1b21f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21f0) {
            ctx->pc = 0x1B23DCu;
            goto label_1b23dc;
        }
    }
    ctx->pc = 0x1B21F8u;
    // 0x1b21f8: 0x24e50050  addiu       $a1, $a3, 0x50
    ctx->pc = 0x1b21f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x1b21fc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1b21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b2200:
    // 0x1b2200: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x1b2200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1b2204: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b2204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2208: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b2208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b220c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b220cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b2210: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1b2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1b2214: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1b2214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b2218: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B2218u;
    {
        const bool branch_taken_0x1b2218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2218u;
        // 0x1b221c: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2218) {
            ctx->pc = 0x1B2200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2200;
        }
    }
    ctx->pc = 0x1B2220u;
    // 0x1b2220: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1B2220u;
    {
        const bool branch_taken_0x1b2220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2220u;
        // 0x1b2224: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2220) {
            ctx->pc = 0x1B23DCu;
            goto label_1b23dc;
        }
    }
    ctx->pc = 0x1B2228u;
label_1b2228:
    // 0x1b2228: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x1b2228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1b222c: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x1b222cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1b2230: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x1b2230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b2234: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x1b2234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b2238: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1b2238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1b223c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1b223cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2240: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x1b2240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1b2244: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1b2244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1b2248: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B2248u;
    {
        const bool branch_taken_0x1b2248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2248u;
        // 0x1b224c: 0x26020158  addiu       $v0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2248) {
            ctx->pc = 0x1B22ACu;
            goto label_1b22ac;
        }
    }
    ctx->pc = 0x1B2250u;
label_1b2250:
    // 0x1b2250: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x1b2250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1b2254: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x1b2254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1b2258: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x1b2258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b225c: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x1b225cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b2260: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x1b2260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1b2264: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x1b2264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1b2268: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x1b2268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1b226c: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x1b226cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1b2270: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x1b2270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2274: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x1b2274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2278: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x1b2278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b227c: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x1b227cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2280: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x1b2280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2284: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x1b2284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2288: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x1b2288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b228c: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x1b228cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2290: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1b2290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1b2294: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1b2294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1b2298: 0x0  nop
    ctx->pc = 0x1b2298u;
    // NOP
    // 0x1b229c: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B229Cu;
    {
        const bool branch_taken_0x1b229c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b229c) {
            ctx->pc = 0x1B2250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2250;
        }
    }
    ctx->pc = 0x1B22A4u;
    // 0x1b22a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B22A4u;
    {
        const bool branch_taken_0x1b22a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b22a4) {
            ctx->pc = 0x1B22E0u;
            goto label_1b22e0;
        }
    }
    ctx->pc = 0x1B22ACu;
label_1b22ac:
    // 0x1b22ac: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x1b22acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b22b0: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x1b22b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b22b4: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x1b22b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b22b8: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x1b22b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b22bc: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x1b22bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x1b22c0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1b22c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1b22c4: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x1b22c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x1b22c8: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x1b22c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x1b22cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1b22ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1b22d0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1b22d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1b22d4: 0x0  nop
    ctx->pc = 0x1b22d4u;
    // NOP
    // 0x1b22d8: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B22D8u;
    {
        const bool branch_taken_0x1b22d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b22d8) {
            ctx->pc = 0x1B22ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b22ac;
        }
    }
    ctx->pc = 0x1B22E0u;
label_1b22e0:
    // 0x1b22e0: 0x88880003  lwl         $t0, 0x3($a0)
    ctx->pc = 0x1b22e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1b22e4: 0x98880000  lwr         $t0, 0x0($a0)
    ctx->pc = 0x1b22e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1b22e8: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x1b22e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b22ec: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1B22ECu;
    {
        const bool branch_taken_0x1b22ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22ECu;
        // 0x1b22f0: 0xb8c80000  swr         $t0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22ec) {
            ctx->pc = 0x1B23D8u;
            goto label_1b23d8;
        }
    }
    ctx->pc = 0x1B22F4u;
label_1b22f4:
    // 0x1b22f4: 0x8a060017  lwl         $a2, 0x17($s0)
    ctx->pc = 0x1b22f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x1b22f8: 0x9a060014  lwr         $a2, 0x14($s0)
    ctx->pc = 0x1b22f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x1b22fc: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x1b22fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b2300: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x1b2300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b2304: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2308: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x1b2308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b230c: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x1b230cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b2310: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x1b2310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1b2314: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x1b2314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1b2318: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x1b2318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1b231c: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x1b231cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1b2320: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x1b2320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b2324: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x1b2324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b2328: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1b2328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b232c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1b232cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2330: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x1b2330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2334: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x1b2334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2338: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x1b2338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b233c: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x1b233cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2340: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x1b2340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2344: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x1b2344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2348: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x1b2348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b234c: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x1b234cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b2350: 0x6a040047  ldl         $a0, 0x47($s0)
    ctx->pc = 0x1b2350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1b2354: 0x6e040040  ldr         $a0, 0x40($s0)
    ctx->pc = 0x1b2354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1b2358: 0x6a05004f  ldl         $a1, 0x4F($s0)
    ctx->pc = 0x1b2358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1b235c: 0x6e050048  ldr         $a1, 0x48($s0)
    ctx->pc = 0x1b235cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1b2360: 0x6a060057  ldl         $a2, 0x57($s0)
    ctx->pc = 0x1b2360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b2364: 0x6e060050  ldr         $a2, 0x50($s0)
    ctx->pc = 0x1b2364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b2368: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x1b2368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b236c: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x1b236cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2370: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x1b2370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2374: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x1b2374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2378: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x1b2378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b237c: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x1b237cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2380: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x1b2380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2384: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x1b2384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2388: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B2388u;
    {
        const bool branch_taken_0x1b2388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2388u;
        // 0x1b238c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2388) {
            ctx->pc = 0x1B23DCu;
            goto label_1b23dc;
        }
    }
    ctx->pc = 0x1B2390u;
label_1b2390:
    // 0x1b2390: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x1b2390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x1b2394: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x1b2394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x1b2398: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x1b2398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b239c: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x1b239cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b23a0: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x1b23a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1b23a4: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x1b23a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1b23a8: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x1b23a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b23ac: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x1b23acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b23b0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1b23b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b23b4: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x1b23b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1b23b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B23B8u;
    {
        const bool branch_taken_0x1b23b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23B8u;
        // 0x1b23bc: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23b8) {
            ctx->pc = 0x1B23D0u;
            goto label_1b23d0;
        }
    }
    ctx->pc = 0x1B23C0u;
    // 0x1b23c0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b23c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1b23c4: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1b23c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1b23c8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b23c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b23cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b23ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b23d0:
    // 0x1b23d0: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1B23D0u;
    SET_GPR_U32(ctx, 31, 0x1B23D8u);
    ctx->pc = 0x1B23D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23D0u;
    // 0x1b23d4: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1B23D0u, 0x1B23D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23D8u;
label_1b23d8:
    // 0x1b23d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b23d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b23dc:
    // 0x1b23dc: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B23DCu;
    {
        const bool branch_taken_0x1b23dc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23DCu;
        // 0x1b23e0: 0x3c070025  lui         $a3, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23dc) {
            ctx->pc = 0x1B2444u;
            goto label_1b2444;
        }
    }
    ctx->pc = 0x1B23E4u;
    // 0x1b23e4: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1b23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1b23e8: 0x8ce3a980  lw          $v1, -0x5680($a3)
    ctx->pc = 0x1b23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945152)));
    // 0x1b23ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b23ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1b23f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1b23f4: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B23F4u;
    {
        const bool branch_taken_0x1b23f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23F4u;
        // 0x1b23f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23f4) {
            ctx->pc = 0x1B2410u;
            goto label_1b2410;
        }
    }
    ctx->pc = 0x1B23FCu;
    // 0x1b23fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2400: 0xace2a980  sw          $v0, -0x5680($a3)
    ctx->pc = 0x1b2400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294945152), GPR_U32(ctx, 2));
    // 0x1b2404: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2404u;
    {
        const bool branch_taken_0x1b2404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2404u;
        // 0x1b2408: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2404) {
            ctx->pc = 0x1B2450u;
            goto label_1b2450;
        }
    }
    ctx->pc = 0x1B240Cu;
    // 0x1b240c: 0x0  nop
    ctx->pc = 0x1b240cu;
    // NOP
label_1b2410:
    // 0x1b2410: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b2410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b2414:
    // 0x1b2414: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1b2414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b2418: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2418u;
    {
        const bool branch_taken_0x1b2418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2418u;
        // 0x1b241c: 0x24e2a980  addiu       $v0, $a3, -0x5680 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2418) {
            ctx->pc = 0x1B244Cu;
            goto label_1b244c;
        }
    }
    ctx->pc = 0x1B2420u;
    // 0x1b2420: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1b2420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b2424: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2428: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b2428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b242c: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B242Cu;
    {
        const bool branch_taken_0x1b242c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B242Cu;
        // 0x1b2430: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b242c) {
            ctx->pc = 0x1B2414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2414;
        }
    }
    ctx->pc = 0x1B2434u;
    // 0x1b2434: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b2434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2438: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b2438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b243c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B243Cu;
    {
        const bool branch_taken_0x1b243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B243Cu;
        // 0x1b2440: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b243c) {
            ctx->pc = 0x1B2450u;
            goto label_1b2450;
        }
    }
    ctx->pc = 0x1B2444u;
label_1b2444:
    // 0x1b2444: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1B2444u;
    SET_GPR_U32(ctx, 31, 0x1B244Cu);
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1B2444u, 0x1B244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B244Cu;
label_1b244c:
    // 0x1b244c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b244cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b2450:
    // 0x1b2450: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b2450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2454: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2454u;
        // 0x1b2458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B245Cu;
}
