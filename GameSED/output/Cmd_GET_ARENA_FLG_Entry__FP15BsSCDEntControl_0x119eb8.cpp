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

// Function: Cmd_GET_ARENA_FLG_Entry__FP15BsSCDEntControl
// Address: 0x119eb8 - 0x119f6c
void Cmd_GET_ARENA_FLG_Entry__FP15BsSCDEntControl_0x119eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_ARENA_FLG_Entry__FP15BsSCDEntControl_0x119eb8");
#endif

    switch (ctx->pc) {
        case 0x119ed4u: goto label_119ed4;
        case 0x119ee0u: goto label_119ee0;
        case 0x119f1cu: goto label_119f1c;
        case 0x119f34u: goto label_119f34;
        default: break;
    }

    ctx->pc = 0x119eb8u;

    // 0x119eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119ec0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119ec4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x119ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x119ec8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x119ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x119ecc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119ECCu;
    SET_GPR_U32(ctx, 31, 0x119ED4u);
    ctx->pc = 0x119ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119ECCu;
    // 0x119ed0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119ECCu, 0x119ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119ED4u;
label_119ed4:
    // 0x119ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ed8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119ED8u;
    SET_GPR_U32(ctx, 31, 0x119EE0u);
    ctx->pc = 0x119EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119ED8u;
    // 0x119edc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119ED8u, 0x119EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EE0u;
label_119ee0:
    // 0x119ee0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x119ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x119ee4: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x119ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x119ee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119eec: 0x2e270008  sltiu       $a3, $s1, 0x8
    ctx->pc = 0x119eecu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x119ef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ef4: 0x248442c0  addiu       $a0, $a0, 0x42C0
    ctx->pc = 0x119ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17088));
    // 0x119ef8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x119ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119efc: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x119EFCu;
    {
        const bool branch_taken_0x119efc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EFCu;
        // 0x119f00: 0x2472fcb0  addiu       $s2, $v1, -0x350 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119efc) {
            ctx->pc = 0x119F14u;
            goto label_119f14;
        }
    }
    ctx->pc = 0x119F04u;
    // 0x119f04: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119F04u;
    {
        const bool branch_taken_0x119f04 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x119F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F04u;
        // 0x119f08: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f04) {
            ctx->pc = 0x119F14u;
            goto label_119f14;
        }
    }
    ctx->pc = 0x119F0Cu;
    // 0x119f0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x119F0Cu;
    {
        const bool branch_taken_0x119f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F0Cu;
        // 0x119f10: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f0c) {
            ctx->pc = 0x119F38u;
            goto label_119f38;
        }
    }
    ctx->pc = 0x119F14u;
label_119f14:
    // 0x119f14: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x119F14u;
    SET_GPR_U32(ctx, 31, 0x119F1Cu);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x119F14u, 0x119F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F1Cu;
label_119f1c:
    // 0x119f1c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x119f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x119f20: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x119f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x119f24: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x119f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x119f28: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60
    ctx->pc = 0x119f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
    // 0x119f2c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x119F2Cu;
    SET_GPR_U32(ctx, 31, 0x119F34u);
    ctx->pc = 0x119F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F2Cu;
    // 0x119f30: 0x24060033  addiu       $a2, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x119F2Cu, 0x119F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F34u;
label_119f34:
    // 0x119f34: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x119f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_119f38:
    // 0x119f38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x119f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119f3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119f44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x119f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x119f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119f4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119f50: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x119f54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119f58: 0x8463e150  lh          $v1, -0x1EB0($v1)
    ctx->pc = 0x119f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294959440)));
    // 0x119f5c: 0xae430400  sw          $v1, 0x400($s2)
    ctx->pc = 0x119f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 3));
    // 0x119f60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x119f60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119f64: 0x3e00008  jr          $ra
    ctx->pc = 0x119F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F64u;
        // 0x119f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119F6Cu;
}
