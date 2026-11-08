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

// Function: entry_0010e91c
// Address: 0x10e91c - 0x10e950
void entry_0010e91c_0x10e91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e91c_0x10e91c");
#endif

    switch (ctx->pc) {
        case 0x10e924u: goto label_10e924;
        case 0x10e948u: goto label_10e948;
        default: break;
    }

    ctx->pc = 0x10e91cu;

    // 0x10e91c: 0xc0436d2  jal         func_10DB48
    ctx->pc = 0x10E91Cu;
    SET_GPR_U32(ctx, 31, 0x10E924u);
    ctx->pc = 0x10E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E91Cu;
    // 0x10e920: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB48u, 0x10E91Cu, 0x10E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E924u;
label_10e924:
    // 0x10e924: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10e924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e928: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E928u;
    {
        const bool branch_taken_0x10e928 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e928) {
            ctx->pc = 0x10E92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E928u;
            // 0x10e92c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E950u;
            return;
        }
    }
    ctx->pc = 0x10E930u;
    // 0x10e930: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e934: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10e934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e938: 0x24a53d68  addiu       $a1, $a1, 0x3D68
    ctx->pc = 0x10e938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15720));
    // 0x10e93c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e940: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E940u;
    SET_GPR_U32(ctx, 31, 0x10E948u);
    ctx->pc = 0x10E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E940u;
    // 0x10e944: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E940u, 0x10E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E948u;
label_10e948:
    // 0x10e948: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x10E948u;
    {
        const bool branch_taken_0x10e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E948u;
        // 0x10e94c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e948) {
            ctx->pc = 0x10EA00u;
            return;
        }
    }
    ctx->pc = 0x10E950u;
}
