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

// Function: Cmd_ACTOR_PUSH_Entry__FP15BsSCDEntControl
// Address: 0x135f10 - 0x135fd0
void Cmd_ACTOR_PUSH_Entry__FP15BsSCDEntControl_0x135f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_PUSH_Entry__FP15BsSCDEntControl_0x135f10");
#endif

    switch (ctx->pc) {
        case 0x135f44u: goto label_135f44;
        case 0x135f50u: goto label_135f50;
        case 0x135fa8u: goto label_135fa8;
        default: break;
    }

    ctx->pc = 0x135f10u;

    // 0x135f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135f14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x135f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x135f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x135f1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x135f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x135f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135f28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x135f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x135f2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x135f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x135f30: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x135f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x135f34: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x135F34u;
    {
        const bool branch_taken_0x135f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x135F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F34u;
        // 0x135f38: 0x8c520024  lw          $s2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f34) {
            ctx->pc = 0x135F54u;
            goto label_135f54;
        }
    }
    ctx->pc = 0x135F3Cu;
    // 0x135f3c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x135F3Cu;
    SET_GPR_U32(ctx, 31, 0x135F44u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x135F3Cu, 0x135F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F44u;
label_135f44:
    // 0x135f44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f48: 0xc04ca86  jal         func_132A18
    ctx->pc = 0x135F48u;
    SET_GPR_U32(ctx, 31, 0x135F50u);
    ctx->pc = 0x135F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F48u;
    // 0x135f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x135F48u, 0x135F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F50u;
label_135f50:
    // 0x135f50: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x135f50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_135f54:
    // 0x135f54: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x135f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x135f58: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x135f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x135f5c: 0x8c621400  lw          $v0, 0x1400($v1)
    ctx->pc = 0x135f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x135f60: 0x24701400  addiu       $s0, $v1, 0x1400
    ctx->pc = 0x135f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x135f64: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x135f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x135f68: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x135F68u;
    {
        const bool branch_taken_0x135f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x135F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F68u;
        // 0x135f6c: 0xac621400  sw          $v0, 0x1400($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f68) {
            ctx->pc = 0x135F98u;
            goto label_135f98;
        }
    }
    ctx->pc = 0x135F70u;
    // 0x135f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135f78: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x135f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x135f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135f80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135f84: 0x24a56678  addiu       $a1, $a1, 0x6678
    ctx->pc = 0x135f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26232));
    // 0x135f88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x135f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135f8c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x135f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x135f90: 0x8068186  j           func_1A0618
    ctx->pc = 0x135F90u;
    ctx->pc = 0x135F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F90u;
    // 0x135f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x135F98u;
label_135f98:
    // 0x135f98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x135f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135f9c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x135f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x135fa0: 0xc067232  jal         func_19C8C8
    ctx->pc = 0x135FA0u;
    SET_GPR_U32(ctx, 31, 0x135FA8u);
    ctx->pc = 0x135FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135FA0u;
    // 0x135fa4: 0x2485ffb0  addiu       $a1, $a0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8C8u, 0x135FA0u, 0x135FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135FA8u;
label_135fa8:
    // 0x135fa8: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x135FA8u;
    {
        const bool branch_taken_0x135fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fa8) {
            ctx->pc = 0x135FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135FA8u;
            // 0x135fac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135FBCu;
            goto label_135fbc;
        }
    }
    ctx->pc = 0x135FB0u;
    // 0x135fb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x135fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135fb4: 0xac510040  sw          $s1, 0x40($v0)
    ctx->pc = 0x135fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 17));
    // 0x135fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135fbc:
    // 0x135fbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135fc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135fc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135fc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x135fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x135FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FC8u;
        // 0x135fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135FD0u;
}
