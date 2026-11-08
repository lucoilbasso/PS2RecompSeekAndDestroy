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

// Function: EffectOtherInit__Fv
// Address: 0x12e3c0 - 0x12e660
void EffectOtherInit__Fv_0x12e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectOtherInit__Fv_0x12e3c0");
#endif

    switch (ctx->pc) {
        case 0x12e404u: goto label_12e404;
        case 0x12e464u: goto label_12e464;
        case 0x12e4d8u: goto label_12e4d8;
        case 0x12e4f0u: goto label_12e4f0;
        case 0x12e504u: goto label_12e504;
        case 0x12e51cu: goto label_12e51c;
        case 0x12e530u: goto label_12e530;
        case 0x12e570u: goto label_12e570;
        case 0x12e57cu: goto label_12e57c;
        case 0x12e598u: goto label_12e598;
        case 0x12e5a4u: goto label_12e5a4;
        case 0x12e5bcu: goto label_12e5bc;
        case 0x12e5d8u: goto label_12e5d8;
        case 0x12e5f4u: goto label_12e5f4;
        case 0x12e618u: goto label_12e618;
        case 0x12e620u: goto label_12e620;
        case 0x12e628u: goto label_12e628;
        case 0x12e630u: goto label_12e630;
        default: break;
    }

    ctx->pc = 0x12e3c0u;

    // 0x12e3c0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x12e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x12e3c4: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12e3c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x12e3c8: 0x24635f20  addiu       $v1, $v1, 0x5F20
    ctx->pc = 0x12e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24352));
    // 0x12e3cc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x12e3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x12e3d0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x12e3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x12e3d4: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x12e3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x12e3d8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x12e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x12e3dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3e0: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x12e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x12e3e4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x12e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x12e3e8: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x12e3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x12e3ec: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x12e3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x12e3f0: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x12e3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x12e3f4: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x12e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x12e3f8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12E3F8u;
    {
        const bool branch_taken_0x12e3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3F8u;
        // 0x12e3fc: 0xffbf00b8  sd          $ra, 0xB8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3f8) {
            ctx->pc = 0x12E460u;
            goto label_12e460;
        }
    }
    ctx->pc = 0x12E400u;
    // 0x12e400: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x12e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_12e404:
    // 0x12e404: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x12e404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12e408: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x12e408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12e40c: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x12e40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12e410: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x12e410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12e414: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x12e414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12e418: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x12e418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12e41c: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x12e41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x12e420: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x12e420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x12e424: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x12e424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e428: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x12e428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e42c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x12e42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e430: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x12e430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e434: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x12e434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e438: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x12e438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e43c: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x12e43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e440: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x12e440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e444: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x12e444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x12e448: 0x0  nop
    ctx->pc = 0x12e448u;
    // NOP
    // 0x12e44c: 0x0  nop
    ctx->pc = 0x12e44cu;
    // NOP
    // 0x12e450: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12E450u;
    {
        const bool branch_taken_0x12e450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E450u;
        // 0x12e454: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e450) {
            ctx->pc = 0x12E404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e404;
        }
    }
    ctx->pc = 0x12E458u;
    // 0x12e458: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12E458u;
    {
        const bool branch_taken_0x12e458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e458) {
            ctx->pc = 0x12E498u;
            goto label_12e498;
        }
    }
    ctx->pc = 0x12E460u;
label_12e460:
    // 0x12e460: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x12e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_12e464:
    // 0x12e464: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x12e464u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e468: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x12e468u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12e46c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x12e46cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12e470: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x12e470u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x12e474: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x12e474u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x12e478: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x12e478u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x12e47c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x12e47cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x12e480: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x12e480u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x12e484: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x12e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x12e488: 0x0  nop
    ctx->pc = 0x12e488u;
    // NOP
    // 0x12e48c: 0x0  nop
    ctx->pc = 0x12e48cu;
    // NOP
    // 0x12e490: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x12E490u;
    {
        const bool branch_taken_0x12e490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E490u;
        // 0x12e494: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e490) {
            ctx->pc = 0x12E464u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e464;
        }
    }
    ctx->pc = 0x12E498u;
