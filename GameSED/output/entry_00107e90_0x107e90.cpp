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

// Function: entry_00107e90
// Address: 0x107e90 - 0x107ed8
void entry_00107e90_0x107e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e90_0x107e90");
#endif

    switch (ctx->pc) {
        case 0x107ec4u: goto label_107ec4;
        default: break;
    }

    ctx->pc = 0x107e90u;

    // 0x107e90: 0x14820021  bne         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x107E90u;
    {
        const bool branch_taken_0x107e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x107E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E90u;
        // 0x107e94: 0x24020346  addiu       $v0, $zero, 0x346 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e90) {
            ctx->pc = 0x107F18u;
            return;
        }
    }
    ctx->pc = 0x107E98u;
    // 0x107e98: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x107e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x107e9c: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x107E9Cu;
    {
        const bool branch_taken_0x107e9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x107EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E9Cu;
        // 0x107ea0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e9c) {
            ctx->pc = 0x107ED8u;
            return;
        }
    }
    ctx->pc = 0x107EA4u;
    // 0x107ea4: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x107ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107ea8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x107ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x107eac: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x107eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x107eb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x107eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107eb4: 0x10650033  beq         $v1, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x107EB4u;
    {
        const bool branch_taken_0x107eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x107EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EB4u;
        // 0x107eb8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107eb4) {
            ctx->pc = 0x107F84u;
            return;
        }
    }
    ctx->pc = 0x107EBCu;
    // 0x107ebc: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x107EBCu;
    SET_GPR_U32(ctx, 31, 0x107EC4u);
    ctx->pc = 0x107EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107EBCu;
    // 0x107ec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x107EBCu, 0x107EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EC4u;
label_107ec4:
    // 0x107ec4: 0x8e4301c4  lw          $v1, 0x1C4($s2)
    ctx->pc = 0x107ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x107ec8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x107ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x107ecc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x107ECCu;
    {
        const bool branch_taken_0x107ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107ECCu;
        // 0x107ed0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ecc) {
            ctx->pc = 0x107F84u;
            return;
        }
    }
    ctx->pc = 0x107ED4u;
    // 0x107ed4: 0x0  nop
    ctx->pc = 0x107ed4u;
    // NOP
    ctx->pc = 0x107ed8u;
}
