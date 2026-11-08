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

// Function: SetArg
// Address: 0x1b7038 - 0x1b7150
void SetArg_0x1b7038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetArg_0x1b7038");
#endif

    switch (ctx->pc) {
        case 0x1b708cu: goto label_1b708c;
        case 0x1b70a8u: goto label_1b70a8;
        case 0x1b70b4u: goto label_1b70b4;
        case 0x1b70c8u: goto label_1b70c8;
        case 0x1b70e0u: goto label_1b70e0;
        case 0x1b70f4u: goto label_1b70f4;
        case 0x1b7100u: goto label_1b7100;
        case 0x1b7118u: goto label_1b7118;
        default: break;
    }

    ctx->pc = 0x1b7038u;

    // 0x1b7038: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b7038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b703c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b703cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b7040: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b7040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b7044: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b7044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b7048: 0x8c53bd38  lw          $s3, -0x42C8($v0)
    ctx->pc = 0x1b7048u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x24BD38u));
    // 0x1b704c: 0x2467b208  addiu       $a3, $v1, -0x4DF8
    ctx->pc = 0x1b704cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947336));
    // 0x1b7050: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b7050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b7054: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b7054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b7058: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x1b7058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1b705c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b7060: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b7060u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7064: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b7064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b7068: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b7068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b706c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b7070: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b7070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7074: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b7074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b7078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b707c: 0x8c64b208  lw          $a0, -0x4DF8($v1)
    ctx->pc = 0x1b707cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24B208u));
    // 0x1b7080: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1b7080u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x24B20Cu));
    // 0x1b7084: 0xc06dc0a  jal         func_1B7028
    ctx->pc = 0x1B7084u;
    SET_GPR_U32(ctx, 31, 0x1B708Cu);
    ctx->pc = 0x1B7088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7084u;
    // 0x1b7088: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7028u, 0x1B7084u, 0x1B708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B708Cu;
label_1b708c:
    // 0x1b708c: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x1b708cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b7090: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b7090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b7094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b7094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7098: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x1b7098u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x1b709c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b709cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70a0: 0xc06dbfa  jal         func_1B6FE8
    ctx->pc = 0x1B70A0u;
    SET_GPR_U32(ctx, 31, 0x1B70A8u);
    ctx->pc = 0x1B70A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70A0u;
    // 0x1b70a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE8u, 0x1B70A0u, 0x1B70A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70A8u;
label_1b70a8:
    // 0x1b70a8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1b70a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1b70ac: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x1B70ACu;
    SET_GPR_U32(ctx, 31, 0x1B70B4u);
    ctx->pc = 0x1B70B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70ACu;
    // 0x1b70b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x1B70ACu, 0x1B70B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70B4u;
label_1b70b4:
    // 0x1b70b4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1b70b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b70b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b70b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b70bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b70bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70c0: 0xc06dbfa  jal         func_1B6FE8
    ctx->pc = 0x1B70C0u;
    SET_GPR_U32(ctx, 31, 0x1B70C8u);
    ctx->pc = 0x1B70C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70C0u;
    // 0x1b70c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE8u, 0x1B70C0u, 0x1B70C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70C8u;
label_1b70c8:
    // 0x1b70c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b70c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b70cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1b70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b70d0: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B70D0u;
    {
        const bool branch_taken_0x1b70d0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1B70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70D0u;
        // 0x1b70d4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b70d0) {
            ctx->pc = 0x1B7128u;
            goto label_1b7128;
        }
    }
    ctx->pc = 0x1B70D8u;
    // 0x1b70d8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1b70d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70dc: 0x0  nop
    ctx->pc = 0x1b70dcu;
    // NOP
label_1b70e0:
    // 0x1b70e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b70e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b70e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1b70e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b70ec: 0xc06dbfa  jal         func_1B6FE8
    ctx->pc = 0x1B70ECu;
    SET_GPR_U32(ctx, 31, 0x1B70F4u);
    ctx->pc = 0x1B70F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70ECu;
    // 0x1b70f0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE8u, 0x1B70ECu, 0x1B70F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70F4u;
label_1b70f4:
    // 0x1b70f4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b70f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b70f8: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x1B70F8u;
    SET_GPR_U32(ctx, 31, 0x1B7100u);
    ctx->pc = 0x1B70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70F8u;
    // 0x1b70fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x1B70F8u, 0x1B7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7100u;
label_1b7100:
    // 0x1b7100: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1b7100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b7104: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b7104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b7108: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b7108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b710c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b710cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7110: 0xc06dbfa  jal         func_1B6FE8
    ctx->pc = 0x1B7110u;
    SET_GPR_U32(ctx, 31, 0x1B7118u);
    ctx->pc = 0x1B7114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7110u;
    // 0x1b7114: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE8u, 0x1B7110u, 0x1B7118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7118u;
label_1b7118:
    // 0x1b7118: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b7118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b711c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1b711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b7120: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B7120u;
    {
        const bool branch_taken_0x1b7120 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7120u;
        // 0x1b7124: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7120) {
            ctx->pc = 0x1B70E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b70e0;
        }
    }
    ctx->pc = 0x1B7128u;
label_1b7128:
    // 0x1b7128: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1b7128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b712c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b712cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7130: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b7130u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7134: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b7134u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7138: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b7138u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b713c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b713cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7140: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b7140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7144: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b7144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7148: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7148u;
        // 0x1b714c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7150u;
}
