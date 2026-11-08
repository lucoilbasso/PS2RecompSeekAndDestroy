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

// Function: _extensionAndUserData
// Address: 0x1c23e8 - 0x1c2510
void _extensionAndUserData_0x1c23e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_extensionAndUserData_0x1c23e8");
#endif

    switch (ctx->pc) {
        case 0x1c23e8u: goto label_1c23e8;
        case 0x1c23ecu: goto label_1c23ec;
        case 0x1c23f0u: goto label_1c23f0;
        case 0x1c23f4u: goto label_1c23f4;
        case 0x1c23f8u: goto label_1c23f8;
        case 0x1c23fcu: goto label_1c23fc;
        case 0x1c2400u: goto label_1c2400;
        case 0x1c2404u: goto label_1c2404;
        case 0x1c2408u: goto label_1c2408;
        case 0x1c240cu: goto label_1c240c;
        case 0x1c2410u: goto label_1c2410;
        case 0x1c2414u: goto label_1c2414;
        case 0x1c2418u: goto label_1c2418;
        case 0x1c241cu: goto label_1c241c;
        case 0x1c2420u: goto label_1c2420;
        case 0x1c2424u: goto label_1c2424;
        case 0x1c2428u: goto label_1c2428;
        case 0x1c242cu: goto label_1c242c;
        case 0x1c2430u: goto label_1c2430;
        case 0x1c2434u: goto label_1c2434;
        case 0x1c2438u: goto label_1c2438;
        case 0x1c243cu: goto label_1c243c;
        case 0x1c2440u: goto label_1c2440;
        case 0x1c2444u: goto label_1c2444;
        case 0x1c2448u: goto label_1c2448;
        case 0x1c244cu: goto label_1c244c;
        case 0x1c2450u: goto label_1c2450;
        case 0x1c2454u: goto label_1c2454;
        case 0x1c2458u: goto label_1c2458;
        case 0x1c245cu: goto label_1c245c;
        case 0x1c2460u: goto label_1c2460;
        case 0x1c2464u: goto label_1c2464;
        case 0x1c2468u: goto label_1c2468;
        case 0x1c246cu: goto label_1c246c;
        case 0x1c2470u: goto label_1c2470;
        case 0x1c2474u: goto label_1c2474;
        case 0x1c2478u: goto label_1c2478;
        case 0x1c247cu: goto label_1c247c;
        case 0x1c2480u: goto label_1c2480;
        case 0x1c2484u: goto label_1c2484;
        case 0x1c2488u: goto label_1c2488;
        case 0x1c248cu: goto label_1c248c;
        case 0x1c2490u: goto label_1c2490;
        case 0x1c2494u: goto label_1c2494;
        case 0x1c2498u: goto label_1c2498;
        case 0x1c249cu: goto label_1c249c;
        case 0x1c24a0u: goto label_1c24a0;
        case 0x1c24a4u: goto label_1c24a4;
        case 0x1c24a8u: goto label_1c24a8;
        case 0x1c24acu: goto label_1c24ac;
        case 0x1c24b0u: goto label_1c24b0;
        case 0x1c24b4u: goto label_1c24b4;
        case 0x1c24b8u: goto label_1c24b8;
        case 0x1c24bcu: goto label_1c24bc;
        case 0x1c24c0u: goto label_1c24c0;
        case 0x1c24c4u: goto label_1c24c4;
        case 0x1c24c8u: goto label_1c24c8;
        case 0x1c24ccu: goto label_1c24cc;
        case 0x1c24d0u: goto label_1c24d0;
        case 0x1c24d4u: goto label_1c24d4;
        case 0x1c24d8u: goto label_1c24d8;
        case 0x1c24dcu: goto label_1c24dc;
        case 0x1c24e0u: goto label_1c24e0;
        case 0x1c24e4u: goto label_1c24e4;
        case 0x1c24e8u: goto label_1c24e8;
        case 0x1c24ecu: goto label_1c24ec;
        case 0x1c24f0u: goto label_1c24f0;
        case 0x1c24f4u: goto label_1c24f4;
        case 0x1c24f8u: goto label_1c24f8;
        case 0x1c24fcu: goto label_1c24fc;
        case 0x1c2500u: goto label_1c2500;
        case 0x1c2504u: goto label_1c2504;
        case 0x1c2508u: goto label_1c2508;
        case 0x1c250cu: goto label_1c250c;
        default: break;
    }

    ctx->pc = 0x1c23e8u;

label_1c23e8:
    // 0x1c23e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c23e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1c23ec:
    // 0x1c23ec: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_1c23f0:
    // 0x1c23f0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c23f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1c23f4:
    // 0x1c23f4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1c23f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_1c23f8:
    // 0x1c23f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c23f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c23fc:
    // 0x1c23fc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1c23fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1c2400:
    // 0x1c2400: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1c2400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_1c2404:
    // 0x1c2404: 0x241301b2  addiu       $s3, $zero, 0x1B2
    ctx->pc = 0x1c2404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_1c2408:
    // 0x1c2408: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c2408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1c240c:
    // 0x1c240c: 0x241101b5  addiu       $s1, $zero, 0x1B5
    ctx->pc = 0x1c240cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_1c2410:
    // 0x1c2410: 0x2447b620  addiu       $a3, $v0, -0x49E0
    ctx->pc = 0x1c2410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948384));
