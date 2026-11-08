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

// Function: entry_00199598
// Address: 0x199598 - 0x1995e4
void entry_00199598_0x199598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199598_0x199598");
#endif

    switch (ctx->pc) {
        case 0x1995bcu: goto label_1995bc;
        case 0x1995d4u: goto label_1995d4;
        default: break;
    }

    ctx->pc = 0x199598u;

    // 0x199598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19959c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1995a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1995a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995a4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1995a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1995a8: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1995a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1995ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1995acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1995b0: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x1995b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x1995b4: 0xc066620  jal         func_199880
    ctx->pc = 0x1995B4u;
    SET_GPR_U32(ctx, 31, 0x1995BCu);
    ctx->pc = 0x1995B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995B4u;
    // 0x1995b8: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199880u, 0x1995B4u, 0x1995BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995BCu;
label_1995bc:
    // 0x1995bc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1995bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1995c0: 0x2484de80  addiu       $a0, $a0, -0x2180
    ctx->pc = 0x1995c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958720));
    // 0x1995c4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1995C4u;
    {
        const bool branch_taken_0x1995c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995C4u;
        // 0x1995c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995c4) {
            ctx->pc = 0x1995E4u;
            return;
        }
    }
    ctx->pc = 0x1995CCu;
    // 0x1995cc: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1995CCu;
    SET_GPR_U32(ctx, 31, 0x1995D4u);
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1995CCu, 0x1995D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995D4u;
label_1995d4:
    // 0x1995d4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1995d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1995d8: 0x2484de98  addiu       $a0, $a0, -0x2168
    ctx->pc = 0x1995d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958744));
    // 0x1995dc: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1995DCu;
    SET_GPR_U32(ctx, 31, 0x1995E4u);
    ctx->pc = 0x1995E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995DCu;
    // 0x1995e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1995DCu, 0x1995E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995E4u;
}
