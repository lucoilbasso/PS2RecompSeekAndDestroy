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

// Function: entry_00175e70
// Address: 0x175e70 - 0x175ecc
void entry_00175e70_0x175e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175e70_0x175e70");
#endif

    switch (ctx->pc) {
        case 0x175eb0u: goto label_175eb0;
        default: break;
    }

    ctx->pc = 0x175e70u;

    // 0x175e70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x175e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x175e74: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x175e74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175e78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x175e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175e7c: 0x8e510038  lw          $s1, 0x38($s2)
    ctx->pc = 0x175e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x175e80: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x175e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x175e84: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x175e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x175e88: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x175e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x175e8c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x175e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x175e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e94: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x175e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x175e98: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x175e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x175e9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175ea0: 0x3231007f  andi        $s1, $s1, 0x7F
    ctx->pc = 0x175ea0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
    // 0x175ea4: 0x59ac0  sll         $s3, $a1, 11
    ctx->pc = 0x175ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x175ea8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x175EA8u;
    SET_GPR_U32(ctx, 31, 0x175EB0u);
    ctx->pc = 0x175EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175EA8u;
    // 0x175eac: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x175EA8u, 0x175EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175EB0u;
label_175eb0:
    // 0x175eb0: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x175eb0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
    // 0x175eb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x175eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175eb8: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x175eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x175ebc: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x175ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x175ec0: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x175ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x175ec4: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175EC4u;
    {
        const bool branch_taken_0x175ec4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x175ec4) {
            ctx->pc = 0x175EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175EC4u;
            // 0x175ec8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175ECCu;
            return;
        }
    }
    ctx->pc = 0x175ECCu;
}
