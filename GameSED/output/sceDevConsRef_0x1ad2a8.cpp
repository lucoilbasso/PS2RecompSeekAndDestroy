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

// Function: sceDevConsRef
// Address: 0x1ad2a8 - 0x1ad344
void sceDevConsRef_0x1ad2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsRef_0x1ad2a8");
#endif

    switch (ctx->pc) {
        case 0x1ad2f0u: goto label_1ad2f0;
        case 0x1ad30cu: goto label_1ad30c;
        default: break;
    }

    ctx->pc = 0x1ad2a8u;

    // 0x1ad2a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ad2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ad2ac: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1ad2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1ad2b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad2b4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1ad2b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ad2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ad2bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ad2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ad2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ad2c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ad2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ad2c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ad2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ad2cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ad2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ad2d0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1ad2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1ad2d4: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x1ad2d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ad2d8: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x1ad2d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ad2dc: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x1AD2DCu;
    {
        const bool branch_taken_0x1ad2dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2DCu;
        // 0x1ad2e0: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2dc) {
            ctx->pc = 0x1AD31Cu;
            goto label_1ad31c;
        }
    }
    ctx->pc = 0x1AD2E4u;
    // 0x1ad2e4: 0x24930018  addiu       $s3, $a0, 0x18
    ctx->pc = 0x1ad2e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1ad2e8: 0x149040  sll         $s2, $s4, 1
    ctx->pc = 0x1ad2e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1ad2ec: 0x0  nop
    ctx->pc = 0x1ad2ecu;
    // NOP
label_1ad2f0:
    // 0x1ad2f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ad2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2f4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ad2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ad2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ad2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad304: 0xc06b8a0  jal         func_1AE280
    ctx->pc = 0x1AD304u;
    SET_GPR_U32(ctx, 31, 0x1AD30Cu);
    ctx->pc = 0x1AD308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD304u;
    // 0x1ad308: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE280u, 0x1AD304u, 0x1AD30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD30Cu;
label_1ad30c:
    // 0x1ad30c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ad30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ad310: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x1ad310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1ad314: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AD314u;
    {
        const bool branch_taken_0x1ad314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD314u;
        // 0x1ad318: 0x2328821  addu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad314) {
            ctx->pc = 0x1AD2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad2f0;
        }
    }
    ctx->pc = 0x1AD31Cu;
label_1ad31c:
    // 0x1ad31c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ad31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ad320: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1ad320u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ad324: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1ad324u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad328: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ad328u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad32c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ad32cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad330: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad334: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ad334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD33Cu;
        // 0x1ad340: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD344u;
}
