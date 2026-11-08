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

// Function: BObjListRemoveAll__FPP8BObjList
// Address: 0x1a1280 - 0x1a1374
void BObjListRemoveAll__FPP8BObjList_0x1a1280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BObjListRemoveAll__FPP8BObjList_0x1a1280");
#endif

    switch (ctx->pc) {
        case 0x1a12c0u: goto label_1a12c0;
        case 0x1a12e8u: goto label_1a12e8;
        default: break;
    }

    ctx->pc = 0x1a1280u;

    // 0x1a1280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a1280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a1284: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1a1284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1a1288: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a1288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a128c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a128cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a1298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a129c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a12a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a12a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a12a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a12a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a12a8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1a12a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a12ac: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A12ACu;
    {
        const bool branch_taken_0x1a12ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12ACu;
        // 0x1a12b0: 0x2442e530  addiu       $v0, $v0, -0x1AD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12ac) {
            ctx->pc = 0x1A134Cu;
            goto label_1a134c;
        }
    }
    ctx->pc = 0x1A12B4u;
    // 0x1a12b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a12b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12b8: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1a12b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1a12bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a12bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a12c0:
    // 0x1a12c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a12c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a12c8: 0x8c422c08  lw          $v0, 0x2C08($v0)
    ctx->pc = 0x1a12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11272)));
    // 0x1a12cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a12ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A12D0u;
    {
        const bool branch_taken_0x1a12d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12D0u;
        // 0x1a12d4: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12d0) {
            ctx->pc = 0x1A12F0u;
            goto label_1a12f0;
        }
    }
    ctx->pc = 0x1A12D8u;
    // 0x1a12d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a12d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12dc: 0x26a58888  addiu       $a1, $s5, -0x7778
    ctx->pc = 0x1a12dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936712));
    // 0x1a12e0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A12E0u;
    SET_GPR_U32(ctx, 31, 0x1A12E8u);
    ctx->pc = 0x1A12E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A12E0u;
    // 0x1a12e4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A12E0u, 0x1A12E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12E8u;
label_1a12e8:
    // 0x1a12e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A12E8u;
    {
        const bool branch_taken_0x1a12e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12e8) {
            ctx->pc = 0x1A12FCu;
            goto label_1a12fc;
        }
    }
    ctx->pc = 0x1A12F0u;
label_1a12f0:
    // 0x1a12f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a12f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a12f4: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a12f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a12f8: 0xac342c08  sw          $s4, 0x2C08($at)
    ctx->pc = 0x1a12f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 20));
label_1a12fc:
    // 0x1a12fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a1300: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a1304: 0x8c422c04  lw          $v0, 0x2C04($v0)
    ctx->pc = 0x1a1304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x1a1308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a130c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a130cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a1310: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1314: 0x8c632c00  lw          $v1, 0x2C00($v1)
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11264)));
    // 0x1a1318: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a131c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a131cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1320: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1320u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1324: 0xac202c08  sw          $zero, 0x2C08($at)
    ctx->pc = 0x1a1324u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 0));
    // 0x1a1328: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1a1328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1a132c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a132cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1330: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1330u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1334: 0xac222c04  sw          $v0, 0x2C04($at)
    ctx->pc = 0x1a1334u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11268), GPR_U32(ctx, 2));
    // 0x1a1338: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a133c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a133cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1340: 0xac322c00  sw          $s2, 0x2C00($at)
    ctx->pc = 0x1a1340u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11264), GPR_U32(ctx, 18));
    // 0x1a1344: 0x1480ffde  bnez        $a0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1A1344u;
    {
        const bool branch_taken_0x1a1344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1344) {
            ctx->pc = 0x1A12C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a12c0;
        }
    }
    ctx->pc = 0x1A134Cu;
label_1a134c:
    // 0x1a134c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1a134cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1a1350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a135c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a135cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1360: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a1360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1364: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a1364u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1368: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a1368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a136c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A136Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A136Cu;
        // 0x1a1370: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A136Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1374u;
}
