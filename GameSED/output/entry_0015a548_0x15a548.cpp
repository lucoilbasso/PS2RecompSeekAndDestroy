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

// Function: entry_0015a548
// Address: 0x15a548 - 0x15a594
void entry_0015a548_0x15a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a548_0x15a548");
#endif

    switch (ctx->pc) {
        case 0x15a590u: goto label_15a590;
        default: break;
    }

    ctx->pc = 0x15a548u;

    // 0x15a548: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x15a548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x15a54c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x15a550: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15a550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15a554: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15a554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x15a558: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15a558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x15a55c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x15a560: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x15a560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x15a564: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x15a564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x15a568: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x15a568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x15a56c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x15a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x15a570: 0x641ffd1  bgez        $s2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x15A570u;
    {
        const bool branch_taken_0x15a570 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x15A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A570u;
        // 0x15a574: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a570) {
            ctx->pc = 0x15A4B8u;
            return;
        }
    }
    ctx->pc = 0x15A578u;
    // 0x15a578: 0x96620014  lhu         $v0, 0x14($s3)
    ctx->pc = 0x15a578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x15a57c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x15a57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x15a580: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A580u;
    {
        const bool branch_taken_0x15a580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a580) {
            ctx->pc = 0x15A584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A580u;
            // 0x15a584: 0x96620014  lhu         $v0, 0x14($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A594u;
            return;
        }
    }
    ctx->pc = 0x15A588u;
    // 0x15a588: 0xc057e64  jal         func_15F990
    ctx->pc = 0x15A588u;
    SET_GPR_U32(ctx, 31, 0x15A590u);
    ctx->pc = 0x15A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A588u;
    // 0x15a58c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F990u, 0x15A588u, 0x15A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A590u;
label_15a590:
    // 0x15a590: 0x96620014  lhu         $v0, 0x14($s3)
    ctx->pc = 0x15a590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->pc = 0x15a594u;
}
