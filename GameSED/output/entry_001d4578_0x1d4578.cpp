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

// Function: entry_001d4578
// Address: 0x1d4578 - 0x1d45c0
void entry_001d4578_0x1d4578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4578_0x1d4578");
#endif

    switch (ctx->pc) {
        case 0x1d4598u: goto label_1d4598;
        case 0x1d45acu: goto label_1d45ac;
        default: break;
    }

    ctx->pc = 0x1d4578u;

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
}