label_12e498:
    // 0x12e498: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x12e498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12e49c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x12e49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12e4a0: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x12e4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12e4a4: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x12e4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12e4a8: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x12e4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e4ac: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x12e4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e4b0: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x12e4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e4b4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12e4b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12e4b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4bc: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x12e4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12e4c0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x12e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x12e4c4: 0x245ea150  addiu       $fp, $v0, -0x5EB0
    ctx->pc = 0x12e4c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943056));
    // 0x12e4c8: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x12e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x12e4cc: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x12e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x12e4d0: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x12e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x12e4d4: 0x8c74001c  lw          $s4, 0x1C($v1)
    ctx->pc = 0x12e4d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12e4d8:
    // 0x12e4d8: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x12e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x12e4dc: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x12e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x12e4e0: 0x5e8821  addu        $s1, $v0, $fp
    ctx->pc = 0x12e4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x12e4e4: 0x7d9821  addu        $s3, $v1, $sp
    ctx->pc = 0x12e4e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x12e4e8: 0x2415000d  addiu       $s5, $zero, 0xD
    ctx->pc = 0x12e4e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12e4ec: 0x0  nop
    ctx->pc = 0x12e4ecu;
    // NOP
label_12e4f0:
    // 0x12e4f0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x12e4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e4f4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x12e4f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x12e4f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4fc: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E4FCu;
    SET_GPR_U32(ctx, 31, 0x12E504u);
    ctx->pc = 0x12E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E4FCu;
    // 0x12e500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E4FCu, 0x12E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E504u;
label_12e504:
    // 0x12e504: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e508: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x12e508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12e50c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e510: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x12e510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e514: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E514u;
    SET_GPR_U32(ctx, 31, 0x12E51Cu);
    ctx->pc = 0x12E518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E514u;
    // 0x12e518: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E514u, 0x12E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E51Cu;
label_12e51c:
    // 0x12e51c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e520: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x12e520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12e524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e528: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E528u;
    SET_GPR_U32(ctx, 31, 0x12E530u);
    ctx->pc = 0x12E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E528u;
    // 0x12e52c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E528u, 0x12E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E530u;
label_12e530:
    // 0x12e530: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x12e530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x12e534: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12e534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12e538: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x12e538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x12e53c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12e540: 0x6a1ffeb  bgez        $s5, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12E540u;
    {
        const bool branch_taken_0x12e540 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x12E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E540u;
        // 0x12e544: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e540) {
            ctx->pc = 0x12E4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e4f0;
        }
    }
    ctx->pc = 0x12E548u;
    // 0x12e548: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12e548u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x12e54c: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x12e54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12e550: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x12E550u;
    {
        const bool branch_taken_0x12e550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E550u;
        // 0x12e554: 0x26d60007  addiu       $s6, $s6, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e550) {
            ctx->pc = 0x12E4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e4d8;
        }
    }
    ctx->pc = 0x12E558u;
    // 0x12e558: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x12e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x12e55c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12e55cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e560: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x12e560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x12e564: 0x8c64009c  lw          $a0, 0x9C($v1)
    ctx->pc = 0x12e564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x12e568: 0x8c94001c  lw          $s4, 0x1C($a0)
    ctx->pc = 0x12e568u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x12e56c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12e56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e570:
    // 0x12e570: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e574: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E574u;
    SET_GPR_U32(ctx, 31, 0x12E57Cu);
    ctx->pc = 0x12E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E574u;
    // 0x12e578: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E574u, 0x12E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E57Cu;
label_12e57c:
    // 0x12e57c: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x12e57cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12e580: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x12e580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e584: 0x4c2001f  bltzl       $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x12E584u;
    {
        const bool branch_taken_0x12e584 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x12e584) {
            ctx->pc = 0x12E588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E584u;
            // 0x12e588: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E604u;
            goto label_12e604;
        }
    }
    ctx->pc = 0x12E58Cu;
    // 0x12e58c: 0x24160041  addiu       $s6, $zero, 0x41
    ctx->pc = 0x12e58cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12e590: 0x24150044  addiu       $s5, $zero, 0x44
    ctx->pc = 0x12e590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x12e594: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12e598:
    // 0x12e598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e59c: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E59Cu;
    SET_GPR_U32(ctx, 31, 0x12E5A4u);
    ctx->pc = 0x12E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E59Cu;
    // 0x12e5a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E59Cu, 0x12E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5A4u;
label_12e5a4:
    // 0x12e5a4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x12e5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e5a8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x12e5a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12e5ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e5b4: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E5B4u;
    SET_GPR_U32(ctx, 31, 0x12E5BCu);
    ctx->pc = 0x12E5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5B4u;
    // 0x12e5b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E5B4u, 0x12E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5BCu;
