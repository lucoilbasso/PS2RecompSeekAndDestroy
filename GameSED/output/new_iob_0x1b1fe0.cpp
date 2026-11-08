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

// Function: new_iob
// Address: 0x1b1fe0 - 0x1b2068
void new_iob_0x1b1fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("new_iob_0x1b1fe0");
#endif

    switch (ctx->pc) {
        case 0x1b1ff8u: goto label_1b1ff8;
        case 0x1b2000u: goto label_1b2000;
        case 0x1b2020u: goto label_1b2020;
        case 0x1b2034u: goto label_1b2034;
        case 0x1b2050u: goto label_1b2050;
        default: break;
    }

    ctx->pc = 0x1b1fe0u;

    // 0x1b1fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1fe4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b1fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b1fe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1fec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b1ff0: 0xc06c7e0  jal         func_1B1F80
    ctx->pc = 0x1B1FF0u;
    SET_GPR_U32(ctx, 31, 0x1B1FF8u);
    ctx->pc = 0x1B1FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FF0u;
    // 0x1b1ff4: 0x3c110025  lui         $s1, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F80u, 0x1B1FF0u, 0x1B1FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FF8u;
label_1b1ff8:
    // 0x1b1ff8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B1FF8u;
    SET_GPR_U32(ctx, 31, 0x1B2000u);
    ctx->pc = 0x1B1FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FF8u;
    // 0x1b1ffc: 0x8e24aa10  lw          $a0, -0x55F0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B1FF8u, 0x1B2000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2000u;
label_1b2000:
    // 0x1b2000: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b2000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b2004: 0x2470af80  addiu       $s0, $v1, -0x5080
    ctx->pc = 0x1b2004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946688));
    // 0x1b2008: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x1b2008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x1b200c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1b200cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b2010: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B2010u;
    {
        const bool branch_taken_0x1b2010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2010u;
        // 0x1b2014: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2010) {
            ctx->pc = 0x1B2048u;
            goto label_1b2048;
        }
    }
    ctx->pc = 0x1B2018u;
    // 0x1b2018: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b2018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b201c: 0x0  nop
    ctx->pc = 0x1b201cu;
    // NOP
label_1b2020:
    // 0x1b2020: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2020u;
    {
        const bool branch_taken_0x1b2020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2020) {
            ctx->pc = 0x1B2024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2020u;
            // 0x1b2024: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B203Cu;
            goto label_1b203c;
        }
    }
    ctx->pc = 0x1B2028u;
    // 0x1b2028: 0x8e24aa10  lw          $a0, -0x55F0($s1)
    ctx->pc = 0x1b2028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945296)));
    // 0x1b202c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B202Cu;
    SET_GPR_U32(ctx, 31, 0x1B2034u);
    ctx->pc = 0x1B2030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B202Cu;
    // 0x1b2030: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B202Cu, 0x1B2034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2034u;
label_1b2034:
    // 0x1b2034: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2034u;
    {
        const bool branch_taken_0x1b2034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2034u;
        // 0x1b2038: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2034) {
            ctx->pc = 0x1B2054u;
            goto label_1b2054;
        }
    }
    ctx->pc = 0x1B203Cu;
label_1b203c:
    // 0x1b203c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1b203cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b2040: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B2040u;
    {
        const bool branch_taken_0x1b2040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2040) {
            ctx->pc = 0x1B2044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2040u;
            // 0x1b2044: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2020;
        }
    }
    ctx->pc = 0x1B2048u;
label_1b2048:
    // 0x1b2048: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B2048u;
    SET_GPR_U32(ctx, 31, 0x1B2050u);
    ctx->pc = 0x1B204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2048u;
    // 0x1b204c: 0x8e24aa10  lw          $a0, -0x55F0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B2048u, 0x1B2050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2050u;
label_1b2050:
    // 0x1b2050: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2054:
    // 0x1b2054: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2058: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b2058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b205c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b205cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2060: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2060u;
        // 0x1b2064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2068u;
}
