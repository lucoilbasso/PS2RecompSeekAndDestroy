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

// Function: ApMovieCreate__FP9ApcStudioPci
// Address: 0x16fce8 - 0x16fd6c
void ApMovieCreate__FP9ApcStudioPci_0x16fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMovieCreate__FP9ApcStudioPci_0x16fce8");
#endif

    switch (ctx->pc) {
        case 0x16fd14u: goto label_16fd14;
        case 0x16fd1cu: goto label_16fd1c;
        case 0x16fd40u: goto label_16fd40;
        case 0x16fd4cu: goto label_16fd4c;
        default: break;
    }

    ctx->pc = 0x16fce8u;

    // 0x16fce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16fce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16fcec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16fcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16fcf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16fcf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcf4: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x16fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x16fcf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fcfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16fcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16fd00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16fd00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16fd08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16fd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16fd0c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x16FD0Cu;
    SET_GPR_U32(ctx, 31, 0x16FD14u);
    ctx->pc = 0x16FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD0Cu;
    // 0x16fd10: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x16FD0Cu, 0x16FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD14u;
label_16fd14:
    // 0x16fd14: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x16FD14u;
    SET_GPR_U32(ctx, 31, 0x16FD1Cu);
    ctx->pc = 0x16FD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD14u;
    // 0x16fd18: 0x24040184  addiu       $a0, $zero, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16FD14u, 0x16FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD1Cu;
label_16fd1c:
    // 0x16fd1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16fd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16fd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd24: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x16fd28: 0x2442f8d0  addiu       $v0, $v0, -0x730
    ctx->pc = 0x16fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965456));
    // 0x16fd2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16fd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd30: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x16fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x16fd34: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16fd34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd38: 0xc05bf5c  jal         func_16FD70
    ctx->pc = 0x16FD38u;
    SET_GPR_U32(ctx, 31, 0x16FD40u);
    ctx->pc = 0x16FD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD38u;
    // 0x16fd3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FD70u, 0x16FD38u, 0x16FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD40u;
label_16fd40:
    // 0x16fd40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd44: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x16FD44u;
    SET_GPR_U32(ctx, 31, 0x16FD4Cu);
    ctx->pc = 0x16FD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD44u;
    // 0x16fd48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x16FD44u, 0x16FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD4Cu;
label_16fd4c:
    // 0x16fd4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16fd4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16fd50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fd54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16fd54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fd58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16fd58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fd5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16fd5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16fd60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16fd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fd64: 0x3e00008  jr          $ra
    ctx->pc = 0x16FD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD64u;
        // 0x16fd68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FD6Cu;
}
