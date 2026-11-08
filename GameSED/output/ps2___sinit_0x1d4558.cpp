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

// Function: __sinit
// Address: 0x1d4558 - 0x1d45e4
void ps2___sinit_0x1d4558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_0x1d4558");
#endif

    switch (ctx->pc) {
        case 0x1d4598u: goto label_1d4598;
        case 0x1d45acu: goto label_1d45ac;
        case 0x1d45c0u: goto label_1d45c0;
        default: break;
    }

    ctx->pc = 0x1d4558u;

    // 0x1d4558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d455c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d4560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d4564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4568: 0x24424518  addiu       $v0, $v0, 0x4518
    ctx->pc = 0x1d4568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17688));
    // 0x1d456c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d456cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4570: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d4570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d4574: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x1d4574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x1d4578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d4578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d457c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d457cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4580: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1d4580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1d4584: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d4584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4588: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1d4588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1d458c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d458cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d4590: 0xc0750d2  jal         func_1D4348
    ctx->pc = 0x1D4590u;
    SET_GPR_U32(ctx, 31, 0x1D4598u);
    ctx->pc = 0x1D4594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4590u;
    // 0x1d4594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4348u, 0x1D4590u, 0x1D4598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4598u;
label_1d4598:
    // 0x1d4598: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x1d4598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x1d459c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d459cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d45a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d45a4: 0xc0750d2  jal         func_1D4348
    ctx->pc = 0x1D45A4u;
    SET_GPR_U32(ctx, 31, 0x1D45ACu);
    ctx->pc = 0x1D45A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D45A4u;
    // 0x1d45a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4348u, 0x1D45A4u, 0x1D45ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D45ACu;
label_1d45ac:
    // 0x1d45ac: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x1d45acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x1d45b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d45b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45b4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d45b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d45b8: 0xc0750d2  jal         func_1D4348
    ctx->pc = 0x1D45B8u;
    SET_GPR_U32(ctx, 31, 0x1D45C0u);
    ctx->pc = 0x1D45BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D45B8u;
    // 0x1d45bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4348u, 0x1D45B8u, 0x1D45C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D45C0u;
label_1d45c0:
    // 0x1d45c0: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x1d45c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x1d45c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d45c8: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x1d45c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x1d45cc: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x1d45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x1d45d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d45d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d45d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d45d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d45d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d45d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d45dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D45DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45DCu;
        // 0x1d45e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D45DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D45E4u;
}
