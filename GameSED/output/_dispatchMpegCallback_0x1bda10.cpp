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

// Function: _dispatchMpegCallback
// Address: 0x1bda10 - 0x1bda60
void _dispatchMpegCallback_0x1bda10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispatchMpegCallback_0x1bda10");
#endif

    switch (ctx->pc) {
        case 0x1bda10u: goto label_1bda10;
        case 0x1bda14u: goto label_1bda14;
        case 0x1bda18u: goto label_1bda18;
        case 0x1bda1cu: goto label_1bda1c;
        case 0x1bda20u: goto label_1bda20;
        case 0x1bda24u: goto label_1bda24;
        case 0x1bda28u: goto label_1bda28;
        case 0x1bda2cu: goto label_1bda2c;
        case 0x1bda30u: goto label_1bda30;
        case 0x1bda34u: goto label_1bda34;
        case 0x1bda38u: goto label_1bda38;
        case 0x1bda3cu: goto label_1bda3c;
        case 0x1bda40u: goto label_1bda40;
        case 0x1bda44u: goto label_1bda44;
        case 0x1bda48u: goto label_1bda48;
        case 0x1bda4cu: goto label_1bda4c;
        case 0x1bda50u: goto label_1bda50;
        case 0x1bda54u: goto label_1bda54;
        case 0x1bda58u: goto label_1bda58;
        case 0x1bda5cu: goto label_1bda5c;
        default: break;
    }

    ctx->pc = 0x1bda10u;

label_1bda10:
    // 0x1bda10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bda10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bda14:
    // 0x1bda14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bda14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bda18:
    // 0x1bda18: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1bda1c:
    if (ctx->pc == 0x1BDA1Cu) {
        ctx->pc = 0x1BDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA18u;
        // 0x1bda1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDA20u;
        goto label_1bda20;
    }
    ctx->pc = 0x1BDA18u;
    {
        const bool branch_taken_0x1bda18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA18u;
        // 0x1bda1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda18) {
            ctx->pc = 0x1BDA50u;
            goto label_1bda50;
        }
    }
    ctx->pc = 0x1BDA20u;
label_1bda20:
    // 0x1bda20: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1bda24:
    // 0x1bda24: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_1bda28:
    if (ctx->pc == 0x1BDA28u) {
        ctx->pc = 0x1BDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA24u;
        // 0x1bda28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDA2Cu;
        goto label_1bda2c;
    }
    ctx->pc = 0x1BDA24u;
    {
        const bool branch_taken_0x1bda24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA24u;
        // 0x1bda28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda24) {
            ctx->pc = 0x1BDA54u;
            goto label_1bda54;
        }
    }
    ctx->pc = 0x1BDA2Cu;
label_1bda2c:
    // 0x1bda2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bda2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bda30:
    // 0x1bda30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bda30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bda34:
    // 0x1bda34: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1bda38:
    // 0x1bda38: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1bda38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1bda3c:
    // 0x1bda3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1bda40:
    if (ctx->pc == 0x1BDA40u) {
        ctx->pc = 0x1BDA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA3Cu;
        // 0x1bda40: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDA44u;
        goto label_1bda44;
    }
    ctx->pc = 0x1BDA3Cu;
    {
        const bool branch_taken_0x1bda3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA3Cu;
        // 0x1bda40: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda3c) {
            ctx->pc = 0x1BDA54u;
            goto label_1bda54;
        }
    }
    ctx->pc = 0x1BDA44u;
label_1bda44:
    // 0x1bda44: 0x60f809  jalr        $v1
label_1bda48:
    if (ctx->pc == 0x1BDA48u) {
        ctx->pc = 0x1BDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA44u;
        // 0x1bda48: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDA4Cu;
        goto label_1bda4c;
    }
    ctx->pc = 0x1BDA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDA4Cu);
        ctx->pc = 0x1BDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA44u;
        // 0x1bda48: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDA44u, 0x1BDA4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDA4Cu;
label_1bda4c:
    // 0x1bda4c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1bda4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bda50:
    // 0x1bda50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bda50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bda54:
    // 0x1bda54: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1bda54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1bda58:
    // 0x1bda58: 0x3e00008  jr          $ra
label_1bda5c:
    if (ctx->pc == 0x1BDA5Cu) {
        ctx->pc = 0x1BDA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA58u;
        // 0x1bda5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDA60u;
        goto label_fallthrough_0x1bda58;
    }
    ctx->pc = 0x1BDA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA58u;
        // 0x1bda5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bda58:
    ctx->pc = 0x1BDA60u;
}
