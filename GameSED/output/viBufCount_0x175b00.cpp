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

// Function: viBufCount
// Address: 0x175b00 - 0x175b4c
void viBufCount_0x175b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufCount_0x175b00");
#endif

    switch (ctx->pc) {
        case 0x175b1cu: goto label_175b1c;
        case 0x175b34u: goto label_175b34;
        default: break;
    }

    ctx->pc = 0x175b00u;

    // 0x175b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175b08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175b10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175b14: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x175B14u;
    SET_GPR_U32(ctx, 31, 0x175B1Cu);
    ctx->pc = 0x175B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B14u;
    // 0x175b18: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x175B14u, 0x175B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B1Cu;
label_175b1c:
    // 0x175b1c: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x175b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x175b20: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x175b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x175b24: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x175b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x175b28: 0x118ac0  sll         $s1, $s1, 11
    ctx->pc = 0x175b28u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x175b2c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x175B2Cu;
    SET_GPR_U32(ctx, 31, 0x175B34u);
    ctx->pc = 0x175B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B2Cu;
    // 0x175b30: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x175B2Cu, 0x175B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B34u;
label_175b34:
    // 0x175b34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x175b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175b44: 0x3e00008  jr          $ra
    ctx->pc = 0x175B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B44u;
        // 0x175b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175B4Cu;
}