label_12e5bc:
    // 0x12e5bc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E5BCu;
    {
        const bool branch_taken_0x12e5bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5BCu;
        // 0x12e5c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5bc) {
            ctx->pc = 0x12E5D8u;
            goto label_12e5d8;
        }
    }
    ctx->pc = 0x12E5C4u;
    // 0x12e5c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12e5c8: 0x14560003  bne         $v0, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E5C8u;
    {
        const bool branch_taken_0x12e5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x12e5c8) {
            ctx->pc = 0x12E5D8u;
            goto label_12e5d8;
        }
    }
    ctx->pc = 0x12E5D0u;
    // 0x12e5d0: 0xc04b876  jal         func_12E1D8
    ctx->pc = 0x12E5D0u;
    SET_GPR_U32(ctx, 31, 0x12E5D8u);
    ctx->pc = 0x12E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5D0u;
    // 0x12e5d4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E1D8u, 0x12E5D0u, 0x12E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5D8u;
label_12e5d8:
    // 0x12e5d8: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E5D8u;
    {
        const bool branch_taken_0x12e5d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e5d8) {
            ctx->pc = 0x12E5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E5D8u;
            // 0x12e5dc: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E5F8u;
            goto label_12e5f8;
        }
    }
    ctx->pc = 0x12E5E0u;
    // 0x12e5e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12e5e4: 0x54550004  bnel        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E5E4u;
    {
        const bool branch_taken_0x12e5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x12e5e4) {
            ctx->pc = 0x12E5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E5E4u;
            // 0x12e5e8: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E5F8u;
            goto label_12e5f8;
        }
    }
    ctx->pc = 0x12E5ECu;
    // 0x12e5ec: 0xc04b844  jal         func_12E110
    ctx->pc = 0x12E5ECu;
    SET_GPR_U32(ctx, 31, 0x12E5F4u);
    ctx->pc = 0x12E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5ECu;
    // 0x12e5f0: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E110u, 0x12E5ECu, 0x12E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5F4u;
label_12e5f4:
    // 0x12e5f4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x12e5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12e5f8:
    // 0x12e5f8: 0x4c3ffe7  bgezl       $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12E5F8u;
    {
        const bool branch_taken_0x12e5f8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x12e5f8) {
            ctx->pc = 0x12E5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E5F8u;
            // 0x12e5fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e598;
        }
    }
    ctx->pc = 0x12E600u;
    // 0x12e600: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12e600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_12e604:
    // 0x12e604: 0x2a6200d0  slti        $v0, $s3, 0xD0
    ctx->pc = 0x12e604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)208) ? 1 : 0);
    // 0x12e608: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x12E608u;
    {
        const bool branch_taken_0x12e608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e608) {
            ctx->pc = 0x12E60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E608u;
            // 0x12e60c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e570;
        }
    }
    ctx->pc = 0x12E610u;
    // 0x12e610: 0xc048508  jal         func_121420
    ctx->pc = 0x12E610u;
    SET_GPR_U32(ctx, 31, 0x12E618u);
    ctx->pc = 0x121420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121420u, 0x12E610u, 0x12E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E618u;
label_12e618:
    // 0x12e618: 0xc047fb2  jal         func_11FEC8
    ctx->pc = 0x12E618u;
    SET_GPR_U32(ctx, 31, 0x12E620u);
    ctx->pc = 0x11FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FEC8u, 0x12E618u, 0x12E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E620u;
label_12e620:
    // 0x12e620: 0xc0480bc  jal         func_1202F0
    ctx->pc = 0x12E620u;
    SET_GPR_U32(ctx, 31, 0x12E628u);
    ctx->pc = 0x1202F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202F0u, 0x12E620u, 0x12E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E628u;
label_12e628:
    // 0x12e628: 0xc0481a4  jal         func_120690
    ctx->pc = 0x12E628u;
    SET_GPR_U32(ctx, 31, 0x12E630u);
    ctx->pc = 0x120690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120690u, 0x12E628u, 0x12E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E630u;
label_12e630:
    // 0x12e630: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x12e630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12e634: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x12e634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12e638: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x12e638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12e63c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x12e63cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12e640: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x12e640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e644: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x12e644u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e648: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x12e648u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12e64c: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x12e64cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x12e650: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x12e650u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12e654: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x12e654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12e658: 0x3e00008  jr          $ra
    ctx->pc = 0x12E658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E658u;
        // 0x12e65c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E660u;
}
