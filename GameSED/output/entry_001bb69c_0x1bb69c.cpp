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

// Function: entry_001bb69c
// Address: 0x1bb69c - 0x1bb6f4
void entry_001bb69c_0x1bb69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb69c_0x1bb69c");
#endif

    switch (ctx->pc) {
        case 0x1bb6b4u: goto label_1bb6b4;
        case 0x1bb6ecu: goto label_1bb6ec;
        default: break;
    }

    ctx->pc = 0x1bb69cu;

    // 0x1bb69c: 0x2532823  subu        $a1, $s2, $s3
    ctx->pc = 0x1bb69cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1bb6a0: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x1bb6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x1bb6a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1bb6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb6ac: 0xc06ee1c  jal         func_1BB870
    ctx->pc = 0x1BB6ACu;
    SET_GPR_U32(ctx, 31, 0x1BB6B4u);
    ctx->pc = 0x1BB6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6ACu;
    // 0x1bb6b0: 0x26a8d918  addiu       $t0, $s5, -0x26E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB870u, 0x1BB6ACu, 0x1BB6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6B4u;
label_1bb6b4:
    // 0x1bb6b4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1bb6b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1bb6b8: 0x28402  srl         $s0, $v0, 16
    ctx->pc = 0x1bb6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1bb6bc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BB6BCu;
    {
        const bool branch_taken_0x1bb6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6BCu;
        // 0x1bb6c0: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6bc) {
            ctx->pc = 0x1BB6F4u;
            return;
        }
    }
    ctx->pc = 0x1BB6C4u;
    // 0x1bb6c4: 0x8ec2c090  lw          $v0, -0x3F70($s6)
    ctx->pc = 0x1bb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951056)));
    // 0x1bb6c8: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BB6C8u;
    {
        const bool branch_taken_0x1bb6c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6C8u;
        // 0x1bb6cc: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6c8) {
            ctx->pc = 0x1BB704u;
            return;
        }
    }
    ctx->pc = 0x1BB6D0u;
    // 0x1bb6d0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1bb6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1bb6d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bb6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6d8: 0x2484b130  addiu       $a0, $a0, -0x4ED0
    ctx->pc = 0x1bb6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947120));
    // 0x1bb6dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6e0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bb6e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6e4: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BB6E4u;
    SET_GPR_U32(ctx, 31, 0x1BB6ECu);
    ctx->pc = 0x1BB6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6E4u;
    // 0x1bb6e8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BB6E4u, 0x1BB6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6ECu;
label_1bb6ec:
    // 0x1bb6ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB6ECu;
    {
        const bool branch_taken_0x1bb6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6ec) {
            ctx->pc = 0x1BB704u;
            return;
        }
    }
    ctx->pc = 0x1BB6F4u;
}
