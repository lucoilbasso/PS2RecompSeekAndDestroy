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

// Function: entry_00172ec4
// Address: 0x172ec4 - 0x172f94
void entry_00172ec4_0x172ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172ec4_0x172ec4");
#endif

    switch (ctx->pc) {
        case 0x172eccu: goto label_172ecc;
        case 0x172edcu: goto label_172edc;
        case 0x172ee8u: goto label_172ee8;
        case 0x172ef4u: goto label_172ef4;
        case 0x172f00u: goto label_172f00;
        case 0x172f24u: goto label_172f24;
        case 0x172f30u: goto label_172f30;
        case 0x172f40u: goto label_172f40;
        case 0x172f48u: goto label_172f48;
        case 0x172f50u: goto label_172f50;
        case 0x172f5cu: goto label_172f5c;
        case 0x172f64u: goto label_172f64;
        default: break;
    }

    ctx->pc = 0x172ec4u;

    // 0x172ec4: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172EC4u;
    SET_GPR_U32(ctx, 31, 0x172ECCu);
    ctx->pc = 0x172EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EC4u;
    // 0x172ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172EC4u, 0x172ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172ECCu;
label_172ecc:
    // 0x172ecc: 0x3c051500  lui         $a1, 0x1500
    ctx->pc = 0x172eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5376 << 16));
    // 0x172ed0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ed4: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172ED4u;
    SET_GPR_U32(ctx, 31, 0x172EDCu);
    ctx->pc = 0x172ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172ED4u;
    // 0x172ed8: 0x34a507fc  ori         $a1, $a1, 0x7FC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172ED4u, 0x172EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EDCu;
label_172edc:
    // 0x172edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ee0: 0xc06bb48  jal         func_1AED20
    ctx->pc = 0x172EE0u;
    SET_GPR_U32(ctx, 31, 0x172EE8u);
    ctx->pc = 0x172EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EE0u;
    // 0x172ee4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED20u, 0x172EE0u, 0x172EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EE8u;
label_172ee8:
    // 0x172ee8: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x172ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x172eec: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172EECu;
    SET_GPR_U32(ctx, 31, 0x172EF4u);
    ctx->pc = 0x172EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EECu;
    // 0x172ef0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172EECu, 0x172EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EF4u;
label_172ef4:
    // 0x172ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ef8: 0xc06bb5e  jal         func_1AED78
    ctx->pc = 0x172EF8u;
    SET_GPR_U32(ctx, 31, 0x172F00u);
    ctx->pc = 0x172EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EF8u;
    // 0x172efc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED78u, 0x172EF8u, 0x172F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F00u;
label_172f00:
    // 0x172f00: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x172f04: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x172f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x172f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172f0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x172f10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f14: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x172f14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172f18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x172f18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f1c: 0xc05c7d4  jal         func_171F50
    ctx->pc = 0x172F1Cu;
    SET_GPR_U32(ctx, 31, 0x172F24u);
    ctx->pc = 0x172F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F1Cu;
    // 0x172f20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F50u, 0x172F1Cu, 0x172F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F24u;
label_172f24:
    // 0x172f24: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x172f24u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172f28: 0xc06bb80  jal         func_1AEE00
    ctx->pc = 0x172F28u;
    SET_GPR_U32(ctx, 31, 0x172F30u);
    ctx->pc = 0x172F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F28u;
    // 0x172f2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE00u, 0x172F28u, 0x172F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F30u;
label_172f30:
    // 0x172f30: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x172f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x172f34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f38: 0xc06bbfc  jal         func_1AEFF0
    ctx->pc = 0x172F38u;
    SET_GPR_U32(ctx, 31, 0x172F40u);
    ctx->pc = 0x172F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F38u;
    // 0x172f3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFF0u, 0x172F38u, 0x172F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F40u;
label_172f40:
    // 0x172f40: 0xc06bb86  jal         func_1AEE18
    ctx->pc = 0x172F40u;
    SET_GPR_U32(ctx, 31, 0x172F48u);
    ctx->pc = 0x172F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F40u;
    // 0x172f44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE18u, 0x172F40u, 0x172F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F48u;
label_172f48:
    // 0x172f48: 0xc06bb74  jal         func_1AEDD0
    ctx->pc = 0x172F48u;
    SET_GPR_U32(ctx, 31, 0x172F50u);
    ctx->pc = 0x172F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F48u;
    // 0x172f4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEDD0u, 0x172F48u, 0x172F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F50u;
label_172f50:
    // 0x172f50: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x172f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x172f54: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172F54u;
    SET_GPR_U32(ctx, 31, 0x172F5Cu);
    ctx->pc = 0x172F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F54u;
    // 0x172f58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172F54u, 0x172F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F5Cu;
label_172f5c:
    // 0x172f5c: 0xc06bada  jal         func_1AEB68
    ctx->pc = 0x172F5Cu;
    SET_GPR_U32(ctx, 31, 0x172F64u);
    ctx->pc = 0x172F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F5Cu;
    // 0x172f60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB68u, 0x172F5Cu, 0x172F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F64u;
label_172f64:
    // 0x172f64: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x172f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x172f68: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x172f68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x172f6c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x172f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x172f70: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x172f70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x172f74: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x172f74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x172f78: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x172f78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x172f7c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x172f7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x172f80: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x172f80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x172f84: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x172f84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x172f88: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x172f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x172f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x172F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F8Cu;
        // 0x172f90: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172F94u;
}
