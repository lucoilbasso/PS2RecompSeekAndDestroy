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

// Function: DamageReceive__7ApcTankP7WcActorii
// Address: 0x155e88 - 0x155ee0
void DamageReceive__7ApcTankP7WcActorii_0x155e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamageReceive__7ApcTankP7WcActorii_0x155e88");
#endif

    switch (ctx->pc) {
        case 0x155ed4u: goto label_155ed4;
        default: break;
    }

    ctx->pc = 0x155e88u;

    // 0x155e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155e8c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x155e8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155e94: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x155E94u;
    {
        const bool branch_taken_0x155e94 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x155E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E94u;
        // 0x155e98: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e94) {
            ctx->pc = 0x155ECCu;
            goto label_155ecc;
        }
    }
    ctx->pc = 0x155E9Cu;
    // 0x155e9c: 0x8c420264  lw          $v0, 0x264($v0)
    ctx->pc = 0x155e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x155ea0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x155ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x155ea4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155EA4u;
    {
        const bool branch_taken_0x155ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EA4u;
        // 0x155ea8: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ea4) {
            ctx->pc = 0x155ECCu;
            goto label_155ecc;
        }
    }
    ctx->pc = 0x155EACu;
    // 0x155eac: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x155eacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x155eb0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155EB0u;
    {
        const bool branch_taken_0x155eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x155eb0) {
            ctx->pc = 0x155ECCu;
            goto label_155ecc;
        }
    }
    ctx->pc = 0x155EB8u;
    // 0x155eb8: 0x95020266  lhu         $v0, 0x266($t0)
    ctx->pc = 0x155eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 614)));
    // 0x155ebc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x155ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x155ec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x155ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x155ec4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155EC4u;
    {
        const bool branch_taken_0x155ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EC4u;
        // 0x155ec8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ec4) {
            ctx->pc = 0x155ED8u;
            goto label_155ed8;
        }
    }
    ctx->pc = 0x155ECCu;
label_155ecc:
    // 0x155ecc: 0xc052e82  jal         func_14BA08
    ctx->pc = 0x155ECCu;
    SET_GPR_U32(ctx, 31, 0x155ED4u);
    ctx->pc = 0x14BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BA08u, 0x155ECCu, 0x155ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155ED4u;
label_155ed4:
    // 0x155ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155ed8:
    // 0x155ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x155ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155ED8u;
        // 0x155edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155EE0u;
}
