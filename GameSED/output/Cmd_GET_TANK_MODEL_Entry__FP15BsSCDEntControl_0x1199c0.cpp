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

// Function: Cmd_GET_TANK_MODEL_Entry__FP15BsSCDEntControl
// Address: 0x1199c0 - 0x119a48
void Cmd_GET_TANK_MODEL_Entry__FP15BsSCDEntControl_0x1199c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_TANK_MODEL_Entry__FP15BsSCDEntControl_0x1199c0");
#endif

    switch (ctx->pc) {
        case 0x1199d8u: goto label_1199d8;
        case 0x1199fcu: goto label_1199fc;
        case 0x119a0cu: goto label_119a0c;
        case 0x119a20u: goto label_119a20;
        default: break;
    }

    ctx->pc = 0x1199c0u;

    // 0x1199c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1199c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1199c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1199c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1199c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1199c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1199cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1199ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1199d0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1199D0u;
    SET_GPR_U32(ctx, 31, 0x1199D8u);
    ctx->pc = 0x1199D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1199D0u;
    // 0x1199d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1199D0u, 0x1199D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1199D8u;
label_1199d8:
    // 0x1199d8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1199d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1199dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1199dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1199e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1199e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1199e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1199e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1199ec: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1199ECu;
    {
        const bool branch_taken_0x1199ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1199F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199ECu;
        // 0x1199f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199ec) {
            ctx->pc = 0x119A00u;
            goto label_119a00;
        }
    }
    ctx->pc = 0x1199F4u;
    // 0x1199f4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1199F4u;
    SET_GPR_U32(ctx, 31, 0x1199FCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1199F4u, 0x1199FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1199FCu;
label_1199fc:
    // 0x1199fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1199fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119a00:
    // 0x119a00: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x119a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x119a04: 0xc041882  jal         func_106208
    ctx->pc = 0x119A04u;
    SET_GPR_U32(ctx, 31, 0x119A0Cu);
    ctx->pc = 0x119A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A04u;
    // 0x119a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x119A04u, 0x119A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A0Cu;
label_119a0c:
    // 0x119a0c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x119a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x119a10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119a14: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x119a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x119a18: 0xc041882  jal         func_106208
    ctx->pc = 0x119A18u;
    SET_GPR_U32(ctx, 31, 0x119A20u);
    ctx->pc = 0x119A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A18u;
    // 0x119a1c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x119A18u, 0x119A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A20u;
label_119a20:
    // 0x119a20: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x119a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x119a24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119a28: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x119a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x119a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119a30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119a34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119a38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119a3c: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x119a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
    // 0x119a40: 0x3e00008  jr          $ra
    ctx->pc = 0x119A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A40u;
        // 0x119a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119A48u;
}
