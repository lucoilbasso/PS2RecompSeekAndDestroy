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

// Function: entry_001984c0
// Address: 0x1984c0 - 0x198510
void entry_001984c0_0x1984c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001984c0_0x1984c0");
#endif

    switch (ctx->pc) {
        case 0x1984ecu: goto label_1984ec;
        case 0x1984f4u: goto label_1984f4;
        case 0x198500u: goto label_198500;
        default: break;
    }

    ctx->pc = 0x1984c0u;

    // 0x1984c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1984c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1984c4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1984c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1984c8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1984c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1984cc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1984ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1984d0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1984d4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1984d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1984d8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1984D8u;
    {
        const bool branch_taken_0x1984d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984D8u;
        // 0x1984dc: 0x26b10150  addiu       $s1, $s5, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984d8) {
            ctx->pc = 0x1985A8u;
            return;
        }
    }
    ctx->pc = 0x1984E0u;
    // 0x1984e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1984e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984e4: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1984E4u;
    SET_GPR_U32(ctx, 31, 0x1984ECu);
    ctx->pc = 0x1984E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1984E4u;
    // 0x1984e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1984E4u, 0x1984ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984ECu;
label_1984ec:
    // 0x1984ec: 0xc065eec  jal         func_197BB0
    ctx->pc = 0x1984ECu;
    SET_GPR_U32(ctx, 31, 0x1984F4u);
    ctx->pc = 0x1984F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1984ECu;
    // 0x1984f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197BB0u, 0x1984ECu, 0x1984F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984F4u;
label_1984f4:
    // 0x1984f4: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x1984f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x1984f8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1984F8u;
    SET_GPR_U32(ctx, 31, 0x198500u);
    ctx->pc = 0x1984FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1984F8u;
    // 0x1984fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1984F8u, 0x198500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198500u;
label_198500:
    // 0x198500: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198504: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x198504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198508: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x198508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19850c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x19850cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    ctx->pc = 0x198510u;
}
