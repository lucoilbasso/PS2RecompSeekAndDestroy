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

// Function: GetEmptyGenerator__9ApcEfeGen
// Address: 0x132190 - 0x1321d4
void GetEmptyGenerator__9ApcEfeGen_0x132190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEmptyGenerator__9ApcEfeGen_0x132190");
#endif

    ctx->pc = 0x132190u;

    // 0x132190: 0x8c830154  lw          $v1, 0x154($a0)
    ctx->pc = 0x132190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x132194: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132198: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x132198u;
    {
        const bool branch_taken_0x132198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132198u;
        // 0x13219c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132198) {
            ctx->pc = 0x1321CCu;
            goto label_1321cc;
        }
    }
    ctx->pc = 0x1321A0u;
    // 0x1321a0: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x1321a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1321a4: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1321a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1321a8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1321A8u;
    {
        const bool branch_taken_0x1321a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1321ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321A8u;
        // 0x1321ac: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1321a8) {
            ctx->pc = 0x1321C0u;
            goto label_1321c0;
        }
    }
    ctx->pc = 0x1321B0u;
    // 0x1321b0: 0xac850150  sw          $a1, 0x150($a0)
    ctx->pc = 0x1321b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 5));
    // 0x1321b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1321B4u;
    {
        const bool branch_taken_0x1321b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1321B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321B4u;
        // 0x1321b8: 0xaca00060  sw          $zero, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1321b4) {
            ctx->pc = 0x1321C8u;
            goto label_1321c8;
        }
    }
    ctx->pc = 0x1321BCu;
    // 0x1321bc: 0x0  nop
    ctx->pc = 0x1321bcu;
    // NOP
label_1321c0:
    // 0x1321c0: 0xaca30060  sw          $v1, 0x60($a1)
    ctx->pc = 0x1321c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
    // 0x1321c4: 0xac850150  sw          $a1, 0x150($a0)
    ctx->pc = 0x1321c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 5));
label_1321c8:
    // 0x1321c8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1321c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1321cc:
    // 0x1321cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1321CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1321CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1321D4u;
}
