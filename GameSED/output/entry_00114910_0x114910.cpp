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

// Function: entry_00114910
// Address: 0x114910 - 0x114a0c
void entry_00114910_0x114910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114910_0x114910");
#endif

    switch (ctx->pc) {
        case 0x11491cu: goto label_11491c;
        case 0x1149ccu: goto label_1149cc;
        default: break;
    }

    ctx->pc = 0x114910u;

    // 0x114910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114914: 0xc067294  jal         func_19CA50
    ctx->pc = 0x114914u;
    SET_GPR_U32(ctx, 31, 0x11491Cu);
    ctx->pc = 0x114918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114914u;
    // 0x114918: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x114914u, 0x11491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11491Cu;
label_11491c:
    // 0x11491c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x11491cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x114920: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x114920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x114924: 0x34634842  ori         $v1, $v1, 0x4842
    ctx->pc = 0x114924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18498);
    // 0x114928: 0x34425443  ori         $v0, $v0, 0x5443
    ctx->pc = 0x114928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21571);
    // 0x11492c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x11492cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x114930: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x114930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x114934: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x114934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x114938: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x114938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x11493c: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x11493cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x114940: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x114940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x114944: 0x8e29361c  lw          $t1, 0x361C($s1)
    ctx->pc = 0x114944u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13852)));
    // 0x114948: 0x9467044c  lhu         $a3, 0x44C($v1)
    ctx->pc = 0x114948u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x2400FCu));
    // 0x11494c: 0x946a0428  lhu         $t2, 0x428($v1)
    ctx->pc = 0x11494cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)FAST_READ16(0x2400D8u));
    // 0x114950: 0x94620448  lhu         $v0, 0x448($v1)
    ctx->pc = 0x114950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x2400F8u));
    // 0x114954: 0x96283624  lhu         $t0, 0x3624($s1)
    ctx->pc = 0x114954u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 13860)));
    // 0x114958: 0xae090018  sw          $t1, 0x18($s0)
    ctx->pc = 0x114958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 9));
    // 0x11495c: 0xa6070012  sh          $a3, 0x12($s0)
    ctx->pc = 0x11495cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 7));
    // 0x114960: 0x8e233620  lw          $v1, 0x3620($s1)
    ctx->pc = 0x114960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13856)));
    // 0x114964: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x114964u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x114968: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x114968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x11496c: 0xa6080014  sh          $t0, 0x14($s0)
    ctx->pc = 0x11496cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 8));
    // 0x114970: 0xa60a0016  sh          $t2, 0x16($s0)
    ctx->pc = 0x114970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 10));
    // 0x114974: 0x6a2233f7  ldl         $v0, 0x33F7($s1)
    ctx->pc = 0x114974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x114978: 0x6e2233f0  ldr         $v0, 0x33F0($s1)
    ctx->pc = 0x114978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11497c: 0x6a2333ff  ldl         $v1, 0x33FF($s1)
    ctx->pc = 0x11497cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x114980: 0x6e2333f8  ldr         $v1, 0x33F8($s1)
    ctx->pc = 0x114980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x114984: 0x6a273407  ldl         $a3, 0x3407($s1)
    ctx->pc = 0x114984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x114988: 0x6e273400  ldr         $a3, 0x3400($s1)
    ctx->pc = 0x114988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11498c: 0x6a28340f  ldl         $t0, 0x340F($s1)
    ctx->pc = 0x11498cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x114990: 0x6e283408  ldr         $t0, 0x3408($s1)
    ctx->pc = 0x114990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x114994: 0xb2020027  sdl         $v0, 0x27($s0)
    ctx->pc = 0x114994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114998: 0xb6020020  sdr         $v0, 0x20($s0)
    ctx->pc = 0x114998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11499c: 0xb203002f  sdl         $v1, 0x2F($s0)
    ctx->pc = 0x11499cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1149a0: 0xb6030028  sdr         $v1, 0x28($s0)
    ctx->pc = 0x1149a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1149a4: 0xb2070037  sdl         $a3, 0x37($s0)
    ctx->pc = 0x1149a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1149a8: 0xb6070030  sdr         $a3, 0x30($s0)
    ctx->pc = 0x1149a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1149ac: 0xb208003f  sdl         $t0, 0x3F($s0)
    ctx->pc = 0x1149acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1149b0: 0xb6080038  sdr         $t0, 0x38($s0)
    ctx->pc = 0x1149b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1149b4: 0x6a220167  ldl         $v0, 0x167($s1)
    ctx->pc = 0x1149b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1149b8: 0x6e220160  ldr         $v0, 0x160($s1)
    ctx->pc = 0x1149b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1149bc: 0xb2020047  sdl         $v0, 0x47($s0)
    ctx->pc = 0x1149bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1149c0: 0xb6020040  sdr         $v0, 0x40($s0)
    ctx->pc = 0x1149c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1149c4: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x1149C4u;
    SET_GPR_U32(ctx, 31, 0x1149CCu);
    ctx->pc = 0x1149C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149C4u;
    // 0x1149c8: 0x262533d0  addiu       $a1, $s1, 0x33D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 13264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x1149C4u, 0x1149CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149CCu;
label_1149cc:
    // 0x1149cc: 0x8e2333bc  lw          $v1, 0x33BC($s1)
    ctx->pc = 0x1149ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13244)));
    // 0x1149d0: 0x2607007c  addiu       $a3, $s0, 0x7C
    ctx->pc = 0x1149d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1149d4: 0x26263410  addiu       $a2, $s1, 0x3410
    ctx->pc = 0x1149d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 13328));
    // 0x1149d8: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x1149d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x1149dc: 0xc72025  or          $a0, $a2, $a3
    ctx->pc = 0x1149dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1149e0: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x1149e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1149e4: 0x8e2233c0  lw          $v0, 0x33C0($s1)
    ctx->pc = 0x1149e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13248)));
    // 0x1149e8: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1149e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1149ec: 0x8e2333c4  lw          $v1, 0x33C4($s1)
    ctx->pc = 0x1149ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13252)));
    // 0x1149f0: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1149f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1149f4: 0x8e2233c8  lw          $v0, 0x33C8($s1)
    ctx->pc = 0x1149f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13256)));
    // 0x1149f8: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1149f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x1149fc: 0x8e2333cc  lw          $v1, 0x33CC($s1)
    ctx->pc = 0x1149fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13260)));
    // 0x114a00: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x114A00u;
    {
        const bool branch_taken_0x114a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A00u;
        // 0x114a04: 0xae030078  sw          $v1, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a00) {
            ctx->pc = 0x114A68u;
            return;
        }
    }
    ctx->pc = 0x114A08u;
    // 0x114a08: 0x26253610  addiu       $a1, $s1, 0x3610
    ctx->pc = 0x114a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 13840));
    ctx->pc = 0x114a0cu;
}
