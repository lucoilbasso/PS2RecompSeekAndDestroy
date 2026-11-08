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

// Function: entry_001c14b4
// Address: 0x1c14b4 - 0x1c14fc
void entry_001c14b4_0x1c14b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c14b4_0x1c14b4");
#endif

    switch (ctx->pc) {
        case 0x1c14f4u: goto label_1c14f4;
        default: break;
    }

    ctx->pc = 0x1c14b4u;

    // 0x1c14b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C14B4u;
    {
        const bool branch_taken_0x1c14b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14B4u;
        // 0x1c14b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14b4) {
            ctx->pc = 0x1C14FCu;
            return;
        }
    }
    ctx->pc = 0x1C14BCu;
    // 0x1c14bc: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x1c14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1c14c0: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x1c14c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1c14c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c14c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c14cc: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x1c14ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1c14d0: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x1c14d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x1c14d4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1c14d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1c14d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c14d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c14dc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1c14dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14e0: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x1c14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x1c14e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c14e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14e8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1c14e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c14ec: 0xc0705fc  jal         func_1C17F0
    ctx->pc = 0x1C14ECu;
    SET_GPR_U32(ctx, 31, 0x1C14F4u);
    ctx->pc = 0x1C14F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14ECu;
    // 0x1c14f0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17F0u, 0x1C14ECu, 0x1C14F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14F4u;
label_1c14f4:
    // 0x1c14f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C14F4u;
    {
        const bool branch_taken_0x1c14f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14F4u;
        // 0x1c14f8: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14f4) {
            ctx->pc = 0x1C1524u;
            return;
        }
    }
    ctx->pc = 0x1C14FCu;
}
