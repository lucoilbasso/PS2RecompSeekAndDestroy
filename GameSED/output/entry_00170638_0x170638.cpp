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

// Function: entry_00170638
// Address: 0x170638 - 0x1707b0
void entry_00170638_0x170638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170638_0x170638");
#endif

    switch (ctx->pc) {
        case 0x170708u: goto label_170708;
        case 0x170750u: goto label_170750;
        case 0x170760u: goto label_170760;
        case 0x17079cu: goto label_17079c;
        case 0x1707acu: goto label_1707ac;
        default: break;
    }

    ctx->pc = 0x170638u;

label_170638:
    // 0x170638: 0x8f8391a4  lw          $v1, -0x6E5C($gp)
    ctx->pc = 0x170638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x17063c: 0x1132021  addu        $a0, $t0, $s3
    ctx->pc = 0x17063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x170640: 0x1192821  addu        $a1, $t0, $t9
    ctx->pc = 0x170640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x170644: 0x1113021  addu        $a2, $t0, $s1
    ctx->pc = 0x170644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x170648: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x170648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17064c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170650: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x170650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x170654: 0x10f3821  addu        $a3, $t0, $t7
    ctx->pc = 0x170654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x170658: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x170658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17065c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x17065cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x170660: 0x25080044  addiu       $t0, $t0, 0x44
    ctx->pc = 0x170660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
    // 0x170664: 0x8f8291a4  lw          $v0, -0x6E5C($gp)
    ctx->pc = 0x170664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170668: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x170668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x17066c: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x17066cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x170670: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x170670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170674: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x170674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x170678: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x170678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x17067c: 0x8f8391a4  lw          $v1, -0x6E5C($gp)
    ctx->pc = 0x17067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170680: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x170680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x170684: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x170684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x170688: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x170688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17068c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17068cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x170690: 0x8f8491a4  lw          $a0, -0x6E5C($gp)
    ctx->pc = 0x170690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170694: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x170694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x170698: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x170698u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x17069c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x17069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1706a0: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x1706a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x1706a4: 0x561ffe4  bgez        $t3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1706A4u;
    {
        const bool branch_taken_0x1706a4 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1706A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706A4u;
        // 0x1706a8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706a4) {
            ctx->pc = 0x170638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170638;
        }
    }
    ctx->pc = 0x1706ACu;
    // 0x1706ac: 0x8f8891a4  lw          $t0, -0x6E5C($gp)
    ctx->pc = 0x1706acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x1706b0: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x1706b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x1706b4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1706b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1706b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1706b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1706bc: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x1706bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x1706c0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1706c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1706c4: 0x3c090023  lui         $t1, 0x23
    ctx->pc = 0x1706c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)35 << 16));
    // 0x1706c8: 0x35292c80  ori         $t1, $t1, 0x2C80
    ctx->pc = 0x1706c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11392);
    // 0x1706cc: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1706ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1706d0: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1706d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1706d4: 0x34c62800  ori         $a2, $a2, 0x2800
    ctx->pc = 0x1706d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10240);
    // 0x1706d8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1706d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1706dc: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x1706dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x1706e0: 0x34e72980  ori         $a3, $a3, 0x2980
    ctx->pc = 0x1706e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10624);
    // 0x1706e4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1706e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1706e8: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1706e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1706ec: 0x34212b00  ori         $at, $at, 0x2B00
    ctx->pc = 0x1706ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11008);
    // 0x1706f0: 0x284021  addu        $t0, $at, $t0
    ctx->pc = 0x1706f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 8)));
    // 0x1706f4: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x1706f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1706f8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1706f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1706fc: 0x248412a8  addiu       $a0, $a0, 0x12A8
    ctx->pc = 0x1706fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4776));
    // 0x170700: 0xc05cf36  jal         func_173CD8
    ctx->pc = 0x170700u;
    SET_GPR_U32(ctx, 31, 0x170708u);
    ctx->pc = 0x170704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170700u;
    // 0x170704: 0x24110023  addiu       $s1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173CD8u, 0x170700u, 0x170708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170708u;
label_170708:
    // 0x170708: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x170708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x17070c: 0x8f8391a4  lw          $v1, -0x6E5C($gp)
    ctx->pc = 0x17070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x170710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170714: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x170714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x170718: 0x24420900  addiu       $v0, $v0, 0x900
    ctx->pc = 0x170718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
    // 0x17071c: 0x3c0100a8  lui         $at, 0xA8
    ctx->pc = 0x17071cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)168 << 16));
    // 0x170720: 0x34218ec0  ori         $at, $at, 0x8EC0
    ctx->pc = 0x170720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36544);
    // 0x170724: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x170724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x170728: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x170728u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x17072c: 0x26104870  addiu       $s0, $s0, 0x4870
    ctx->pc = 0x17072cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18544));
    // 0x170730: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x170730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x170734: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x170734u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x170738: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x170738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x17073c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x17073cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x170740: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x170740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x170744: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x170744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x170748: 0xc06bc98  jal         func_1AF260
    ctx->pc = 0x170748u;
    SET_GPR_U32(ctx, 31, 0x170750u);
    ctx->pc = 0x17074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170748u;
    // 0x17074c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF260u, 0x170748u, 0x170750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170750u;
label_170750:
    // 0x170750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170758: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x170758u;
    SET_GPR_U32(ctx, 31, 0x170760u);
    ctx->pc = 0x17075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170758u;
    // 0x17075c: 0xaf829198  sw          $v0, -0x6E68($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939032), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x170758u, 0x170760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170760u;
label_170760:
    // 0x170760: 0x8f8391a4  lw          $v1, -0x6E5C($gp)
    ctx->pc = 0x170760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170764: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x170764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x170768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x170768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17076c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x17076cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x170770: 0x3c0100b6  lui         $at, 0xB6
    ctx->pc = 0x170770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)182 << 16));
    // 0x170774: 0x34215700  ori         $at, $at, 0x5700
    ctx->pc = 0x170774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22272);
    // 0x170778: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x170778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x17077c: 0x244219b8  addiu       $v0, $v0, 0x19B8
    ctx->pc = 0x17077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6584));
    // 0x170780: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x170780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x170784: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x170784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x170788: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x170788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x17078c: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x17078cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x170790: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x170790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x170794: 0xc06bc98  jal         func_1AF260
    ctx->pc = 0x170794u;
    SET_GPR_U32(ctx, 31, 0x17079Cu);
    ctx->pc = 0x170798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170794u;
    // 0x170798: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF260u, 0x170794u, 0x17079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17079Cu;
label_17079c:
    // 0x17079c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17079cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707a0: 0x26851368  addiu       $a1, $s4, 0x1368
    ctx->pc = 0x1707a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4968));
    // 0x1707a4: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x1707A4u;
    SET_GPR_U32(ctx, 31, 0x1707ACu);
    ctx->pc = 0x1707A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707A4u;
    // 0x1707a8: 0xaf82919c  sw          $v0, -0x6E64($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x1707A4u, 0x1707ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707ACu;
label_1707ac:
    // 0x1707ac: 0xaf808bf0  sw          $zero, -0x7410($gp)
    ctx->pc = 0x1707acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937584), GPR_U32(ctx, 0));
    ctx->pc = 0x1707b0u;
}
