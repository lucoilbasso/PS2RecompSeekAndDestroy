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

// Function: SetupMotion__8WcEntityi
// Address: 0x186768 - 0x1867fc
void SetupMotion__8WcEntityi_0x186768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupMotion__8WcEntityi_0x186768");
#endif

    switch (ctx->pc) {
        case 0x186788u: goto label_186788;
        case 0x1867a4u: goto label_1867a4;
        case 0x1867d4u: goto label_1867d4;
        default: break;
    }

    ctx->pc = 0x186768u;

    // 0x186768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18676c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186770: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x186770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x186778: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x186778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18677c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x186780: 0xc069028  jal         func_1A40A0
    ctx->pc = 0x186780u;
    SET_GPR_U32(ctx, 31, 0x186788u);
    ctx->pc = 0x186784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186780u;
    // 0x186784: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A40A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A40A0u, 0x186780u, 0x186788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186788u;
label_186788:
    // 0x186788: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x186788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18678c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18678cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186790: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x186790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x186794: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x186794u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x186798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18679c: 0xc061a00  jal         func_186800
    ctx->pc = 0x18679Cu;
    SET_GPR_U32(ctx, 31, 0x1867A4u);
    ctx->pc = 0x1867A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18679Cu;
    // 0x1867a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186800u, 0x18679Cu, 0x1867A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1867A4u;
label_1867a4:
    // 0x1867a4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1867a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1867a8: 0x26260148  addiu       $a2, $s1, 0x148
    ctx->pc = 0x1867a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
    // 0x1867ac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1867acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1867b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1867b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1867b4: 0x24841590  addiu       $a0, $a0, 0x1590
    ctx->pc = 0x1867b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    // 0x1867b8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1867b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1867bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1867bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867c0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1867c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1867c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1867C4u;
    {
        const bool branch_taken_0x1867c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1867C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867C4u;
        // 0x1867c8: 0xacd20000  sw          $s2, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867c4) {
            ctx->pc = 0x1867E0u;
            goto label_1867e0;
        }
    }
    ctx->pc = 0x1867CCu;
    // 0x1867cc: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1867CCu;
    SET_GPR_U32(ctx, 31, 0x1867D4u);
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1867CCu, 0x1867D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1867D4u;
label_1867d4:
    // 0x1867d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1867d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1867d8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1867d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x1867dc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1867dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1867e0:
    // 0x1867e0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1867e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1867e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1867e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1867e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1867e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1867ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1867ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1867f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1867f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1867f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1867F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1867F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867F4u;
        // 0x1867f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1867F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1867FCu;
}
