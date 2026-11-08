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

// Function: entry_001b0924
// Address: 0x1b0924 - 0x1b0978
void entry_001b0924_0x1b0924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0924_0x1b0924");
#endif

    switch (ctx->pc) {
        case 0x1b0934u: goto label_1b0934;
        case 0x1b093cu: goto label_1b093c;
        case 0x1b0944u: goto label_1b0944;
        case 0x1b0950u: goto label_1b0950;
        default: break;
    }

    ctx->pc = 0x1b0924u;

    // 0x1b0924: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1b0924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1b0928: 0xdc25aae8  ld          $a1, -0x5518($at)
    ctx->pc = 0x1b0928u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25AAE8u));
    // 0x1b092c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1B092Cu;
    SET_GPR_U32(ctx, 31, 0x1B0934u);
    ctx->pc = 0x1B0930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B092Cu;
    // 0x1b0930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1B092Cu, 0x1B0934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0934u;
label_1b0934:
    // 0x1b0934: 0xc072690  jal         func_1C9A40
    ctx->pc = 0x1B0934u;
    SET_GPR_U32(ctx, 31, 0x1B093Cu);
    ctx->pc = 0x1B0938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0934u;
    // 0x1b0938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9A40u, 0x1B0934u, 0x1B093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B093Cu;
label_1b093c:
    // 0x1b093c: 0xc06c1e8  jal         func_1B07A0
    ctx->pc = 0x1B093Cu;
    SET_GPR_U32(ctx, 31, 0x1B0944u);
    ctx->pc = 0x1B0940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B093Cu;
    // 0x1b0940: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B07A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B07A0u, 0x1B093Cu, 0x1B0944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0944u;
label_1b0944:
    // 0x1b0944: 0x2644aac0  addiu       $a0, $s2, -0x5540
    ctx->pc = 0x1b0944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945472));
    // 0x1b0948: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B0948u;
    SET_GPR_U32(ctx, 31, 0x1B0950u);
    ctx->pc = 0x1B094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0948u;
    // 0x1b094c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B0948u, 0x1B0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0950u;
label_1b0950:
    // 0x1b0950: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0950u;
    {
        const bool branch_taken_0x1b0950 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1B0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0950u;
        // 0x1b0954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0950) {
            ctx->pc = 0x1B0978u;
            return;
        }
    }
    ctx->pc = 0x1B0958u;
    // 0x1b0958: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b0958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b095c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b095cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0960: 0x2484aac8  addiu       $a0, $a0, -0x5538
    ctx->pc = 0x1b0960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945480));
    // 0x1b0964: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b0964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0968: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b0968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b096c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b096cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0970: 0x806c3e2  j           func_1B0F88
    ctx->pc = 0x1B0970u;
    ctx->pc = 0x1B0974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0970u;
    // 0x1b0974: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    kprintf_0x1b0f88(rdram, ctx, runtime); return;
    ctx->pc = 0x1B0978u;
}
