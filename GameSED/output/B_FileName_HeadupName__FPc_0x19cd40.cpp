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

// Function: B_FileName_HeadupName__FPc
// Address: 0x19cd40 - 0x19cdcc
void B_FileName_HeadupName__FPc_0x19cd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_FileName_HeadupName__FPc_0x19cd40");
#endif

    switch (ctx->pc) {
        case 0x19cd60u: goto label_19cd60;
        case 0x19cda8u: goto label_19cda8;
        default: break;
    }

    ctx->pc = 0x19cd40u;

    // 0x19cd40: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x19cd40u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19cd44: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x19CD44u;
    {
        const bool branch_taken_0x19cd44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD44u;
        // 0x19cd48: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd44) {
            ctx->pc = 0x19CD74u;
            goto label_19cd74;
        }
    }
    ctx->pc = 0x19CD4Cu;
    // 0x19cd4c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x19cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19cd50: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CD50u;
    {
        const bool branch_taken_0x19cd50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19cd50) {
            ctx->pc = 0x19CD74u;
            goto label_19cd74;
        }
    }
    ctx->pc = 0x19CD58u;
    // 0x19cd58: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x19cd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19cd5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19cd60:
    // 0x19cd60: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x19cd60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19cd64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CD64u;
    {
        const bool branch_taken_0x19cd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd64) {
            ctx->pc = 0x19CD74u;
            goto label_19cd74;
        }
    }
    ctx->pc = 0x19CD6Cu;
    // 0x19cd6c: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19CD6Cu;
    {
        const bool branch_taken_0x19cd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x19cd6c) {
            ctx->pc = 0x19CD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CD6Cu;
            // 0x19cd70: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cd60;
        }
    }
    ctx->pc = 0x19CD74u;
label_19cd74:
    // 0x19cd74: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19CD74u;
    {
        const bool branch_taken_0x19cd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x19cd74) {
            ctx->pc = 0x19CDC4u;
            goto label_19cdc4;
        }
    }
    ctx->pc = 0x19CD7Cu;
    // 0x19cd7c: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x19cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19cd80: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x19cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x19cd84: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x19cd84u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19cd88: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19CD88u;
    {
        const bool branch_taken_0x19cd88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x19cd88) {
            ctx->pc = 0x19CDC4u;
            goto label_19cdc4;
        }
    }
    ctx->pc = 0x19CD90u;
    // 0x19cd90: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x19cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x19cd94: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19CD94u;
    {
        const bool branch_taken_0x19cd94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x19cd94) {
            ctx->pc = 0x19CDC4u;
            goto label_19cdc4;
        }
    }
    ctx->pc = 0x19CD9Cu;
    // 0x19cd9c: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x19cd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x19cda0: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x19cda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x19cda4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x19cda4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19cda8:
    // 0x19cda8: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CDA8u;
    {
        const bool branch_taken_0x19cda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x19CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDA8u;
        // 0x19cdac: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cda8) {
            ctx->pc = 0x19CDC4u;
            goto label_19cdc4;
        }
    }
    ctx->pc = 0x19CDB0u;
    // 0x19cdb0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19cdb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19cdb4: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CDB4u;
    {
        const bool branch_taken_0x19cdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x19cdb4) {
            ctx->pc = 0x19CDC4u;
            goto label_19cdc4;
        }
    }
    ctx->pc = 0x19CDBCu;
    // 0x19cdbc: 0x5446fffa  bnel        $v0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CDBCu;
    {
        const bool branch_taken_0x19cdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x19cdbc) {
            ctx->pc = 0x19CDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CDBCu;
            // 0x19cdc0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cda8;
        }
    }
    ctx->pc = 0x19CDC4u;
label_19cdc4:
    // 0x19cdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x19CDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDC4u;
        // 0x19cdc8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CDCCu;
}
