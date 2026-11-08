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

// Function: Finish__9WcFontMan
// Address: 0x17c740 - 0x17c79c
void Finish__9WcFontMan_0x17c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9WcFontMan_0x17c740");
#endif

    switch (ctx->pc) {
        case 0x17c740u: goto label_17c740;
        case 0x17c744u: goto label_17c744;
        case 0x17c748u: goto label_17c748;
        case 0x17c74cu: goto label_17c74c;
        case 0x17c750u: goto label_17c750;
        case 0x17c754u: goto label_17c754;
        case 0x17c758u: goto label_17c758;
        case 0x17c75cu: goto label_17c75c;
        case 0x17c760u: goto label_17c760;
        case 0x17c764u: goto label_17c764;
        case 0x17c768u: goto label_17c768;
        case 0x17c76cu: goto label_17c76c;
        case 0x17c770u: goto label_17c770;
        case 0x17c774u: goto label_17c774;
        case 0x17c778u: goto label_17c778;
        case 0x17c77cu: goto label_17c77c;
        case 0x17c780u: goto label_17c780;
        case 0x17c784u: goto label_17c784;
        case 0x17c788u: goto label_17c788;
        case 0x17c78cu: goto label_17c78c;
        case 0x17c790u: goto label_17c790;
        case 0x17c794u: goto label_17c794;
        case 0x17c798u: goto label_17c798;
        default: break;
    }

    ctx->pc = 0x17c740u;

label_17c740:
    // 0x17c740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17c744:
    // 0x17c744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c748:
    // 0x17c748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c74c:
    // 0x17c74c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17c74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_17c750:
    // 0x17c750: 0xc06bd1c  jal         func_1AF470
label_17c754:
    if (ctx->pc == 0x17C754u) {
        ctx->pc = 0x17C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C750u;
        // 0x17c754: 0x8e040830  lw          $a0, 0x830($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C758u;
        goto label_17c758;
    }
    ctx->pc = 0x17C750u;
    SET_GPR_U32(ctx, 31, 0x17C758u);
    ctx->pc = 0x17C754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C750u;
    // 0x17c754: 0x8e040830  lw          $a0, 0x830($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x17C750u, 0x17C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C758u;
label_17c758:
    // 0x17c758: 0xc05f1f4  jal         func_17C7D0
label_17c75c:
    if (ctx->pc == 0x17C75Cu) {
        ctx->pc = 0x17C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C758u;
        // 0x17c75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C760u;
        goto label_17c760;
    }
    ctx->pc = 0x17C758u;
    SET_GPR_U32(ctx, 31, 0x17C760u);
    ctx->pc = 0x17C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C758u;
    // 0x17c75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C7D0u, 0x17C758u, 0x17C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C760u;
label_17c760:
    // 0x17c760: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x17c760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_17c764:
    // 0x17c764: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x17c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_17c768:
    // 0x17c768: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x17c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_17c76c:
    // 0x17c76c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x17c76cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_17c770:
    // 0x17c770: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17c770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17c774:
    // 0x17c774: 0x60f809  jalr        $v1
label_17c778:
    if (ctx->pc == 0x17C778u) {
        ctx->pc = 0x17C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C774u;
        // 0x17c778: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C77Cu;
        goto label_17c77c;
    }
    ctx->pc = 0x17C774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17C77Cu);
        ctx->pc = 0x17C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C774u;
        // 0x17c778: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C774u, 0x17C77Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C77Cu;
label_17c77c:
    // 0x17c77c: 0xc068364  jal         func_1A0D90
label_17c780:
    if (ctx->pc == 0x17C780u) {
        ctx->pc = 0x17C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C77Cu;
        // 0x17c780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C784u;
        goto label_17c784;
    }
    ctx->pc = 0x17C77Cu;
    SET_GPR_U32(ctx, 31, 0x17C784u);
    ctx->pc = 0x17C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C77Cu;
    // 0x17c780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x17C77Cu, 0x17C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C784u;
label_17c784:
    // 0x17c784: 0xc068396  jal         func_1A0E58
label_17c788:
    if (ctx->pc == 0x17C788u) {
        ctx->pc = 0x17C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C784u;
        // 0x17c788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C78Cu;
        goto label_17c78c;
    }
    ctx->pc = 0x17C784u;
    SET_GPR_U32(ctx, 31, 0x17C78Cu);
    ctx->pc = 0x17C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C784u;
    // 0x17c788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x17C784u, 0x17C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C78Cu;
label_17c78c:
    // 0x17c78c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c790:
    // 0x17c790: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17c790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c794:
    // 0x17c794: 0x3e00008  jr          $ra
label_17c798:
    if (ctx->pc == 0x17C798u) {
        ctx->pc = 0x17C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C794u;
        // 0x17c798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C79Cu;
        goto label_fallthrough_0x17c794;
    }
    ctx->pc = 0x17C794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C794u;
        // 0x17c798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17c794:
    ctx->pc = 0x17C79Cu;
}
