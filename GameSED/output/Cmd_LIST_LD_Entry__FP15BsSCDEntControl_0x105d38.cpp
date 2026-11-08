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

// Function: Cmd_LIST_LD_Entry__FP15BsSCDEntControl
// Address: 0x105d38 - 0x105d84
void Cmd_LIST_LD_Entry__FP15BsSCDEntControl_0x105d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LIST_LD_Entry__FP15BsSCDEntControl_0x105d38");
#endif

    switch (ctx->pc) {
        case 0x105d50u: goto label_105d50;
        case 0x105d5cu: goto label_105d5c;
        default: break;
    }

    ctx->pc = 0x105d38u;

    // 0x105d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105d40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105d48: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105D48u;
    SET_GPR_U32(ctx, 31, 0x105D50u);
    ctx->pc = 0x105D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D48u;
    // 0x105d4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105D48u, 0x105D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D50u;
label_105d50:
    // 0x105d50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x105d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d54: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x105D54u;
    SET_GPR_U32(ctx, 31, 0x105D5Cu);
    ctx->pc = 0x105D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D54u;
    // 0x105d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x105D54u, 0x105D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D5Cu;
label_105d5c:
    // 0x105d5c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x105d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x105d60: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x105d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x105d64: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x105d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x105d68: 0x8c63dc00  lw          $v1, -0x2400($v1)
    ctx->pc = 0x105d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958080)));
    // 0x105d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105d70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105d78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x105d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x105D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D7Cu;
        // 0x105d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105D84u;
}
