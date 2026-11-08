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

// Function: CounterReceive__7ApcTankP7WcActori
// Address: 0x155e28 - 0x155e88
void CounterReceive__7ApcTankP7WcActori_0x155e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CounterReceive__7ApcTankP7WcActori_0x155e28");
#endif

    switch (ctx->pc) {
        case 0x155e28u: goto label_155e28;
        case 0x155e2cu: goto label_155e2c;
        case 0x155e30u: goto label_155e30;
        case 0x155e34u: goto label_155e34;
        case 0x155e38u: goto label_155e38;
        case 0x155e3cu: goto label_155e3c;
        case 0x155e40u: goto label_155e40;
        case 0x155e44u: goto label_155e44;
        case 0x155e48u: goto label_155e48;
        case 0x155e4cu: goto label_155e4c;
        case 0x155e50u: goto label_155e50;
        case 0x155e54u: goto label_155e54;
        case 0x155e58u: goto label_155e58;
        case 0x155e5cu: goto label_155e5c;
        case 0x155e60u: goto label_155e60;
        case 0x155e64u: goto label_155e64;
        case 0x155e68u: goto label_155e68;
        case 0x155e6cu: goto label_155e6c;
        case 0x155e70u: goto label_155e70;
        case 0x155e74u: goto label_155e74;
        case 0x155e78u: goto label_155e78;
        case 0x155e7cu: goto label_155e7c;
        case 0x155e80u: goto label_155e80;
        case 0x155e84u: goto label_155e84;
        default: break;
    }

    ctx->pc = 0x155e28u;

label_155e28:
    // 0x155e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_155e2c:
    // 0x155e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_155e30:
    // 0x155e30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155e34:
    // 0x155e34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_155e38:
    // 0x155e38: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x155e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_155e3c:
    // 0x155e3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x155e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_155e40:
    // 0x155e40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x155e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_155e44:
    // 0x155e44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x155e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_155e48:
    // 0x155e48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x155e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_155e4c:
    // 0x155e4c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x155e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_155e50:
    // 0x155e50: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x155e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_155e54:
    // 0x155e54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x155e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_155e58:
    // 0x155e58: 0x60f809  jalr        $v1
label_155e5c:
    if (ctx->pc == 0x155E5Cu) {
        ctx->pc = 0x155E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E58u;
        // 0x155e5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E60u;
        goto label_155e60;
    }
    ctx->pc = 0x155E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155E60u);
        ctx->pc = 0x155E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E58u;
        // 0x155e5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155E58u, 0x155E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155E60u;
label_155e60:
    // 0x155e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_155e64:
    // 0x155e64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x155e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_155e68:
    // 0x155e68: 0xc0533fc  jal         func_14CFF0
label_155e6c:
    if (ctx->pc == 0x155E6Cu) {
        ctx->pc = 0x155E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E68u;
        // 0x155e6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E70u;
        goto label_155e70;
    }
    ctx->pc = 0x155E68u;
    SET_GPR_U32(ctx, 31, 0x155E70u);
    ctx->pc = 0x155E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E68u;
    // 0x155e6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CFF0u, 0x155E68u, 0x155E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E70u;
label_155e70:
    // 0x155e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155e74:
    // 0x155e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_155e78:
    // 0x155e78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_155e7c:
    // 0x155e7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x155e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_155e80:
    // 0x155e80: 0x3e00008  jr          $ra
label_155e84:
    if (ctx->pc == 0x155E84u) {
        ctx->pc = 0x155E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E80u;
        // 0x155e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E88u;
        goto label_fallthrough_0x155e80;
    }
    ctx->pc = 0x155E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E80u;
        // 0x155e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x155e80:
    ctx->pc = 0x155E88u;
}
