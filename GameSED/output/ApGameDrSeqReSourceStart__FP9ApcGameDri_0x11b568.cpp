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

// Function: ApGameDrSeqReSourceStart__FP9ApcGameDri
// Address: 0x11b568 - 0x11b5cc
void ApGameDrSeqReSourceStart__FP9ApcGameDri_0x11b568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApGameDrSeqReSourceStart__FP9ApcGameDri_0x11b568");
#endif

    switch (ctx->pc) {
        case 0x11b59cu: goto label_11b59c;
        case 0x11b5a0u: goto label_11b5a0;
        case 0x11b5a8u: goto label_11b5a8;
        case 0x11b5bcu: goto label_11b5bc;
        default: break;
    }

    ctx->pc = 0x11b568u;

    // 0x11b568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b56c: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11b56cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11b570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b578: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11b57c: 0x24c6b510  addiu       $a2, $a2, -0x4AF0
    ctx->pc = 0x11b57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948112));
    // 0x11b580: 0xae050090  sw          $a1, 0x90($s0)
    ctx->pc = 0x11b580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 5));
    // 0x11b584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b588: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x11b588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x11b58c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x11b58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x11b590: 0x260800c0  addiu       $t0, $s0, 0xC0
    ctx->pc = 0x11b590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x11b594: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x11B594u;
    SET_GPR_U32(ctx, 31, 0x11B59Cu);
    ctx->pc = 0x11B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B594u;
    // 0x11b598: 0x240907f8  addiu       $t1, $zero, 0x7F8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x11B594u, 0x11B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B59Cu;
label_11b59c:
    // 0x11b59c: 0x0  nop
    ctx->pc = 0x11b59cu;
    // NOP
label_11b5a0:
    // 0x11b5a0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x11B5A0u;
    SET_GPR_U32(ctx, 31, 0x11B5A8u);
    ctx->pc = 0x11B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B5A0u;
    // 0x11b5a4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x11B5A0u, 0x11B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5A8u;
label_11b5a8:
    // 0x11b5a8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x11b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11b5ac: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11B5ACu;
    {
        const bool branch_taken_0x11b5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5ACu;
        // 0x11b5b0: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5ac) {
            ctx->pc = 0x11B5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b5a0;
        }
    }
    ctx->pc = 0x11B5B4u;
    // 0x11b5b4: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x11B5B4u;
    SET_GPR_U32(ctx, 31, 0x11B5BCu);
    ctx->pc = 0x11B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B5B4u;
    // 0x11b5b8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x11B5B4u, 0x11B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5BCu;
label_11b5bc:
    // 0x11b5bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b5bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b5c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5C4u;
        // 0x11b5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B5CCu;
}
