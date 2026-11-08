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

// Function: caseD_19
// Address: 0x108ee8 - 0x108f24
void caseD_19_0x108ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x108ee8");
#endif

    switch (ctx->pc) {
        case 0x108ef0u: goto label_108ef0;
        case 0x108efcu: goto label_108efc;
        case 0x108f20u: goto label_108f20;
        default: break;
    }

    ctx->pc = 0x108ee8u;

    // 0x108ee8: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x108EE8u;
    SET_GPR_U32(ctx, 31, 0x108EF0u);
    ctx->pc = 0x108EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EE8u;
    // 0x108eec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x108EE8u, 0x108EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EF0u;
label_108ef0:
    // 0x108ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ef4: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x108EF4u;
    SET_GPR_U32(ctx, 31, 0x108EFCu);
    ctx->pc = 0x108EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EF4u;
    // 0x108ef8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x108EF4u, 0x108EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EFCu;
label_108efc:
    // 0x108efc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x108efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f04: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x108f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x108f08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x108f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x108f0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108f10: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108F10u;
    {
        const bool branch_taken_0x108f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x108f10) {
            ctx->pc = 0x108F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108F10u;
            // 0x108f14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108F24u;
            return;
        }
    }
    ctx->pc = 0x108F18u;
    // 0x108f18: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x108F18u;
    SET_GPR_U32(ctx, 31, 0x108F20u);
    ctx->pc = 0x108F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F18u;
    // 0x108f1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x108F18u, 0x108F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F20u;
label_108f20:
    // 0x108f20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108f24u;
}
