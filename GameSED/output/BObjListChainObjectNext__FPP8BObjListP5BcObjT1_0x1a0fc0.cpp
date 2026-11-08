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

// Function: BObjListChainObjectNext__FPP8BObjListP5BcObjT1
// Address: 0x1a0fc0 - 0x1a10d8
void BObjListChainObjectNext__FPP8BObjListP5BcObjT1_0x1a0fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BObjListChainObjectNext__FPP8BObjListP5BcObjT1_0x1a0fc0");
#endif

    switch (ctx->pc) {
        case 0x1a0fd8u: goto label_1a0fd8;
        case 0x1a1034u: goto label_1a1034;
        default: break;
    }

    ctx->pc = 0x1a0fc0u;

    // 0x1a0fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0fc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0fcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a0fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a0fd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a0fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a0fd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a0fd8:
    // 0x1a0fd8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A0FD8u;
    {
        const bool branch_taken_0x1a0fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FD8u;
        // 0x1a0fdc: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fd8) {
            ctx->pc = 0x1A1004u;
            goto label_1a1004;
        }
    }
    ctx->pc = 0x1A0FE0u;
    // 0x1a0fe0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0fe4: 0x0  nop
    ctx->pc = 0x1a0fe4u;
    // NOP
    // 0x1a0fe8: 0x0  nop
    ctx->pc = 0x1a0fe8u;
    // NOP
    // 0x1a0fec: 0x0  nop
    ctx->pc = 0x1a0fecu;
    // NOP
    // 0x1a0ff0: 0x0  nop
    ctx->pc = 0x1a0ff0u;
    // NOP
    // 0x1a0ff4: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0FF4u;
    {
        const bool branch_taken_0x1a0ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a0ff4) {
            ctx->pc = 0x1A0FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0FF4u;
            // 0x1a0ff8: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0fd8;
        }
    }
    ctx->pc = 0x1A0FFCu;
    // 0x1a0ffc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a0ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1000: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1a1000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_1a1004:
    // 0x1a1004: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1008: 0x2450e530  addiu       $s0, $v0, -0x1AD0
    ctx->pc = 0x1a1008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x1a100c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a1010: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a1014: 0x8c422c08  lw          $v0, 0x2C08($v0)
    ctx->pc = 0x1a1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11272)));
    // 0x1a1018: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1018u;
    {
        const bool branch_taken_0x1a1018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1018u;
        // 0x1a101c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1018) {
            ctx->pc = 0x1A1040u;
            goto label_1a1040;
        }
    }
    ctx->pc = 0x1A1020u;
    // 0x1a1020: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a1024: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1028: 0x24a58888  addiu       $a1, $a1, -0x7778
    ctx->pc = 0x1a1028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    // 0x1a102c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A102Cu;
    SET_GPR_U32(ctx, 31, 0x1A1034u);
    ctx->pc = 0x1A1030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A102Cu;
    // 0x1a1030: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A102Cu, 0x1A1034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1034u;
label_1a1034:
    // 0x1a1034: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1034u;
    {
        const bool branch_taken_0x1a1034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1034) {
            ctx->pc = 0x1A1050u;
            goto label_1a1050;
        }
    }
    ctx->pc = 0x1A103Cu;
    // 0x1a103c: 0x0  nop
    ctx->pc = 0x1a103cu;
    // NOP
label_1a1040:
    // 0x1a1040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1044: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1048: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1048u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a104c: 0xac222c08  sw          $v0, 0x2C08($at)
    ctx->pc = 0x1a104cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 2));
label_1a1050:
    // 0x1a1050: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1a1050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1a1054: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1a1054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a1058: 0x8c842c00  lw          $a0, 0x2C00($a0)
    ctx->pc = 0x1a1058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11264)));
    // 0x1a105c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A105Cu;
    {
        const bool branch_taken_0x1a105c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a105c) {
            ctx->pc = 0x1A1090u;
            goto label_1a1090;
        }
    }
    ctx->pc = 0x1A1064u;
    // 0x1a1064: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a1064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a1068: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a106c: 0x8c422c04  lw          $v0, 0x2C04($v0)
    ctx->pc = 0x1a106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x1a1070: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a1070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1074: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1078: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a107c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a107cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1080: 0xac232c00  sw          $v1, 0x2C00($at)
    ctx->pc = 0x1a1080u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11264), GPR_U32(ctx, 3));
    // 0x1a1084: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1088: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1088u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a108c: 0xac222c04  sw          $v0, 0x2C04($at)
    ctx->pc = 0x1a108cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11268), GPR_U32(ctx, 2));
label_1a1090:
    // 0x1a1090: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1094: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1094u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1098: 0xac202c08  sw          $zero, 0x2C08($at)
    ctx->pc = 0x1a1098u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 0));
    // 0x1a109c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A109Cu;
    {
        const bool branch_taken_0x1a109c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A109Cu;
        // 0x1a10a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a109c) {
            ctx->pc = 0x1A10B8u;
            goto label_1a10b8;
        }
    }
    ctx->pc = 0x1A10A4u;
    // 0x1a10a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a10a8: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x1a10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x1a10ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a10acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a10b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A10B0u;
    {
        const bool branch_taken_0x1a10b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10B0u;
        // 0x1a10b4: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10b0) {
            ctx->pc = 0x1A10BCu;
            goto label_1a10bc;
        }
    }
    ctx->pc = 0x1A10B8u;
label_1a10b8:
    // 0x1a10b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a10b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a10bc:
    // 0x1a10bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a10bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a10c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a10c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a10c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a10c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a10c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a10cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a10ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a10d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A10D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10D0u;
        // 0x1a10d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A10D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A10D8u;
}
