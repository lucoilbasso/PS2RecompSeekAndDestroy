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

// Function: entry_0016fd90
// Address: 0x16fd90 - 0x16fdc4
void entry_0016fd90_0x16fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fd90_0x16fd90");
#endif

    switch (ctx->pc) {
        case 0x16fd9cu: goto label_16fd9c;
        default: break;
    }

    ctx->pc = 0x16fd90u;

    // 0x16fd90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16fd94: 0xc066546  jal         func_199518
    ctx->pc = 0x16FD94u;
    SET_GPR_U32(ctx, 31, 0x16FD9Cu);
    ctx->pc = 0x16FD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD94u;
    // 0x16fd98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199518u, 0x16FD94u, 0x16FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD9Cu;
label_16fd9c:
    // 0x16fd9c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x16fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x16fda0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x16fda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x16fda4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x16fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x16fda8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x16fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16fdac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fdb0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FDB0u;
    {
        const bool branch_taken_0x16fdb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDB0u;
        // 0x16fdb4: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdb0) {
            ctx->pc = 0x16FDC4u;
            return;
        }
    }
    ctx->pc = 0x16FDB8u;
    // 0x16fdb8: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x16fdb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
    // 0x16fdbc: 0x2652d570  addiu       $s2, $s2, -0x2A90
    ctx->pc = 0x16fdbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956400));
    // 0x16fdc0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x16fdc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->pc = 0x16fdc4u;
}
