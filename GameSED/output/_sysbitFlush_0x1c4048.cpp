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

// Function: _sysbitFlush
// Address: 0x1c4048 - 0x1c40e0
void _sysbitFlush_0x1c4048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitFlush_0x1c4048");
#endif

    switch (ctx->pc) {
        case 0x1c4078u: goto label_1c4078;
        default: break;
    }

    ctx->pc = 0x1c4048u;

    // 0x1c4048: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c4048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c404c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x1c404cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c4050: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1c4050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1c4054: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x1c4054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x1c4058: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1c4058u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c405c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1c405cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1c4060: 0x2c640039  sltiu       $a0, $v1, 0x39
    ctx->pc = 0x1c4060u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x1c4064: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C4064u;
    {
        const bool branch_taken_0x1c4064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4064u;
        // 0x1c4068: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4064) {
            ctx->pc = 0x1C40CCu;
            goto label_1c40cc;
        }
    }
    ctx->pc = 0x1C406Cu;
    // 0x1c406c: 0x8cc80024  lw          $t0, 0x24($a2)
    ctx->pc = 0x1c406cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1c4070: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1c4070u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4074: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x1c4074u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_1c4078:
    // 0x1c4078: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1c4078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1c407c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1c407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c4080: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x1c4080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1c4084: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1c4084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c4088: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1c4088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1c408c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x1c408cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c4090: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x1c4090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x1c4094: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c4094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c4098: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c4098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c409c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c409cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c40a0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1c40a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x1c40a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C40A4u;
    {
        const bool branch_taken_0x1c40a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40A4u;
        // 0x1c40a8: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40a4) {
            ctx->pc = 0x1C40B4u;
            goto label_1c40b4;
        }
    }
    ctx->pc = 0x1C40ACu;
    // 0x1c40ac: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1c40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1c40b0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1c40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1c40b4:
    // 0x1c40b4: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x1c40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1c40b8: 0x2c430039  sltiu       $v1, $v0, 0x39
    ctx->pc = 0x1c40b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x1c40bc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C40BCu;
    {
        const bool branch_taken_0x1c40bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40BCu;
        // 0x1c40c0: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40bc) {
            ctx->pc = 0x1C4078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4078;
        }
    }
    ctx->pc = 0x1C40C4u;
    // 0x1c40c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C40C4u;
    {
        const bool branch_taken_0x1c40c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40C4u;
        // 0x1c40c8: 0x149102d  daddu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40c4) {
            ctx->pc = 0x1C40D8u;
            goto label_1c40d8;
        }
    }
    ctx->pc = 0x1C40CCu;
label_1c40cc:
    // 0x1c40cc: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x1c40ccu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1c40d0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1c40d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40d4: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x1c40d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
label_1c40d8:
    // 0x1c40d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C40D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40D8u;
        // 0x1c40dc: 0xfcc20018  sd          $v0, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C40D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C40E0u;
}
