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

// Function: _InqCurrentUnit__FP15BsSCDEntControl
// Address: 0x14cd80 - 0x14cdd4
void ps2__InqCurrentUnit__FP15BsSCDEntControl_0x14cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqCurrentUnit__FP15BsSCDEntControl_0x14cd80");
#endif

    switch (ctx->pc) {
        case 0x14cdc0u: goto label_14cdc0;
        default: break;
    }

    ctx->pc = 0x14cd80u;

    // 0x14cd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14cd84: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x14cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x14cd88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14cd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14cd8c: 0x24060118  addiu       $a2, $zero, 0x118
    ctx->pc = 0x14cd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14cd90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14cd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14cd94: 0x8c83b830  lw          $v1, -0x47D0($a0)
    ctx->pc = 0x14cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x14cd98: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x14cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14cd9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14cda0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cda4: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x14cda4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x14cda8: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CDA8u;
    {
        const bool branch_taken_0x14cda8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x14CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDA8u;
        // 0x14cdac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cda8) {
            ctx->pc = 0x14CDC0u;
            goto label_14cdc0;
        }
    }
    ctx->pc = 0x14CDB0u;
    // 0x14cdb0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14cdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14cdb4: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14cdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x14cdb8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CDB8u;
    SET_GPR_U32(ctx, 31, 0x14CDC0u);
    ctx->pc = 0x14CDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CDB8u;
    // 0x14cdbc: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CDB8u, 0x14CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDC0u;
label_14cdc0:
    // 0x14cdc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14cdc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cdc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14cdc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cdc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14cdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14cdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x14CDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDCCu;
        // 0x14cdd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CDD4u;
}
