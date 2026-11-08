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

// Function: entry_001bb448
// Address: 0x1bb448 - 0x1bb498
void entry_001bb448_0x1bb448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb448_0x1bb448");
#endif

    switch (ctx->pc) {
        case 0x1bb47cu: goto label_1bb47c;
        case 0x1bb490u: goto label_1bb490;
        default: break;
    }

    ctx->pc = 0x1bb448u;

    // 0x1bb448: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bb448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bb44c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bb44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bb450: 0x2450d280  addiu       $s0, $v0, -0x2D80
    ctx->pc = 0x1bb450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955648));
    // 0x1bb454: 0x2484dac8  addiu       $a0, $a0, -0x2538
    ctx->pc = 0x1bb454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957768));
    // 0x1bb458: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bb458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1bb45c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb468: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb468u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb46c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1bb46cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb470: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1bb470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bb474: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1BB474u;
    SET_GPR_U32(ctx, 31, 0x1BB47Cu);
    ctx->pc = 0x1BB478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB474u;
    // 0x1bb478: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1BB474u, 0x1BB47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB47Cu;
label_1bb47c:
    // 0x1bb47c: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB47Cu;
    {
        const bool branch_taken_0x1bb47c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bb47c) {
            ctx->pc = 0x1BB480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB47Cu;
            // 0x1bb480: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB498u;
            return;
        }
    }
    ctx->pc = 0x1BB484u;
    // 0x1bb484: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bb484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bb488: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BB488u;
    SET_GPR_U32(ctx, 31, 0x1BB490u);
    ctx->pc = 0x1BB48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB488u;
    // 0x1bb48c: 0x8c44c0ac  lw          $a0, -0x3F54($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BB488u, 0x1BB490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB490u;
label_1bb490:
    // 0x1bb490: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BB490u;
    {
        const bool branch_taken_0x1bb490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB490u;
        // 0x1bb494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb490) {
            ctx->pc = 0x1BB4DCu;
            return;
        }
    }
    ctx->pc = 0x1BB498u;
}
