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

// Function: CommandLoad__8ApcMCardUi
// Address: 0x11bbb8 - 0x11bc58
void CommandLoad__8ApcMCardUi_0x11bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandLoad__8ApcMCardUi_0x11bbb8");
#endif

    switch (ctx->pc) {
        case 0x11bc34u: goto label_11bc34;
        case 0x11bc48u: goto label_11bc48;
        default: break;
    }

    ctx->pc = 0x11bbb8u;

    // 0x11bbb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11bbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11bbbc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11bbc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11bbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bbc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11bbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbc8: 0x26084600  addiu       $t0, $s0, 0x4600
    ctx->pc = 0x11bbc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    // 0x11bbcc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11bbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11bbd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11bbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbd4: 0x3406de00  ori         $a2, $zero, 0xDE00
    ctx->pc = 0x11bbd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56832);
    // 0x11bbd8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x11bbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x11bbdc: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BBDCu;
    {
        const bool branch_taken_0x11bbdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBDCu;
        // 0x11bbe0: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbdc) {
            ctx->pc = 0x11BBF8u;
            goto label_11bbf8;
        }
    }
    ctx->pc = 0x11BBE4u;
    // 0x11bbe4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11bbe8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x11bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x11bbec: 0x244247c0  addiu       $v0, $v0, 0x47C0
    ctx->pc = 0x11bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18368));
    // 0x11bbf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11BBF0u;
    {
        const bool branch_taken_0x11bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBF0u;
        // 0x11bbf4: 0xacc80008  sw          $t0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbf0) {
            ctx->pc = 0x11BC08u;
            goto label_11bc08;
        }
    }
    ctx->pc = 0x11BBF8u;
label_11bbf8:
    // 0x11bbf8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11bbfc: 0x34039800  ori         $v1, $zero, 0x9800
    ctx->pc = 0x11bbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x11bc00: 0x244247c0  addiu       $v0, $v0, 0x47C0
    ctx->pc = 0x11bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18368));
    // 0x11bc04: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
label_11bc08:
    // 0x11bc08: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x11bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x11bc0c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x11bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x11bc10: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x11bc10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x11bc14: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x11bc14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11bc18: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x11bc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x11bc1c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x11bc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11bc20: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x11bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x11bc24: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x11bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x11bc28: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x11bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x11bc2c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x11BC2Cu;
    SET_GPR_U32(ctx, 31, 0x11BC34u);
    ctx->pc = 0x11BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC2Cu;
    // 0x11bc30: 0xacc00010  sw          $zero, 0x10($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x11BC2Cu, 0x11BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC34u;
label_11bc34:
    // 0x11bc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc38: 0x3405de00  ori         $a1, $zero, 0xDE00
    ctx->pc = 0x11bc38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56832);
    // 0x11bc3c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x11bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x11bc40: 0xc05e614  jal         func_179850
    ctx->pc = 0x11BC40u;
    SET_GPR_U32(ctx, 31, 0x11BC48u);
    ctx->pc = 0x179850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179850u, 0x11BC40u, 0x11BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC48u;
label_11bc48:
    // 0x11bc48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bc48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bc4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11bc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11bc50: 0x3e00008  jr          $ra
    ctx->pc = 0x11BC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC50u;
        // 0x11bc54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BC58u;
}
