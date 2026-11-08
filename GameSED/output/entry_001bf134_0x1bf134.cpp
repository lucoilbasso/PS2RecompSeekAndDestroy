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

// Function: entry_001bf134
// Address: 0x1bf134 - 0x1bf1b8
void entry_001bf134_0x1bf134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf134_0x1bf134");
#endif

    switch (ctx->pc) {
        case 0x1bf190u: goto label_1bf190;
        default: break;
    }

    ctx->pc = 0x1bf134u;

    // 0x1bf134: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1BF134u;
    {
        const bool branch_taken_0x1bf134 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF134u;
        // 0x1bf138: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf134) {
            ctx->pc = 0x1BF204u;
            return;
        }
    }
    ctx->pc = 0x1BF13Cu;
    // 0x1bf13c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1bf13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1bf140: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x1bf140u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1bf144: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1bf144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf148: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1bf148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bf14c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bf14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bf150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf154: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bf154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bf158: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1bf158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1bf15c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf160: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bf160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf16c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bf16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf170: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf174: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf178: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf17c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1bf17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1bf180: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf184: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf184u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf188: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF188u;
    SET_GPR_U32(ctx, 31, 0x1BF190u);
    ctx->pc = 0x1BF18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF188u;
    // 0x1bf18c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF188u, 0x1BF190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF190u;
label_1bf190:
    // 0x1bf190: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1bf190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1bf194: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF194u;
    {
        const bool branch_taken_0x1bf194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1BF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF194u;
        // 0x1bf198: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf194) {
            ctx->pc = 0x1BF1B8u;
            return;
        }
    }
    ctx->pc = 0x1BF19Cu;
    // 0x1bf19c: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1bf19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1bf1a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF1A0u;
    {
        const bool branch_taken_0x1bf1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1A0u;
        // 0x1bf1a4: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1a0) {
            ctx->pc = 0x1BF1BCu;
            return;
        }
    }
    ctx->pc = 0x1BF1A8u;
    // 0x1bf1a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bf1a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf1ac: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x1bf1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x1bf1b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF1B0u;
    {
        const bool branch_taken_0x1bf1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1B0u;
        // 0x1bf1b4: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1b0) {
            ctx->pc = 0x1BF1BCu;
            return;
        }
    }
    ctx->pc = 0x1BF1B8u;
}
