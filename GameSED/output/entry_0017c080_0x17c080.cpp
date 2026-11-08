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

// Function: entry_0017c080
// Address: 0x17c080 - 0x17c0bc
void entry_0017c080_0x17c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c080_0x17c080");
#endif

    switch (ctx->pc) {
        case 0x17c08cu: goto label_17c08c;
        case 0x17c0a0u: goto label_17c0a0;
        case 0x17c0b8u: goto label_17c0b8;
        default: break;
    }

    ctx->pc = 0x17c080u;

    // 0x17c080: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x17c080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17c084: 0xc06bd34  jal         func_1AF4D0
    ctx->pc = 0x17C084u;
    SET_GPR_U32(ctx, 31, 0x17C08Cu);
    ctx->pc = 0x17C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C084u;
    // 0x17c088: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4D0u, 0x17C084u, 0x17C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C08Cu;
label_17c08c:
    // 0x17c08c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c090: 0x1052000c  beq         $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x17C090u;
    {
        const bool branch_taken_0x17c090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x17C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C090u;
        // 0x17c094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c090) {
            ctx->pc = 0x17C0C4u;
            return;
        }
    }
    ctx->pc = 0x17C098u;
    // 0x17c098: 0xc05ea22  jal         func_17A888
    ctx->pc = 0x17C098u;
    SET_GPR_U32(ctx, 31, 0x17C0A0u);
    ctx->pc = 0x17A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A888u, 0x17C098u, 0x17C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0A0u;
label_17c0a0:
    // 0x17c0a0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x17c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x17c0a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C0A4u;
    {
        const bool branch_taken_0x17c0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0A4u;
        // 0x17c0a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0a4) {
            ctx->pc = 0x17C0BCu;
            return;
        }
    }
    ctx->pc = 0x17C0ACu;
    // 0x17c0ac: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c0b0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17C0B0u;
    SET_GPR_U32(ctx, 31, 0x17C0B8u);
    ctx->pc = 0x17C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0B0u;
    // 0x17c0b4: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17C0B0u, 0x17C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0B8u;
label_17c0b8:
    // 0x17c0b8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x17c0bcu;
}
