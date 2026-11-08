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

// Function: SaveSystem2Package__10ApSavePack
// Address: 0x1148f8 - 0x114af4
void SaveSystem2Package__10ApSavePack_0x1148f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveSystem2Package__10ApSavePack_0x1148f8");
#endif

    switch (ctx->pc) {
        case 0x11491cu: goto label_11491c;
        case 0x1149ccu: goto label_1149cc;
        case 0x114a0cu: goto label_114a0c;
        case 0x114a6cu: goto label_114a6c;
        case 0x114ac4u: goto label_114ac4;
        case 0x114ad8u: goto label_114ad8;
        default: break;
    }

    ctx->pc = 0x1148f8u;

    // 0x1148f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1148f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1148fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1148fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114900: 0x24060c08  addiu       $a2, $zero, 0xC08
    ctx->pc = 0x114900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3080));
    // 0x114904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11490c: 0x8f918d10  lw          $s1, -0x72F0($gp)
    ctx->pc = 0x11490cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
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
            goto label_114a68;
        }
    }
    ctx->pc = 0x114A08u;
    // 0x114a08: 0x26253610  addiu       $a1, $s1, 0x3610
    ctx->pc = 0x114a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 13840));
label_114a0c:
    // 0x114a0c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x114a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x114a10: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x114a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x114a14: 0x68c3000f  ldl         $v1, 0xF($a2)
    ctx->pc = 0x114a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x114a18: 0x6cc30008  ldr         $v1, 0x8($a2)
    ctx->pc = 0x114a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x114a1c: 0x68c40017  ldl         $a0, 0x17($a2)
    ctx->pc = 0x114a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x114a20: 0x6cc40010  ldr         $a0, 0x10($a2)
    ctx->pc = 0x114a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x114a24: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x114a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x114a28: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x114a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x114a2c: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x114a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114a30: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x114a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114a34: 0xb0e3000f  sdl         $v1, 0xF($a3)
    ctx->pc = 0x114a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114a38: 0xb4e30008  sdr         $v1, 0x8($a3)
    ctx->pc = 0x114a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114a3c: 0xb0e40017  sdl         $a0, 0x17($a3)
    ctx->pc = 0x114a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114a40: 0xb4e40010  sdr         $a0, 0x10($a3)
    ctx->pc = 0x114a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114a44: 0xb0e8001f  sdl         $t0, 0x1F($a3)
    ctx->pc = 0x114a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114a48: 0xb4e80018  sdr         $t0, 0x18($a3)
    ctx->pc = 0x114a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114a4c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x114a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x114a50: 0x0  nop
    ctx->pc = 0x114a50u;
    // NOP
    // 0x114a54: 0x0  nop
    ctx->pc = 0x114a54u;
    // NOP
    // 0x114a58: 0x14c5ffec  bne         $a2, $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x114A58u;
    {
        const bool branch_taken_0x114a58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x114A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A58u;
        // 0x114a5c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a58) {
            ctx->pc = 0x114A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114a0c;
        }
    }
    ctx->pc = 0x114A60u;
    // 0x114a60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114A60u;
    {
        const bool branch_taken_0x114a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114a60) {
            ctx->pc = 0x114AA0u;
            goto label_114aa0;
        }
    }
    ctx->pc = 0x114A68u;
label_114a68:
    // 0x114a68: 0x26253610  addiu       $a1, $s1, 0x3610
    ctx->pc = 0x114a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 13840));
label_114a6c:
    // 0x114a6c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x114a6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x114a70: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x114a70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x114a74: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x114a74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x114a78: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x114a78u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x114a7c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x114a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x114a80: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x114a80u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x114a84: 0xfce40010  sd          $a0, 0x10($a3)
    ctx->pc = 0x114a84u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 4));
    // 0x114a88: 0xfce80018  sd          $t0, 0x18($a3)
    ctx->pc = 0x114a88u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 8));
    // 0x114a8c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x114a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x114a90: 0x0  nop
    ctx->pc = 0x114a90u;
    // NOP
    // 0x114a94: 0x0  nop
    ctx->pc = 0x114a94u;
    // NOP
    // 0x114a98: 0x14c5fff4  bne         $a2, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x114A98u;
    {
        const bool branch_taken_0x114a98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x114A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A98u;
        // 0x114a9c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a98) {
            ctx->pc = 0x114A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114a6c;
        }
    }
    ctx->pc = 0x114AA0u;
label_114aa0:
    // 0x114aa0: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x114aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x114aa4: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x114aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x114aa8: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x114aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114aac: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x114aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114ab0: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x114ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x114ab4: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x114ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x114ab8: 0x24a5fb30  addiu       $a1, $a1, -0x4D0
    ctx->pc = 0x114ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966064));
    // 0x114abc: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114ABCu;
    SET_GPR_U32(ctx, 31, 0x114AC4u);
    ctx->pc = 0x114AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114ABCu;
    // 0x114ac0: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114ABCu, 0x114AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AC4u;
label_114ac4:
    // 0x114ac4: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x114ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x114ac8: 0x26040404  addiu       $a0, $s0, 0x404
    ctx->pc = 0x114ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1028));
    // 0x114acc: 0x24a5fcb0  addiu       $a1, $a1, -0x350
    ctx->pc = 0x114accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966448));
    // 0x114ad0: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114AD0u;
    SET_GPR_U32(ctx, 31, 0x114AD8u);
    ctx->pc = 0x114AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114AD0u;
    // 0x114ad4: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114AD0u, 0x114AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AD8u;
label_114ad8:
    // 0x114ad8: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x114ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x114adc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x114adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114ae0: 0xae030c04  sw          $v1, 0xC04($s0)
    ctx->pc = 0x114ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 3));
    // 0x114ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x114ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114aec: 0x3e00008  jr          $ra
    ctx->pc = 0x114AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AECu;
        // 0x114af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114AF4u;
}
