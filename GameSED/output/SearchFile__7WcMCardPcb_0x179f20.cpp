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

// Function: SearchFile__7WcMCardPcb
// Address: 0x179f20 - 0x179fd0
void SearchFile__7WcMCardPcb_0x179f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchFile__7WcMCardPcb_0x179f20");
#endif

    switch (ctx->pc) {
        case 0x179f60u: goto label_179f60;
        case 0x179f84u: goto label_179f84;
        default: break;
    }

    ctx->pc = 0x179f20u;

    // 0x179f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x179f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179f28: 0x249040a0  addiu       $s0, $a0, 0x40A0
    ctx->pc = 0x179f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16544));
    // 0x179f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179f30: 0x24914094  addiu       $s1, $a0, 0x4094
    ctx->pc = 0x179f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 16532));
    // 0x179f34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x179f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x179f38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x179f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x179f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x179f40: 0x24934040  addiu       $s3, $a0, 0x4040
    ctx->pc = 0x179f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    // 0x179f44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x179f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x179f48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x179f48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f4c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x179f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x179f50: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x179f50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f54: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x179f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x179f58: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x179f58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179f5c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x179f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_179f60:
    // 0x179f60: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x179f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x179f64: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x179f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179f68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x179F68u;
    {
        const bool branch_taken_0x179f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F68u;
        // 0x179f6c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f68) {
            ctx->pc = 0x179FA4u;
            goto label_179fa4;
        }
    }
    ctx->pc = 0x179F70u;
    // 0x179f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f74: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x179f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x179f78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x179f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f7c: 0xc067210  jal         func_19C840
    ctx->pc = 0x179F7Cu;
    SET_GPR_U32(ctx, 31, 0x179F84u);
    ctx->pc = 0x179F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179F7Cu;
    // 0x179f80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C840u, 0x179F7Cu, 0x179F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179F84u;
label_179f84:
    // 0x179f84: 0x5456fff6  bnel        $v0, $s6, . + 4 + (-0xA << 2)
    ctx->pc = 0x179F84u;
    {
        const bool branch_taken_0x179f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x179f84) {
            ctx->pc = 0x179F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179F84u;
            // 0x179f88: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179f60;
        }
    }
    ctx->pc = 0x179F8Cu;
    // 0x179f8c: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179F8Cu;
    {
        const bool branch_taken_0x179f8c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x179F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F8Cu;
        // 0x179f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f8c) {
            ctx->pc = 0x179FA8u;
            goto label_179fa8;
        }
    }
    ctx->pc = 0x179F94u;
    // 0x179f94: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x179f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x179f98: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x179f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x179f9c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x179F9Cu;
    {
        const bool branch_taken_0x179f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F9Cu;
        // 0x179fa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f9c) {
            ctx->pc = 0x179FA8u;
            goto label_179fa8;
        }
    }
    ctx->pc = 0x179FA4u;
label_179fa4:
    // 0x179fa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179fa8:
    // 0x179fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179fac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x179facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179fb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x179fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179fb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x179fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179fb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x179fb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179fbc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x179fbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179fc0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x179fc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179fc4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x179fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x179FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FC8u;
        // 0x179fcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179FD0u;
}
