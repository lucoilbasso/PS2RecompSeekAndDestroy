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

// Function: SChangeFieldBackColor__FP7Color32i
// Address: 0x149048 - 0x1490b8
void SChangeFieldBackColor__FP7Color32i_0x149048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SChangeFieldBackColor__FP7Color32i_0x149048");
#endif

    switch (ctx->pc) {
        case 0x1490acu: goto label_1490ac;
        default: break;
    }

    ctx->pc = 0x149048u;

    // 0x149048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14904c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14904cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149050: 0x30a80080  andi        $t0, $a1, 0x80
    ctx->pc = 0x149050u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x149054: 0x53a03  sra         $a3, $a1, 8
    ctx->pc = 0x149054u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 8));
    // 0x149058: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x149058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14905c: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x14905cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x149060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149064: 0x28a60003  slti        $a2, $a1, 0x3
    ctx->pc = 0x149064u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x149068: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x149068u;
    {
        const bool branch_taken_0x149068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x14906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149068u;
        // 0x14906c: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149068) {
            ctx->pc = 0x149094u;
            goto label_149094;
        }
    }
    ctx->pc = 0x149070u;
    // 0x149070: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x149070u;
    {
        const bool branch_taken_0x149070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x149070) {
            ctx->pc = 0x149074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149070u;
            // 0x149074: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149088u;
            goto label_149088;
        }
    }
    ctx->pc = 0x149078u;
    // 0x149078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14907c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14907Cu;
    {
        const bool branch_taken_0x14907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14907Cu;
        // 0x149080: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14907c) {
            ctx->pc = 0x14908Cu;
            goto label_14908c;
        }
    }
    ctx->pc = 0x149084u;
    // 0x149084: 0x0  nop
    ctx->pc = 0x149084u;
    // NOP
label_149088:
    // 0x149088: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x149088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_14908c:
    // 0x14908c: 0x54a20001  bnel        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x14908Cu;
    {
        const bool branch_taken_0x14908c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14908c) {
            ctx->pc = 0x149090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14908Cu;
            // 0x149090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149094u;
            goto label_149094;
        }
    }
    ctx->pc = 0x149094u;
label_149094:
    // 0x149094: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149094u;
    {
        const bool branch_taken_0x149094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149094u;
        // 0x149098: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149094) {
            ctx->pc = 0x1490ACu;
            goto label_1490ac;
        }
    }
    ctx->pc = 0x14909Cu;
    // 0x14909c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14909cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1490a0: 0x8280b  movn        $a1, $zero, $t0
    ctx->pc = 0x1490a0u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1490a4: 0xc067c5c  jal         func_19F170
    ctx->pc = 0x1490A4u;
    SET_GPR_U32(ctx, 31, 0x1490ACu);
    ctx->pc = 0x1490A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490A4u;
    // 0x1490a8: 0xe7300b  movn        $a2, $a3, $a3 (Delay Slot)
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F170u, 0x1490A4u, 0x1490ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490ACu;
label_1490ac:
    // 0x1490ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1490acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1490b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1490B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1490B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490B0u;
        // 0x1490b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1490B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1490B8u;
}
