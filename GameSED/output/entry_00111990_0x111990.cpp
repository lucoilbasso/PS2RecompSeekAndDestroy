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

// Function: entry_00111990
// Address: 0x111990 - 0x1119b8
void entry_00111990_0x111990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111990_0x111990");
#endif

    switch (ctx->pc) {
        case 0x1119acu: goto label_1119ac;
        default: break;
    }

    ctx->pc = 0x111990u;

    // 0x111990: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x111990u;
    {
        const bool branch_taken_0x111990 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x111990) {
            ctx->pc = 0x111994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111990u;
            // 0x111994: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1119C8u;
            return;
        }
    }
    ctx->pc = 0x111998u;
    // 0x111998: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x111998u;
    {
        const bool branch_taken_0x111998 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111998u;
        // 0x11199c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111998) {
            ctx->pc = 0x1119B8u;
            return;
        }
    }
    ctx->pc = 0x1119A0u;
    // 0x1119a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1119a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119a4: 0xc067586  jal         func_19D618
    ctx->pc = 0x1119A4u;
    SET_GPR_U32(ctx, 31, 0x1119ACu);
    ctx->pc = 0x1119A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119A4u;
    // 0x1119a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D618u, 0x1119A4u, 0x1119ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119ACu;
label_1119ac:
    // 0x1119ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1119ACu;
    {
        const bool branch_taken_0x1119ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119ACu;
        // 0x1119b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119ac) {
            ctx->pc = 0x1119C8u;
            return;
        }
    }
    ctx->pc = 0x1119B4u;
    // 0x1119b4: 0x0  nop
    ctx->pc = 0x1119b4u;
    // NOP
    ctx->pc = 0x1119b8u;
}
