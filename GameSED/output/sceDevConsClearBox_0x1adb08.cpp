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

// Function: sceDevConsClearBox
// Address: 0x1adb08 - 0x1adbd0
void sceDevConsClearBox_0x1adb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsClearBox_0x1adb08");
#endif

    switch (ctx->pc) {
        case 0x1adb50u: goto label_1adb50;
        case 0x1adb68u: goto label_1adb68;
        case 0x1adb78u: goto label_1adb78;
        default: break;
    }

    ctx->pc = 0x1adb08u;

    // 0x1adb08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1adb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1adb0c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1adb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1adb10: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1adb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1adb14: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1adb14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb18: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1adb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1adb1c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1adb1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb20: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1adb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1adb24: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1adb24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb28: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1adb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1adb2c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1adb2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb30: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1adb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1adb34: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1adb34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1adb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1adb3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1adb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1adb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1adb44: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x1ADB44u;
    {
        const bool branch_taken_0x1adb44 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB44u;
        // 0x1adb48: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb44) {
            ctx->pc = 0x1ADBA4u;
            goto label_1adba4;
        }
    }
    ctx->pc = 0x1ADB4Cu;
    // 0x1adb4c: 0x0  nop
    ctx->pc = 0x1adb4cu;
    // NOP
label_1adb50:
    // 0x1adb50: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1ADB50u;
    {
        const bool branch_taken_0x1adb50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB50u;
        // 0x1adb54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb50) {
            ctx->pc = 0x1ADB90u;
            goto label_1adb90;
        }
    }
    ctx->pc = 0x1ADB58u;
    // 0x1adb58: 0x24d20001  addiu       $s2, $a2, 0x1
    ctx->pc = 0x1adb58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1adb5c: 0x2a68821  addu        $s1, $s5, $a2
    ctx->pc = 0x1adb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x1adb60: 0x2d02821  addu        $a1, $s6, $s0
    ctx->pc = 0x1adb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x1adb64: 0x0  nop
    ctx->pc = 0x1adb64u;
    // NOP
label_1adb68:
    // 0x1adb68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1adb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1adb6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb70: 0xc06b8f8  jal         func_1AE3E0
    ctx->pc = 0x1ADB70u;
    SET_GPR_U32(ctx, 31, 0x1ADB78u);
    ctx->pc = 0x1ADB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB70u;
    // 0x1adb74: 0x24070720  addiu       $a3, $zero, 0x720 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE3E0u, 0x1ADB70u, 0x1ADB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB78u;
label_1adb78:
    // 0x1adb78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1adb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1adb7c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1adb7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1adb80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1ADB80u;
    {
        const bool branch_taken_0x1adb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB80u;
        // 0x1adb84: 0x2d02821  addu        $a1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb80) {
            ctx->pc = 0x1ADB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adb68;
        }
    }
    ctx->pc = 0x1ADB88u;
    // 0x1adb88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADB88u;
    {
        const bool branch_taken_0x1adb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB88u;
        // 0x1adb8c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb88) {
            ctx->pc = 0x1ADB98u;
            goto label_1adb98;
        }
    }
    ctx->pc = 0x1ADB90u;
label_1adb90:
    // 0x1adb90: 0x24d20001  addiu       $s2, $a2, 0x1
    ctx->pc = 0x1adb90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1adb94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1adb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1adb98:
    // 0x1adb98: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x1adb98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1adb9c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1ADB9Cu;
    {
        const bool branch_taken_0x1adb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adb9c) {
            ctx->pc = 0x1ADB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adb50;
        }
    }
    ctx->pc = 0x1ADBA4u;
label_1adba4:
    // 0x1adba4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1adba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1adba8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1adba8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1adbac: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1adbacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1adbb0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1adbb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1adbb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1adbb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adbb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1adbb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adbbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1adbbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adbc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1adbc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adbc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBC8u;
        // 0x1adbcc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADBD0u;
}
