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

// Function: Cmd_CARD_NEW_CARD_Entry__FP15BsSCDEntControl
// Address: 0x11cd60 - 0x11cdbc
void Cmd_CARD_NEW_CARD_Entry__FP15BsSCDEntControl_0x11cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_NEW_CARD_Entry__FP15BsSCDEntControl_0x11cd60");
#endif

    switch (ctx->pc) {
        case 0x11cd74u: goto label_11cd74;
        case 0x11cdacu: goto label_11cdac;
        default: break;
    }

    ctx->pc = 0x11cd60u;

    // 0x11cd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cd64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cd68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11cd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11cd6c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11CD6Cu;
    SET_GPR_U32(ctx, 31, 0x11CD74u);
    ctx->pc = 0x11CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD6Cu;
    // 0x11cd70: 0x8f908d10  lw          $s0, -0x72F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11CD6Cu, 0x11CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD74u;
label_11cd74:
    // 0x11cd74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11cd78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11cd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cd7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11cd80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cd84: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11cd88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11cd88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd8c: 0xac654040  sw          $a1, 0x4040($v1)
    ctx->pc = 0x11cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16448), GPR_U32(ctx, 5));
    // 0x11cd90: 0x24654600  addiu       $a1, $v1, 0x4600
    ctx->pc = 0x11cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 17920));
    // 0x11cd94: 0x24664e00  addiu       $a2, $v1, 0x4E00
    ctx->pc = 0x11cd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 19968));
    // 0x11cd98: 0x8c624040  lw          $v0, 0x4040($v1)
    ctx->pc = 0x11cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16448)));
    // 0x11cd9c: 0xac60404c  sw          $zero, 0x404C($v1)
    ctx->pc = 0x11cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16460), GPR_U32(ctx, 0));
    // 0x11cda0: 0x8c62404c  lw          $v0, 0x404C($v1)
    ctx->pc = 0x11cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16460)));
    // 0x11cda4: 0xc0460e6  jal         func_118398
    ctx->pc = 0x11CDA4u;
    SET_GPR_U32(ctx, 31, 0x11CDACu);
    ctx->pc = 0x118398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118398u, 0x11CDA4u, 0x11CDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDACu;
label_11cdac:
    // 0x11cdac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cdacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cdb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11cdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x11CDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDB4u;
        // 0x11cdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CDBCu;
}
