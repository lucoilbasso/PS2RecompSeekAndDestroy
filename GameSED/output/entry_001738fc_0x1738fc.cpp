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

// Function: entry_001738fc
// Address: 0x1738fc - 0x1739cc
void entry_001738fc_0x1738fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001738fc_0x1738fc");
#endif

    switch (ctx->pc) {
        case 0x173904u: goto label_173904;
        case 0x173914u: goto label_173914;
        case 0x173920u: goto label_173920;
        case 0x17392cu: goto label_17392c;
        case 0x173938u: goto label_173938;
        case 0x17395cu: goto label_17395c;
        case 0x173968u: goto label_173968;
        case 0x173978u: goto label_173978;
        case 0x173980u: goto label_173980;
        case 0x173988u: goto label_173988;
        case 0x173994u: goto label_173994;
        case 0x17399cu: goto label_17399c;
        default: break;
    }

    ctx->pc = 0x1738fcu;

    // 0x1738fc: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x1738FCu;
    SET_GPR_U32(ctx, 31, 0x173904u);
    ctx->pc = 0x173900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738FCu;
    // 0x173900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x1738FCu, 0x173904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173904u;
label_173904:
    // 0x173904: 0x3c051500  lui         $a1, 0x1500
    ctx->pc = 0x173904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5376 << 16));
    // 0x173908: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17390c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17390Cu;
    SET_GPR_U32(ctx, 31, 0x173914u);
    ctx->pc = 0x173910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17390Cu;
    // 0x173910: 0x34a507fc  ori         $a1, $a1, 0x7FC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17390Cu, 0x173914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173914u;
label_173914:
    // 0x173914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173918: 0xc06bb48  jal         func_1AED20
    ctx->pc = 0x173918u;
    SET_GPR_U32(ctx, 31, 0x173920u);
    ctx->pc = 0x17391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173918u;
    // 0x17391c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED20u, 0x173918u, 0x173920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173920u;
label_173920:
    // 0x173920: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x173920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x173924: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x173924u;
    SET_GPR_U32(ctx, 31, 0x17392Cu);
    ctx->pc = 0x173928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173924u;
    // 0x173928: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x173924u, 0x17392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17392Cu;
label_17392c:
    // 0x17392c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17392cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173930: 0xc06bb5e  jal         func_1AED78
    ctx->pc = 0x173930u;
    SET_GPR_U32(ctx, 31, 0x173938u);
    ctx->pc = 0x173934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173930u;
    // 0x173934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED78u, 0x173930u, 0x173938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173938u;
label_173938:
    // 0x173938: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x173938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17393c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17393cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x173940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173948: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17394c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x17394cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173950: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x173950u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173954: 0xc05c7d4  jal         func_171F50
    ctx->pc = 0x173954u;
    SET_GPR_U32(ctx, 31, 0x17395Cu);
    ctx->pc = 0x173958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173954u;
    // 0x173958: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F50u, 0x173954u, 0x17395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17395Cu;
label_17395c:
    // 0x17395c: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x17395cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x173960: 0xc06bb80  jal         func_1AEE00
    ctx->pc = 0x173960u;
    SET_GPR_U32(ctx, 31, 0x173968u);
    ctx->pc = 0x173964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173960u;
    // 0x173964: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE00u, 0x173960u, 0x173968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173968u;
label_173968:
    // 0x173968: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x173968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x17396c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17396cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173970: 0xc06bbfc  jal         func_1AEFF0
    ctx->pc = 0x173970u;
    SET_GPR_U32(ctx, 31, 0x173978u);
    ctx->pc = 0x173974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173970u;
    // 0x173974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFF0u, 0x173970u, 0x173978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173978u;
label_173978:
    // 0x173978: 0xc06bb86  jal         func_1AEE18
    ctx->pc = 0x173978u;
    SET_GPR_U32(ctx, 31, 0x173980u);
    ctx->pc = 0x17397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173978u;
    // 0x17397c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE18u, 0x173978u, 0x173980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173980u;
label_173980:
    // 0x173980: 0xc06bb74  jal         func_1AEDD0
    ctx->pc = 0x173980u;
    SET_GPR_U32(ctx, 31, 0x173988u);
    ctx->pc = 0x173984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173980u;
    // 0x173984: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEDD0u, 0x173980u, 0x173988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173988u;
label_173988:
    // 0x173988: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x173988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x17398c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17398Cu;
    SET_GPR_U32(ctx, 31, 0x173994u);
    ctx->pc = 0x173990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17398Cu;
    // 0x173990: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17398Cu, 0x173994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173994u;
label_173994:
    // 0x173994: 0xc06bada  jal         func_1AEB68
    ctx->pc = 0x173994u;
    SET_GPR_U32(ctx, 31, 0x17399Cu);
    ctx->pc = 0x173998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173994u;
    // 0x173998: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB68u, 0x173994u, 0x17399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17399Cu;
label_17399c:
    // 0x17399c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x17399cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1739a0: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1739a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1739a4: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1739a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1739a8: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x1739a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1739ac: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x1739acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1739b0: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x1739b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1739b4: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x1739b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1739b8: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x1739b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1739bc: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x1739bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1739c0: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x1739c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1739c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1739C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1739C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739C4u;
        // 0x1739c8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1739C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1739CCu;
}
