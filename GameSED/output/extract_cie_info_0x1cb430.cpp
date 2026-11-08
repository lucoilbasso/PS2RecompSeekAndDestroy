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

// Function: extract_cie_info
// Address: 0x1cb430 - 0x1cb540
void extract_cie_info_0x1cb430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("extract_cie_info_0x1cb430");
#endif

    switch (ctx->pc) {
        case 0x1cb464u: goto label_1cb464;
        case 0x1cb478u: goto label_1cb478;
        case 0x1cb4acu: goto label_1cb4ac;
        case 0x1cb4c0u: goto label_1cb4c0;
        case 0x1cb4e4u: goto label_1cb4e4;
        case 0x1cb4f0u: goto label_1cb4f0;
        case 0x1cb51cu: goto label_1cb51c;
        default: break;
    }

    ctx->pc = 0x1cb430u;

    // 0x1cb430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb434: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cb434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1cb438: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb43c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cb43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cb440: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1cb440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1cb444: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cb444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cb448: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x1cb448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    // 0x1cb44c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cb44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cb450: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cb450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cb454: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1cb454u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cb458: 0x2484000d  addiu       $a0, $a0, 0xD
    ctx->pc = 0x1cb458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13));
    // 0x1cb45c: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1CB45Cu;
    SET_GPR_U32(ctx, 31, 0x1CB464u);
    ctx->pc = 0x1CB460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB45Cu;
    // 0x1cb460: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1CB45Cu, 0x1CB464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB464u;
label_1cb464:
    // 0x1cb464: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB464u;
    {
        const bool branch_taken_0x1cb464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB464u;
        // 0x1cb468: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb464) {
            ctx->pc = 0x1CB498u;
            goto label_1cb498;
        }
    }
    ctx->pc = 0x1CB46Cu;
    // 0x1cb46c: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1cb46cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x1cb470: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1CB470u;
    SET_GPR_U32(ctx, 31, 0x1CB478u);
    ctx->pc = 0x1CB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB470u;
    // 0x1cb474: 0x2605c008  addiu       $a1, $s0, -0x3FF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1CB470u, 0x1CB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB478u;
label_1cb478:
    // 0x1cb478: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB478u;
    {
        const bool branch_taken_0x1cb478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB478u;
        // 0x1cb47c: 0x2403007a  addiu       $v1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb478) {
            ctx->pc = 0x1CB4A0u;
            goto label_1cb4a0;
        }
    }
    ctx->pc = 0x1CB480u;
    // 0x1cb480: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cb480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb484: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1cb484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb488: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB488u;
    {
        const bool branch_taken_0x1cb488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB488u;
        // 0x1cb48c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb488) {
            ctx->pc = 0x1CB4A4u;
            goto label_1cb4a4;
        }
    }
    ctx->pc = 0x1CB490u;
    // 0x1cb490: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1CB490u;
    {
        const bool branch_taken_0x1cb490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB490u;
        // 0x1cb494: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb490) {
            ctx->pc = 0x1CB52Cu;
            goto label_1cb52c;
        }
    }
    ctx->pc = 0x1CB498u;
label_1cb498:
    // 0x1cb498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB498u;
    {
        const bool branch_taken_0x1cb498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB498u;
        // 0x1cb49c: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb498) {
            ctx->pc = 0x1CB4A4u;
            goto label_1cb4a4;
        }
    }
    ctx->pc = 0x1CB4A0u;
label_1cb4a0:
    // 0x1cb4a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cb4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb4a4:
    // 0x1cb4a4: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x1CB4A4u;
    SET_GPR_U32(ctx, 31, 0x1CB4ACu);
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x1CB4A4u, 0x1CB4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4ACu;
label_1cb4ac:
    // 0x1cb4ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cb4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb4b0: 0x2605c008  addiu       $a1, $s0, -0x3FF8
    ctx->pc = 0x1cb4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950920));
    // 0x1cb4b4: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1cb4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cb4b8: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1CB4B8u;
    SET_GPR_U32(ctx, 31, 0x1CB4C0u);
    ctx->pc = 0x1CB4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4B8u;
    // 0x1cb4bc: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1CB4B8u, 0x1CB4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4C0u;
label_1cb4c0:
    // 0x1cb4c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB4C0u;
    {
        const bool branch_taken_0x1cb4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb4c0) {
            ctx->pc = 0x1CB4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB4C0u;
            // 0x1cb4c4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB4D8u;
            goto label_1cb4d8;
        }
    }
    ctx->pc = 0x1CB4C8u;
    // 0x1cb4c8: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x1cb4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1cb4cc: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x1cb4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1cb4d0: 0x26500005  addiu       $s0, $s2, 0x5
    ctx->pc = 0x1cb4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1cb4d4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1cb4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1cb4d8:
    // 0x1cb4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4dc: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB4DCu;
    SET_GPR_U32(ctx, 31, 0x1CB4E4u);
    ctx->pc = 0x1CB4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4DCu;
    // 0x1cb4e0: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB4DCu, 0x1CB4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4E4u;
label_1cb4e4:
    // 0x1cb4e4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x1cb4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1cb4e8: 0xc0729c8  jal         func_1CA720
    ctx->pc = 0x1CB4E8u;
    SET_GPR_U32(ctx, 31, 0x1CB4F0u);
    ctx->pc = 0x1CB4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4E8u;
    // 0x1cb4ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA720u, 0x1CB4E8u, 0x1CB4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4F0u;
label_1cb4f0:
    // 0x1cb4f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1cb4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb4f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4f8: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x1cb4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1cb4fc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1cb4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb500: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1cb500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1cb504: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cb508: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB508u;
    {
        const bool branch_taken_0x1cb508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB508u;
        // 0x1cb50c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb508) {
            ctx->pc = 0x1CB524u;
            goto label_1cb524;
        }
    }
    ctx->pc = 0x1CB510u;
    // 0x1cb510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb514: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB514u;
    SET_GPR_U32(ctx, 31, 0x1CB51Cu);
    ctx->pc = 0x1CB518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB514u;
    // 0x1cb518: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB514u, 0x1CB51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB51Cu;
label_1cb51c:
    // 0x1cb51c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cb51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb520: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1cb520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb524:
    // 0x1cb524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cb524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb528: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cb528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb52c:
    // 0x1cb52c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cb52cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb530: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cb530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb534: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cb534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cb538: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB538u;
        // 0x1cb53c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB540u;
}