label_1c2414:
    // 0x1c2414: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1c2414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1c2418:
    // 0x1c2418: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1c2418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1c241c:
    // 0x1c241c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1c241cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1c2420:
    // 0x1c2420: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1c2420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1c2424:
    // 0x1c2424: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1c2424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1c2428:
    // 0x1c2428: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1c2428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1c242c:
    // 0x1c242c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1c242cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2430:
    // 0x1c2430: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1c2430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2434:
    // 0x1c2434: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1c2434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2438:
    // 0x1c2438: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1c2438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c243c:
    // 0x1c243c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1c243cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2440:
    // 0x1c2440: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1c2440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2444:
    // 0x1c2444: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x1c2444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1c2448:
    // 0x1c2448: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x1c2448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1c244c:
    // 0x1c244c: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x1c244cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1c2450:
    // 0x1c2450: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x1c2450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1c2454:
    // 0x1c2454: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x1c2454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_1c2458:
    // 0x1c2458: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x1c2458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c245c:
    // 0x1c245c: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x1c245cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2460:
    // 0x1c2460: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x1c2460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2464:
    // 0x1c2464: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x1c2464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2468:
    // 0x1c2468: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1c2468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_1c246c:
    // 0x1c246c: 0xc07084a  jal         func_1C2128
label_1c2470:
    if (ctx->pc == 0x1C2470u) {
        ctx->pc = 0x1C2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C246Cu;
        // 0x1c2470: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2474u;
        goto label_1c2474;
    }
    ctx->pc = 0x1C246Cu;
    SET_GPR_U32(ctx, 31, 0x1C2474u);
    ctx->pc = 0x1C2470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C246Cu;
    // 0x1c2470: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2128u, 0x1C246Cu, 0x1C2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2474u;
label_1c2474:
    // 0x1c2474: 0x10000019  b           . + 4 + (0x19 << 2)
label_1c2478:
    if (ctx->pc == 0x1C2478u) {
        ctx->pc = 0x1C2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2474u;
        // 0x1c2478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C247Cu;
        goto label_1c247c;
    }
    ctx->pc = 0x1C2474u;
    {
        const bool branch_taken_0x1c2474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2474u;
        // 0x1c2478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2474) {
            ctx->pc = 0x1C24DCu;
            goto label_1c24dc;
        }
    }
    ctx->pc = 0x1C247Cu;
label_1c247c:
    // 0x1c247c: 0x0  nop
    ctx->pc = 0x1c247cu;
    // NOP
label_1c2480:
    // 0x1c2480: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
label_1c2484:
    if (ctx->pc == 0x1C2484u) {
        ctx->pc = 0x1C2484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2480u;
        // 0x1c2484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2488u;
        goto label_1c2488;
    }
    ctx->pc = 0x1C2480u;
    {
        const bool branch_taken_0x1c2480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c2480) {
            ctx->pc = 0x1C2484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2480u;
            // 0x1c2484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C24C8u;
            goto label_1c24c8;
        }
    }
    ctx->pc = 0x1C2488u;
label_1c2488:
    // 0x1c2488: 0xc0707ba  jal         func_1C1EE8
label_1c248c:
    if (ctx->pc == 0x1C248Cu) {
        ctx->pc = 0x1C2490u;
        goto label_1c2490;
    }
    ctx->pc = 0x1C2488u;
    SET_GPR_U32(ctx, 31, 0x1C2490u);
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C2488u, 0x1C2490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2490u;
label_1c2490:
    // 0x1c2490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2494:
    // 0x1c2494: 0xc0707f6  jal         func_1C1FD8
label_1c2498:
    if (ctx->pc == 0x1C2498u) {
        ctx->pc = 0x1C2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2494u;
        // 0x1c2498: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C249Cu;
        goto label_1c249c;
    }
    ctx->pc = 0x1C2494u;
    SET_GPR_U32(ctx, 31, 0x1C249Cu);
    ctx->pc = 0x1C2498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2494u;
    // 0x1c2498: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2494u, 0x1C249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C249Cu;
label_1c249c:
    // 0x1c249c: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x1c249cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c24a0:
    // 0x1c24a0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1c24a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1c24a4:
    // 0x1c24a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c24a8:
    // 0x1c24a8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1c24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1c24ac:
    // 0x1c24ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c24acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c24b0:
    // 0x1c24b0: 0x40f809  jalr        $v0
label_1c24b4:
    if (ctx->pc == 0x1C24B4u) {
        ctx->pc = 0x1C24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B0u;
        // 0x1c24b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24B8u;
        goto label_1c24b8;
    }
    ctx->pc = 0x1C24B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C24B8u);
        ctx->pc = 0x1C24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B0u;
        // 0x1c24b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C24B0u, 0x1C24B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C24B8u;
