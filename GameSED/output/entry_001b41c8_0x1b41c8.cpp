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

// Function: entry_001b41c8
// Address: 0x1b41c8 - 0x1b4250
void entry_001b41c8_0x1b41c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b41c8_0x1b41c8");
#endif

    switch (ctx->pc) {
        case 0x1b41e4u: goto label_1b41e4;
        case 0x1b4230u: goto label_1b4230;
        case 0x1b4240u: goto label_1b4240;
        case 0x1b4248u: goto label_1b4248;
        default: break;
    }

    ctx->pc = 0x1b41c8u;

    // 0x1b41c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b41cc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b41ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b41d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b41d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b41d4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1b41d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1b41d8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b41dc: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B41DCu;
    SET_GPR_U32(ctx, 31, 0x1B41E4u);
    ctx->pc = 0x1B41E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41DCu;
    // 0x1b41e0: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B41DCu, 0x1B41E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41E4u;
label_1b41e4:
    // 0x1b41e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b41e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41e8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1b41e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b41ec: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b41f0: 0xae919a80  sw          $s1, -0x6580($s4)
    ctx->pc = 0x1b41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294941312), GPR_U32(ctx, 17));
    // 0x1b41f4: 0x2453a6c0  addiu       $s3, $v0, -0x5940
    ctx->pc = 0x1b41f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
    // 0x1b41f8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b41f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b41fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b41fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4200: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1b4200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1b4204: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b4204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b4208: 0x2484b180  addiu       $a0, $a0, -0x4E80
    ctx->pc = 0x1b4208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947200));
    // 0x1b420c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b420cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4210: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b4210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b4214: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b421c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1b421cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b4220: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1b4220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4224: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4224u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4228: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4228u;
    SET_GPR_U32(ctx, 31, 0x1B4230u);
    ctx->pc = 0x1B422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4228u;
    // 0x1b422c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4228u, 0x1B4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4230u;
label_1b4230:
    // 0x1b4230: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4230u;
    {
        const bool branch_taken_0x1b4230 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b4230) {
            ctx->pc = 0x1B4234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4230u;
            // 0x1b4234: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4250u;
            return;
        }
    }
    ctx->pc = 0x1B4238u;
    // 0x1b4238: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4238u;
    SET_GPR_U32(ctx, 31, 0x1B4240u);
    ctx->pc = 0x1B423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4238u;
    // 0x1b423c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4238u, 0x1B4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4240u;
label_1b4240:
    // 0x1b4240: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4240u;
    SET_GPR_U32(ctx, 31, 0x1B4248u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4240u, 0x1B4248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4248u;
label_1b4248:
    // 0x1b4248: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B4248u;
    {
        const bool branch_taken_0x1b4248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4248u;
        // 0x1b424c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4248) {
            ctx->pc = 0x1B4298u;
            return;
        }
    }
    ctx->pc = 0x1B4250u;
}
