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

// Function: entry_001b2668
// Address: 0x1b2668 - 0x1b26c0
void entry_001b2668_0x1b2668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2668_0x1b2668");
#endif

    switch (ctx->pc) {
        case 0x1b267cu: goto label_1b267c;
        case 0x1b2698u: goto label_1b2698;
        case 0x1b26a0u: goto label_1b26a0;
        default: break;
    }

    ctx->pc = 0x1b2668u;

    // 0x1b2668: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b2668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1b266c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2670: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x1b2670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x1b2674: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1B2674u;
    SET_GPR_U32(ctx, 31, 0x1B267Cu);
    ctx->pc = 0x1B2678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2674u;
    // 0x1b2678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1B2674u, 0x1B267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B267Cu;
label_1b267c:
    // 0x1b267c: 0x4400047  bltz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1B267Cu;
    {
        const bool branch_taken_0x1b267c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B267Cu;
        // 0x1b2680: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b267c) {
            ctx->pc = 0x1B279Cu;
            return;
        }
    }
    ctx->pc = 0x1B2684u;
    // 0x1b2684: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b2684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b2688: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1B2688u;
    {
        const bool branch_taken_0x1b2688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2688u;
        // 0x1b268c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2688) {
            ctx->pc = 0x1B2640u;
            return;
        }
    }
    ctx->pc = 0x1B2690u;
    // 0x1b2690: 0xc06c7e0  jal         func_1B1F80
    ctx->pc = 0x1B2690u;
    SET_GPR_U32(ctx, 31, 0x1B2698u);
    ctx->pc = 0x1B2694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2690u;
    // 0x1b2694: 0x3c140025  lui         $s4, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F80u, 0x1B2690u, 0x1B2698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2698u;
label_1b2698:
    // 0x1b2698: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B2698u;
    SET_GPR_U32(ctx, 31, 0x1B26A0u);
    ctx->pc = 0x1B269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2698u;
    // 0x1b269c: 0x8e84aa10  lw          $a0, -0x55F0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B2698u, 0x1B26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26A0u;
label_1b26a0:
    // 0x1b26a0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b26a4: 0x2463af80  addiu       $v1, $v1, -0x5080
    ctx->pc = 0x1b26a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946688));
    // 0x1b26a8: 0x24640200  addiu       $a0, $v1, 0x200
    ctx->pc = 0x1b26a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x1b26ac: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1b26acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b26b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B26B0u;
    {
        const bool branch_taken_0x1b26b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26B0u;
        // 0x1b26b4: 0x3c120041  lui         $s2, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26b0) {
            ctx->pc = 0x1B26E4u;
            return;
        }
    }
    ctx->pc = 0x1B26B8u;
    // 0x1b26b8: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b26b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1b26bc: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b26bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b26c0u;
}
