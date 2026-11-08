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

// Function: BObjListRemoveObject__FPP8BObjListP5BcObj
// Address: 0x1a10d8 - 0x1a11d0
void BObjListRemoveObject__FPP8BObjListP5BcObj_0x1a10d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BObjListRemoveObject__FPP8BObjListP5BcObj_0x1a10d8");
#endif

    switch (ctx->pc) {
        case 0x1a1108u: goto label_1a1108;
        case 0x1a114cu: goto label_1a114c;
        default: break;
    }

    ctx->pc = 0x1a10d8u;

    // 0x1a10d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a10d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a10dc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1a10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1a10e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a10e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a10e4: 0x2447e530  addiu       $a3, $v0, -0x1AD0
    ctx->pc = 0x1a10e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x1a10e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a10e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a10ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a10ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a10f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a10f4: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A10F4u;
    {
        const bool branch_taken_0x1a10f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10F4u;
        // 0x1a10f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10f4) {
            ctx->pc = 0x1A11BCu;
            goto label_1a11bc;
        }
    }
    ctx->pc = 0x1A10FCu;
    // 0x1a10fc: 0x3c090026  lui         $t1, 0x26
    ctx->pc = 0x1a10fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)38 << 16));
    // 0x1a1100: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a1100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1104: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a1108:
    // 0x1a1108: 0x54450029  bnel        $v0, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A1108u;
    {
        const bool branch_taken_0x1a1108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a1108) {
            ctx->pc = 0x1A110Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1108u;
            // 0x1a110c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A11B0u;
            goto label_1a11b0;
        }
    }
    ctx->pc = 0x1A1110u;
    // 0x1a1110: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1110u;
    {
        const bool branch_taken_0x1a1110 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1110u;
        // 0x1a1114: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1110) {
            ctx->pc = 0x1A1120u;
            goto label_1a1120;
        }
    }
    ctx->pc = 0x1A1118u;
    // 0x1a1118: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1118u;
    {
        const bool branch_taken_0x1a1118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1118u;
        // 0x1a111c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1118) {
            ctx->pc = 0x1A1124u;
            goto label_1a1124;
        }
    }
    ctx->pc = 0x1A1120u;
label_1a1120:
    // 0x1a1120: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a1120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a1124:
    // 0x1a1124: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1a1124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1128: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a1128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a112c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a1130: 0x8c422c08  lw          $v0, 0x2C08($v0)
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11272)));
    // 0x1a1134: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1134u;
    {
        const bool branch_taken_0x1a1134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1134u;
        // 0x1a1138: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1134) {
            ctx->pc = 0x1A1158u;
            goto label_1a1158;
        }
    }
    ctx->pc = 0x1A113Cu;
    // 0x1a113c: 0x25258888  addiu       $a1, $t1, -0x7778
    ctx->pc = 0x1a113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936712));
    // 0x1a1140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1144: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A1144u;
    SET_GPR_U32(ctx, 31, 0x1A114Cu);
    ctx->pc = 0x1A1148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1144u;
    // 0x1a1148: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1144u, 0x1A114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A114Cu;
label_1a114c:
    // 0x1a114c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A114Cu;
    {
        const bool branch_taken_0x1a114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a114c) {
            ctx->pc = 0x1A1164u;
            goto label_1a1164;
        }
    }
    ctx->pc = 0x1A1154u;
    // 0x1a1154: 0x0  nop
    ctx->pc = 0x1a1154u;
    // NOP
label_1a1158:
    // 0x1a1158: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a115c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a115cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1160: 0xac282c08  sw          $t0, 0x2C08($at)
    ctx->pc = 0x1a1160u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 8));
label_1a1164:
    // 0x1a1164: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a1164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a1168: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a116c: 0x8c422c04  lw          $v0, 0x2C04($v0)
    ctx->pc = 0x1a116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x1a1170: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a1170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a1174: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1178: 0x8c632c00  lw          $v1, 0x2C00($v1)
    ctx->pc = 0x1a1178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11264)));
    // 0x1a117c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1180: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1184: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1184u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1188: 0xac202c08  sw          $zero, 0x2C08($at)
    ctx->pc = 0x1a1188u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 0));
    // 0x1a118c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1a118cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1a1190: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1194: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1194u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1198: 0xac222c04  sw          $v0, 0x2C04($at)
    ctx->pc = 0x1a1198u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11268), GPR_U32(ctx, 2));
    // 0x1a119c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a119cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a11a0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a11a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a11a4: 0xac312c00  sw          $s1, 0x2C00($at)
    ctx->pc = 0x1a11a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11264), GPR_U32(ctx, 17));
    // 0x1a11a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A11A8u;
    {
        const bool branch_taken_0x1a11a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11A8u;
        // 0x1a11ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11a8) {
            ctx->pc = 0x1A11C0u;
            goto label_1a11c0;
        }
    }
    ctx->pc = 0x1A11B0u;
label_1a11b0:
    // 0x1a11b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a11b4: 0x5460ffd4  bnel        $v1, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1A11B4u;
    {
        const bool branch_taken_0x1a11b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a11b4) {
            ctx->pc = 0x1A11B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A11B4u;
            // 0x1a11b8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1108;
        }
    }
    ctx->pc = 0x1A11BCu;
label_1a11bc:
    // 0x1a11bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a11bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a11c0:
    // 0x1a11c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a11c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a11c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a11c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a11c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A11C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11C8u;
        // 0x1a11cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A11C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A11D0u;
}
