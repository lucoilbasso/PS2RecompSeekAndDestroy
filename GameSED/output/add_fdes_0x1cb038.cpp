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

// Function: add_fdes
// Address: 0x1cb038 - 0x1cb0c4
void add_fdes_0x1cb038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("add_fdes_0x1cb038");
#endif

    switch (ctx->pc) {
        case 0x1cb050u: goto label_1cb050;
        default: break;
    }

    ctx->pc = 0x1cb038u;

    // 0x1cb038: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x1cb038u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb03c: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x1cb03cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cb040: 0x1140001d  beqz        $t2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CB040u;
    {
        const bool branch_taken_0x1cb040 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB040u;
        // 0x1cb044: 0x8cec0000  lw          $t4, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb040) {
            ctx->pc = 0x1CB0B8u;
            goto label_1cb0b8;
        }
    }
    ctx->pc = 0x1CB048u;
    // 0x1cb048: 0x24ae0004  addiu       $t6, $a1, 0x4
    ctx->pc = 0x1cb048u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1cb04c: 0x0  nop
    ctx->pc = 0x1cb04cu;
    // NOP
label_1cb050:
    // 0x1cb050: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cb050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cb054: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CB054u;
    {
        const bool branch_taken_0x1cb054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb054) {
            ctx->pc = 0x1CB058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB054u;
            // 0x1cb058: 0x8a1021  addu        $v0, $a0, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB0A8u;
            goto label_1cb0a8;
        }
    }
    ctx->pc = 0x1CB05Cu;
    // 0x1cb05c: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1cb05cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cb060: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB060u;
    {
        const bool branch_taken_0x1cb060 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB060u;
        // 0x1cb064: 0x10b682b  sltu        $t5, $t0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb060) {
            ctx->pc = 0x1CB0A4u;
            goto label_1cb0a4;
        }
    }
    ctx->pc = 0x1CB068u;
    // 0x1cb068: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x1cb068u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cb06c: 0x51200009  beql        $t1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB06Cu;
    {
        const bool branch_taken_0x1cb06c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb06c) {
            ctx->pc = 0x1CB070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB06Cu;
            // 0x1cb070: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB094u;
            goto label_1cb094;
        }
    }
    ctx->pc = 0x1CB074u;
    // 0x1cb074: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x1cb074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1cb078: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cb078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb07c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb080: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x1cb080u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x1cb084: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1cb084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1cb088: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1cb088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1cb08c: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x1cb08cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb090: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1cb090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cb094:
    // 0x1cb094: 0x10d580b  movn        $t3, $t0, $t5
    ctx->pc = 0x1cb094u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 8));
    // 0x1cb098: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1cb098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1cb09c: 0x183102b  sltu        $v0, $t4, $v1
    ctx->pc = 0x1cb09cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cb0a0: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x1cb0a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
label_1cb0a4:
    // 0x1cb0a4: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x1cb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1cb0a8:
    // 0x1cb0a8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1cb0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cb0ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb0b0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1CB0B0u;
    {
        const bool branch_taken_0x1cb0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0B0u;
        // 0x1cb0b4: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0b0) {
            ctx->pc = 0x1CB050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb050;
        }
    }
    ctx->pc = 0x1CB0B8u;
label_1cb0b8:
    // 0x1cb0b8: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x1cb0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x1cb0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0BCu;
        // 0x1cb0c0: 0xacec0000  sw          $t4, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB0C4u;
}
