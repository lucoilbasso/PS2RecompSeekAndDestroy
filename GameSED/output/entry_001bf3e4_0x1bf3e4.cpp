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

// Function: entry_001bf3e4
// Address: 0x1bf3e4 - 0x1bf424
void entry_001bf3e4_0x1bf3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf3e4_0x1bf3e4");
#endif

    switch (ctx->pc) {
        case 0x1bf41cu: goto label_1bf41c;
        default: break;
    }

    ctx->pc = 0x1bf3e4u;

    // 0x1bf3e4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1bf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bf3e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3ec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1bf3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf3f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf3f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf3f8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bf3f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf404: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1bf404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1bf408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf40c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf410: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf414: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF414u;
    SET_GPR_U32(ctx, 31, 0x1BF41Cu);
    ctx->pc = 0x1BF418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF414u;
    // 0x1bf418: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF414u, 0x1BF41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF41Cu;
label_1bf41c:
    // 0x1bf41c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1BF41Cu;
    {
        const bool branch_taken_0x1bf41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF41Cu;
        // 0x1bf420: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf41c) {
            ctx->pc = 0x1BF4D8u;
            return;
        }
    }
    ctx->pc = 0x1BF424u;
}