label_1c24b8:
    // 0x1c24b8: 0xc07084a  jal         func_1C2128
label_1c24bc:
    if (ctx->pc == 0x1C24BCu) {
        ctx->pc = 0x1C24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B8u;
        // 0x1c24bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24C0u;
        goto label_1c24c0;
    }
    ctx->pc = 0x1C24B8u;
    SET_GPR_U32(ctx, 31, 0x1C24C0u);
    ctx->pc = 0x1C24BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24B8u;
    // 0x1c24bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2128u, 0x1C24B8u, 0x1C24C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24C0u;
label_1c24c0:
    // 0x1c24c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c24c4:
    if (ctx->pc == 0x1C24C4u) {
        ctx->pc = 0x1C24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24C0u;
        // 0x1c24c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24C8u;
        goto label_1c24c8;
    }
    ctx->pc = 0x1C24C0u;
    {
        const bool branch_taken_0x1c24c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24C0u;
        // 0x1c24c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24c0) {
            ctx->pc = 0x1C24DCu;
            goto label_1c24dc;
        }
    }
    ctx->pc = 0x1C24C8u;
label_1c24c8:
    // 0x1c24c8: 0xc0707ba  jal         func_1C1EE8
label_1c24cc:
    if (ctx->pc == 0x1C24CCu) {
        ctx->pc = 0x1C24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24C8u;
        // 0x1c24cc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24D0u;
        goto label_1c24d0;
    }
    ctx->pc = 0x1C24C8u;
    SET_GPR_U32(ctx, 31, 0x1C24D0u);
    ctx->pc = 0x1C24CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24C8u;
    // 0x1c24cc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C24C8u, 0x1C24D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24D0u;
label_1c24d0:
    // 0x1c24d0: 0xc07084a  jal         func_1C2128
label_1c24d4:
    if (ctx->pc == 0x1C24D4u) {
        ctx->pc = 0x1C24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24D0u;
        // 0x1c24d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24D8u;
        goto label_1c24d8;
    }
    ctx->pc = 0x1C24D0u;
    SET_GPR_U32(ctx, 31, 0x1C24D8u);
    ctx->pc = 0x1C24D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24D0u;
    // 0x1c24d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2128u, 0x1C24D0u, 0x1C24D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24D8u;
label_1c24d8:
    // 0x1c24d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c24d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c24dc:
    // 0x1c24dc: 0xc070778  jal         func_1C1DE0
label_1c24e0:
    if (ctx->pc == 0x1C24E0u) {
        ctx->pc = 0x1C24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24DCu;
        // 0x1c24e0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24E4u;
        goto label_1c24e4;
    }
    ctx->pc = 0x1C24DCu;
    SET_GPR_U32(ctx, 31, 0x1C24E4u);
    ctx->pc = 0x1C24E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24DCu;
    // 0x1c24e0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DE0u, 0x1C24DCu, 0x1C24E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24E4u;
label_1c24e4:
    // 0x1c24e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c24e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c24e8:
    // 0x1c24e8: 0x1051ffe7  beq         $v0, $s1, . + 4 + (-0x19 << 2)
label_1c24ec:
    if (ctx->pc == 0x1C24ECu) {
        ctx->pc = 0x1C24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24E8u;
        // 0x1c24ec: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24F0u;
        goto label_1c24f0;
    }
    ctx->pc = 0x1C24E8u;
    {
        const bool branch_taken_0x1c24e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24E8u;
        // 0x1c24ec: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24e8) {
            ctx->pc = 0x1C2488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2488;
        }
    }
    ctx->pc = 0x1C24F0u;
label_1c24f0:
    // 0x1c24f0: 0x1053ffe3  beq         $v0, $s3, . + 4 + (-0x1D << 2)
label_1c24f4:
    if (ctx->pc == 0x1C24F4u) {
        ctx->pc = 0x1C24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24F0u;
        // 0x1c24f4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24F8u;
        goto label_1c24f8;
    }
    ctx->pc = 0x1C24F0u;
    {
        const bool branch_taken_0x1c24f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1C24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24F0u;
        // 0x1c24f4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24f0) {
            ctx->pc = 0x1C2480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2480;
        }
    }
    ctx->pc = 0x1C24F8u;
label_1c24f8:
    // 0x1c24f8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1c24f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c24fc:
    // 0x1c24fc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c24fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c2500:
    // 0x1c2500: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1c2500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c2504:
    // 0x1c2504: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c2504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c2508:
    // 0x1c2508: 0x3e00008  jr          $ra
label_1c250c:
    if (ctx->pc == 0x1C250Cu) {
        ctx->pc = 0x1C250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2508u;
        // 0x1c250c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2510u;
        goto label_fallthrough_0x1c2508;
    }
    ctx->pc = 0x1C2508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2508u;
        // 0x1c250c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2508:
    ctx->pc = 0x1C2510u;
}
