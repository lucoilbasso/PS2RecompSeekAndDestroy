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

// Function: caseD_12
// Address: 0x133898 - 0x1338cc
void caseD_12_0x133898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x133898");
#endif

    switch (ctx->pc) {
        case 0x1338a0u: goto label_1338a0;
        case 0x1338a8u: goto label_1338a8;
        default: break;
    }

    ctx->pc = 0x133898u;

    // 0x133898: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133898u;
    SET_GPR_U32(ctx, 31, 0x1338A0u);
    ctx->pc = 0x13389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133898u;
    // 0x13389c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133898u, 0x1338A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338A0u;
label_1338a0:
    // 0x1338a0: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x1338A0u;
    SET_GPR_U32(ctx, 31, 0x1338A8u);
    ctx->pc = 0x1338A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338A0u;
    // 0x1338a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x1338A0u, 0x1338A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338A8u;
label_1338a8:
    // 0x1338a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1338a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1338ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1338acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338b0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1338b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1338b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1338b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1338b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1338b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1338bc: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1338BCu;
    {
        const bool branch_taken_0x1338bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1338C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338BCu;
        // 0x1338c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338bc) {
            ctx->pc = 0x1338CCu;
            return;
        }
    }
    ctx->pc = 0x1338C4u;
    // 0x1338c4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1338c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1338c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1338c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    ctx->pc = 0x1338ccu;
}
